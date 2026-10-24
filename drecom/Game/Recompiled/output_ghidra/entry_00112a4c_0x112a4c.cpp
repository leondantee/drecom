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

// Function: entry_00112a4c
// Address: 0x112a4c - 0x112a58
void entry_00112a4c_0x112a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a4c_0x112a4c");
#endif

    switch (ctx->pc) {
        case 0x112a54u: goto label_112a54;
        default: break;
    }

    ctx->pc = 0x112a4cu;

    // 0x112a4c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112A4Cu;
    SET_GPR_U32(ctx, 31, 0x112A54u);
    ctx->pc = 0x112A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A4Cu;
    // 0x112a50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112A4Cu, 0x112A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A54u;
label_112a54:
    // 0x112a54: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x112a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x112a58u;
}
