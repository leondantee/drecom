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

// Function: entry_001c0cc0
// Address: 0x1c0cc0 - 0x1c0cf8
void entry_001c0cc0_0x1c0cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0cc0_0x1c0cc0");
#endif

    switch (ctx->pc) {
        case 0x1c0ce0u: goto label_1c0ce0;
        default: break;
    }

    ctx->pc = 0x1c0cc0u;

    // 0x1c0cc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0cc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0cc8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0ccc: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1c0cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c0cd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0cd4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0cd8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0CD8u;
    SET_GPR_U32(ctx, 31, 0x1C0CE0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0CD8u, 0x1C0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CE0u;
label_1c0ce0:
    // 0x1c0ce0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0ce4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0ce8: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1c0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c0cec: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c0cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c0cf0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C0CF0u;
    SET_GPR_U32(ctx, 31, 0x1C0CF8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C0CF0u, 0x1C0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CF8u;
}
