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

// Function: caseD_4
// Address: 0x2dd8c8 - 0x2dd91c
void caseD_4_0x2dd8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2dd8c8");
#endif

    switch (ctx->pc) {
        case 0x2dd8e8u: goto label_2dd8e8;
        default: break;
    }

    ctx->pc = 0x2dd8c8u;

    // 0x2dd8c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd8cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd8d0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2dd8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2dd8d4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2dd8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2dd8d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dd8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd8dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dd8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dd8e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DD8E0u;
    SET_GPR_U32(ctx, 31, 0x2DD8E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DD8E0u, 0x2DD8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8E8u;
label_2dd8e8:
    // 0x2dd8e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd8e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd8ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dd8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dd8f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd8f4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dd8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd8f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd8fc: 0xa480127a  sh          $zero, 0x127A($a0)
    ctx->pc = 0x2dd8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dd900: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dd900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd904: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2dd904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd908: 0xa4c5127e  sh          $a1, 0x127E($a2)
    ctx->pc = 0x2dd908u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4734), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dd90c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dd90cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd910: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x2dd910u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2dd914: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2dd914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dd918: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x2dd918u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2dd91cu;
}
