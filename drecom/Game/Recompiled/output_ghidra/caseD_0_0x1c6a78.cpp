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
// Address: 0x1c6a78 - 0x1c6af4
void caseD_0_0x1c6a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1c6a78");
#endif

    switch (ctx->pc) {
        case 0x1c6ab0u: goto label_1c6ab0;
        default: break;
    }

    ctx->pc = 0x1c6a78u;

    // 0x1c6a78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6a7c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1c6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6a80: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1c6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1c6a84: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1c6a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c6a88: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1c6a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1c6a8c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1c6a90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6a94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6a98: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c6a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c6a9c: 0x24060a32  addiu       $a2, $zero, 0xA32
    ctx->pc = 0x1c6a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2610));
    // 0x1c6aa0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c6aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6aa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c6aa8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C6AA8u;
    SET_GPR_U32(ctx, 31, 0x1C6AB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C6AA8u, 0x1C6AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AB0u;
label_1c6ab0:
    // 0x1c6ab0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c6ab0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c6ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ab8: 0xa0601576  sb          $zero, 0x1576($v1)
    ctx->pc = 0x1c6ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6abc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c6ac0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ac4: 0xa0641577  sb          $a0, 0x1577($v1)
    ctx->pc = 0x1c6ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5495), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6ac8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c6ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c6acc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ad0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c6ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c6ad4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ad8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1c6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1c6adc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ae0: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1c6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
    // 0x1c6ae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ae8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c6ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c6aec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c6af0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c6af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c6af4u;
}
