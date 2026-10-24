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

// Function: caseD_2
// Address: 0x1ccdfc - 0x1cce88
void caseD_2_0x1ccdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ccdfc");
#endif

    switch (ctx->pc) {
        case 0x1cce2cu: goto label_1cce2c;
        case 0x1cce78u: goto label_1cce78;
        default: break;
    }

    ctx->pc = 0x1ccdfcu;

    // 0x1ccdfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce00: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cce00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce04: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1cce04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1cce08: 0x8ca60368  lw          $a2, 0x368($a1)
    ctx->pc = 0x1cce08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1cce0c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1cce0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cce10: 0x24070587  addiu       $a3, $zero, 0x587
    ctx->pc = 0x1cce10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1415));
    // 0x1cce14: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1cce14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cce18: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cce18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce1c: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x1cce1cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cce20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cce20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cce24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CCE24u;
    SET_GPR_U32(ctx, 31, 0x1CCE2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CCE24u, 0x1CCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE2Cu;
label_1cce2c:
    // 0x1cce2c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1cce2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cce30: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cce30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce34: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1cce34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1cce38: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1cce38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1cce3c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1cce3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1cce40: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1cce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1cce44: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cce44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cce48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce50: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x1cce50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
    // 0x1cce54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce58: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1cce58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
    // 0x1cce5c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce60: 0x90c413a5  lbu         $a0, 0x13A5($a2)
    ctx->pc = 0x1cce60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5029)));
    // 0x1cce64: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1cce64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cce68: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cce68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cce6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cce6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cce70: 0xc0c5064  jal         func_314190
    ctx->pc = 0x1CCE70u;
    SET_GPR_U32(ctx, 31, 0x1CCE78u);
    ctx->pc = 0x314190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314190u, 0x1CCE70u, 0x1CCE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE78u;
label_1cce78:
    // 0x1cce78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce7c: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x1cce7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cce80: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1cce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cce84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cce84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cce88u;
}
