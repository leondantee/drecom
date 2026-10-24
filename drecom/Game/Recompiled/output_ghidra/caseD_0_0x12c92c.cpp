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

// Function: caseD_0
// Address: 0x12c92c - 0x12c9a8
void caseD_0_0x12c92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12c92c");
#endif

    switch (ctx->pc) {
        case 0x12c954u: goto label_12c954;
        case 0x12c968u: goto label_12c968;
        case 0x12c974u: goto label_12c974;
        default: break;
    }

    ctx->pc = 0x12c92cu;

    // 0x12c92c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12c92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c930: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x12c930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c934: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x12c934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x12c938: 0x8cc80368  lw          $t0, 0x368($a2)
    ctx->pc = 0x12c938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
    // 0x12c93c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x12c93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x12c940: 0x2406052f  addiu       $a2, $zero, 0x52F
    ctx->pc = 0x12c940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1327));
    // 0x12c944: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12c948: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12c94c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12C94Cu;
    SET_GPR_U32(ctx, 31, 0x12C954u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12C94Cu, 0x12C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C954u;
label_12c954:
    // 0x12c954: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c958: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c95c: 0x246512b0  addiu       $a1, $v1, 0x12B0
    ctx->pc = 0x12c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4784));
    // 0x12c960: 0xc096c60  jal         func_25B180
    ctx->pc = 0x12C960u;
    SET_GPR_U32(ctx, 31, 0x12C968u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x12C960u, 0x12C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C968u;
label_12c968:
    // 0x12c968: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c96c: 0xc05ce54  jal         func_173950
    ctx->pc = 0x12C96Cu;
    SET_GPR_U32(ctx, 31, 0x12C974u);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x12C96Cu, 0x12C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C974u;
label_12c974:
    // 0x12c974: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x12c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12c978: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c97c: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x12c97cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x12c980: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x12c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12c984: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c988: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x12c988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c98c: 0xae0013fc  sw          $zero, 0x13FC($s0)
    ctx->pc = 0x12c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5116), GPR_U32(ctx, 0));
    // 0x12c990: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c994: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x12c994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c998: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c99c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x12c99cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x12c9a0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x12c9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c9a4: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x12c9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x12c9a8u;
}
