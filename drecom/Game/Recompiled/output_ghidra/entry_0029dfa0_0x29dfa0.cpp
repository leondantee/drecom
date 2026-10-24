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

// Function: entry_0029dfa0
// Address: 0x29dfa0 - 0x29dff0
void entry_0029dfa0_0x29dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029dfa0_0x29dfa0");
#endif

    switch (ctx->pc) {
        case 0x29dfccu: goto label_29dfcc;
        case 0x29dfd4u: goto label_29dfd4;
        default: break;
    }

    ctx->pc = 0x29dfa0u;

    // 0x29dfa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dfa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dfa8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29dfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29dfac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dfb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dfb4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29dfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29dfb8: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x29dfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29dfbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29dfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dfc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29dfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29dfc4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29DFC4u;
    SET_GPR_U32(ctx, 31, 0x29DFCCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29DFC4u, 0x29DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFCCu;
label_29dfcc:
    // 0x29dfcc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29DFCCu;
    SET_GPR_U32(ctx, 31, 0x29DFD4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29DFCCu, 0x29DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFD4u;
label_29dfd4:
    // 0x29dfd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29dfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29dfd8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x29dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x29dfdc: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x29dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x29dfe0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29dfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29dfe4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29dfe4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29dfe8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dfec: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29dfecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x29dff0u;
}
