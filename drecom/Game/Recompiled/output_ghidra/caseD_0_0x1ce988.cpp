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
// Address: 0x1ce988 - 0x1cea20
void caseD_0_0x1ce988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1ce988");
#endif

    switch (ctx->pc) {
        case 0x1ce9c0u: goto label_1ce9c0;
        case 0x1cea0cu: goto label_1cea0c;
        default: break;
    }

    ctx->pc = 0x1ce988u;

    // 0x1ce988: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce98c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1ce98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ce990: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1ce990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1ce994: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x1ce994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ce998: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x1ce998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ce99c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1ce99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1ce9a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ce9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce9a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ce9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce9a8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ce9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ce9ac: 0x24061e32  addiu       $a2, $zero, 0x1E32
    ctx->pc = 0x1ce9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7730));
    // 0x1ce9b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1ce9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce9b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ce9b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ce9b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CE9B8u;
    SET_GPR_U32(ctx, 31, 0x1CE9C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CE9B8u, 0x1CE9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9C0u;
label_1ce9c0:
    // 0x1ce9c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce9c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce9c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ce9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce9c8: 0xa0601576  sb          $zero, 0x1576($v1)
    ctx->pc = 0x1ce9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce9cc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1ce9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ce9d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ce9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce9d4: 0xa0831577  sb          $v1, 0x1577($a0)
    ctx->pc = 0x1ce9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5495), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce9d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ce9dc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ce9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce9e0: 0xa4c51278  sh          $a1, 0x1278($a2)
    ctx->pc = 0x1ce9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ce9e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ce9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce9e8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1ce9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1ce9ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ce9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce9f0: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1ce9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
    // 0x1ce9f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ce9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce9f8: 0x906313a5  lbu         $v1, 0x13A5($v1)
    ctx->pc = 0x1ce9f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5029)));
    // 0x1ce9fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ce9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cea00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cea00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cea04: 0xc0c50a4  jal         func_314290
    ctx->pc = 0x1CEA04u;
    SET_GPR_U32(ctx, 31, 0x1CEA0Cu);
    ctx->pc = 0x314290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314290u, 0x1CEA04u, 0x1CEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA0Cu;
label_1cea0c:
    // 0x1cea0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cea0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cea10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cea14: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x1cea14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1cea18: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1cea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cea1c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cea1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1cea20u;
}
