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

// Function: entry_0017f1dc
// Address: 0x17f1dc - 0x17f1f8
void entry_0017f1dc_0x17f1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f1dc_0x17f1dc");
#endif

    switch (ctx->pc) {
        case 0x17f1ecu: goto label_17f1ec;
        default: break;
    }

    ctx->pc = 0x17f1dcu;

    // 0x17f1dc: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x17f1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x17f1e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f1e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f1e4: 0xc05f61c  jal         func_17D870
    ctx->pc = 0x17F1E4u;
    SET_GPR_U32(ctx, 31, 0x17F1ECu);
    ctx->pc = 0x17D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D870u, 0x17F1E4u, 0x17F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1ECu;
label_17f1ec:
    // 0x17f1ec: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17f1f0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x17f1f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17f1f4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x17f1f4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->pc = 0x17f1f8u;
}
