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

// Function: caseD_6
// Address: 0x1cf3a4 - 0x1cf3d8
void caseD_6_0x1cf3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1cf3a4");
#endif

    switch (ctx->pc) {
        case 0x1cf3c8u: goto label_1cf3c8;
        default: break;
    }

    ctx->pc = 0x1cf3a4u;

    // 0x1cf3a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf3a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf3ac: 0x8ca20368  lw          $v0, 0x368($a1)
    ctx->pc = 0x1cf3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1cf3b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cf3b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf3b4: 0x24061e41  addiu       $a2, $zero, 0x1E41
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7745));
    // 0x1cf3b8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf3bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cf3c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CF3C0u;
    SET_GPR_U32(ctx, 31, 0x1CF3C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF3C0u, 0x1CF3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF3C8u;
label_1cf3c8:
    // 0x1cf3c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf3cc: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1cf3ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cf3d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cf3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cf3d4: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1cf3d8u;
}
