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

// Function: entry_001c0c70
// Address: 0x1c0c70 - 0x1c0cc0
void entry_001c0c70_0x1c0c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0c70_0x1c0c70");
#endif

    switch (ctx->pc) {
        case 0x1c0ca0u: goto label_1c0ca0;
        case 0x1c0cb8u: goto label_1c0cb8;
        default: break;
    }

    ctx->pc = 0x1c0c70u;

    // 0x1c0c70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0c74: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c0c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c0c78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0C78u;
    {
        const bool branch_taken_0x1c0c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c78) {
            ctx->pc = 0x1C0CC0u;
            return;
        }
    }
    ctx->pc = 0x1C0C80u;
    // 0x1c0c80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0c84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0c88: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0c8c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1c0c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c0c90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0c94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0c98: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0C98u;
    SET_GPR_U32(ctx, 31, 0x1C0CA0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0C98u, 0x1C0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CA0u;
label_1c0ca0:
    // 0x1c0ca0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0ca4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0ca8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1c0ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c0cac: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1c0cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c0cb0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C0CB0u;
    SET_GPR_U32(ctx, 31, 0x1C0CB8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C0CB0u, 0x1C0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CB8u;
label_1c0cb8:
    // 0x1c0cb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C0CB8u;
    {
        const bool branch_taken_0x1c0cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0cb8) {
            ctx->pc = 0x1C0CF8u;
            return;
        }
    }
    ctx->pc = 0x1C0CC0u;
}
