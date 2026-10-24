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

// Function: entry_001c04b0
// Address: 0x1c04b0 - 0x1c0500
void entry_001c04b0_0x1c04b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c04b0_0x1c04b0");
#endif

    switch (ctx->pc) {
        case 0x1c04e0u: goto label_1c04e0;
        case 0x1c04f8u: goto label_1c04f8;
        default: break;
    }

    ctx->pc = 0x1c04b0u;

    // 0x1c04b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c04b4: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c04b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c04b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C04B8u;
    {
        const bool branch_taken_0x1c04b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c04b8) {
            ctx->pc = 0x1C0500u;
            return;
        }
    }
    ctx->pc = 0x1C04C0u;
    // 0x1c04c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c04c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c04c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c04c8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c04c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c04cc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1c04ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c04d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c04d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c04d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c04d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c04d8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C04D8u;
    SET_GPR_U32(ctx, 31, 0x1C04E0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C04D8u, 0x1C04E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04E0u;
label_1c04e0:
    // 0x1c04e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c04e4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c04e8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1c04e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c04ec: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1c04ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c04f0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C04F0u;
    SET_GPR_U32(ctx, 31, 0x1C04F8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C04F0u, 0x1C04F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04F8u;
label_1c04f8:
    // 0x1c04f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C04F8u;
    {
        const bool branch_taken_0x1c04f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c04f8) {
            ctx->pc = 0x1C0538u;
            return;
        }
    }
    ctx->pc = 0x1C0500u;
}
