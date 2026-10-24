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

// Function: entry_001ce264
// Address: 0x1ce264 - 0x1ce2f0
void entry_001ce264_0x1ce264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce264_0x1ce264");
#endif

    switch (ctx->pc) {
        case 0x1ce29cu: goto label_1ce29c;
        case 0x1ce2b8u: goto label_1ce2b8;
        default: break;
    }

    ctx->pc = 0x1ce264u;

    // 0x1ce264: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce268: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1ce268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ce26c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1ce26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1ce270: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1ce270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ce274: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1ce274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1ce278: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ce278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1ce27c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce280: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce284: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1ce284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1ce288: 0x24061e88  addiu       $a2, $zero, 0x1E88
    ctx->pc = 0x1ce288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7816));
    // 0x1ce28c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce290: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ce290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ce294: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CE294u;
    SET_GPR_U32(ctx, 31, 0x1CE29Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CE294u, 0x1CE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE29Cu;
label_1ce29c:
    // 0x1ce29c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce29cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce2a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2a4: 0x90a313a5  lbu         $v1, 0x13A5($a1)
    ctx->pc = 0x1ce2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5029)));
    // 0x1ce2a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ce2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ce2ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ce2acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce2b0: 0xc0c5084  jal         func_314210
    ctx->pc = 0x1CE2B0u;
    SET_GPR_U32(ctx, 31, 0x1CE2B8u);
    ctx->pc = 0x314210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314210u, 0x1CE2B0u, 0x1CE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2B8u;
label_1ce2b8:
    // 0x1ce2b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce2b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce2bc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2c0: 0xa4a01278  sh          $zero, 0x1278($a1)
    ctx->pc = 0x1ce2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce2c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2c8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1ce2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1ce2cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce2d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2d4: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x1ce2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
    // 0x1ce2d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2dc: 0xac401b6c  sw          $zero, 0x1B6C($v0)
    ctx->pc = 0x1ce2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 0));
    // 0x1ce2e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2e4: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1ce2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ce2e8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1ce2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ce2ec: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1ce2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1ce2f0u;
}
