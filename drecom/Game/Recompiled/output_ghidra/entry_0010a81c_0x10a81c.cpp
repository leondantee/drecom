#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010a81c
// Address: 0x10a81c - 0x10a834
void entry_0010a81c_0x10a81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a81c_0x10a81c");
#endif

    switch (ctx->pc) {
        case 0x10a824u: goto label_10a824;
        default: break;
    }

    ctx->pc = 0x10a81cu;

    // 0x10a81c: 0xc041fde  jal         func_107F78
    ctx->pc = 0x10A81Cu;
    SET_GPR_U32(ctx, 31, 0x10A824u);
    ctx->pc = 0x10A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A81Cu;
    // 0x10a820: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F78u, 0x10A81Cu, 0x10A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A824u;
label_10a824:
    // 0x10a824: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10a824u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x10a828: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10a828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a82c: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x10A82Cu;
    SET_GPR_U32(ctx, 31, 0x10A834u);
    ctx->pc = 0x10A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A82Cu;
    // 0x10a830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x10A82Cu, 0x10A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A834u;
}
