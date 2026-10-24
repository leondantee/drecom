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

// Function: entry_0010b63c
// Address: 0x10b63c - 0x10b658
void entry_0010b63c_0x10b63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b63c_0x10b63c");
#endif

    switch (ctx->pc) {
        case 0x10b648u: goto label_10b648;
        default: break;
    }

    ctx->pc = 0x10b63cu;

    // 0x10b63c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x10b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10b640: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B640u;
    SET_GPR_U32(ctx, 31, 0x10B648u);
    ctx->pc = 0x10B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B640u;
    // 0x10b644: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B640u, 0x10B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B648u;
label_10b648:
    // 0x10b648: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10b648u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10b64c: 0xae023d70  sw          $v0, 0x3D70($s0)
    ctx->pc = 0x10b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15728), GPR_U32(ctx, 2));
    // 0x10b650: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B650u;
    SET_GPR_U32(ctx, 31, 0x10B658u);
    ctx->pc = 0x10B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B650u;
    // 0x10b654: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B650u, 0x10B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B658u;
}
