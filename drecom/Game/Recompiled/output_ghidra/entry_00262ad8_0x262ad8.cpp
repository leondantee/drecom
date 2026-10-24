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

// Function: entry_00262ad8
// Address: 0x262ad8 - 0x262bcc
void entry_00262ad8_0x262ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262ad8_0x262ad8");
#endif

    switch (ctx->pc) {
        case 0x262aecu: goto label_262aec;
        case 0x262b00u: goto label_262b00;
        case 0x262b14u: goto label_262b14;
        case 0x262b28u: goto label_262b28;
        case 0x262b3cu: goto label_262b3c;
        case 0x262b50u: goto label_262b50;
        case 0x262b60u: goto label_262b60;
        case 0x262b74u: goto label_262b74;
        case 0x262b84u: goto label_262b84;
        case 0x262b98u: goto label_262b98;
        case 0x262ba8u: goto label_262ba8;
        case 0x262bb8u: goto label_262bb8;
        default: break;
    }

    ctx->pc = 0x262ad8u;

    // 0x262ad8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262adc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262ae0: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x262ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x262ae4: 0xc040c80  jal         func_103200
    ctx->pc = 0x262AE4u;
    SET_GPR_U32(ctx, 31, 0x262AECu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262AECu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262AECu) { return; }
    ctx->pc = 0x262AECu;
label_262aec:
    // 0x262aec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262af0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x262af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262af4: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x262af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x262af8: 0xc040c80  jal         func_103200
    ctx->pc = 0x262AF8u;
    SET_GPR_U32(ctx, 31, 0x262B00u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262B00u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B00u) { return; }
    ctx->pc = 0x262B00u;
label_262b00:
    // 0x262b00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b08: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x262b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262b0c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262B0Cu;
    SET_GPR_U32(ctx, 31, 0x262B14u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262B14u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B14u) { return; }
    ctx->pc = 0x262B14u;
label_262b14:
    // 0x262b14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b1c: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x262b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262b20: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262B20u;
    SET_GPR_U32(ctx, 31, 0x262B28u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262B28u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B28u) { return; }
    ctx->pc = 0x262B28u;
label_262b28:
    // 0x262b28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b2c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b30: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x262b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x262b34: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x262B34u;
    SET_GPR_U32(ctx, 31, 0x262B3Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x262B3Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B3Cu) { return; }
    ctx->pc = 0x262B3Cu;
label_262b3c:
    // 0x262b3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b44: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x262b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x262b48: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x262B48u;
    SET_GPR_U32(ctx, 31, 0x262B50u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x262B50u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B50u) { return; }
    ctx->pc = 0x262B50u;
label_262b50:
    // 0x262b50: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x262b50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262b54: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b58: 0xc040c24  jal         func_103090
    ctx->pc = 0x262B58u;
    SET_GPR_U32(ctx, 31, 0x262B60u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262B60u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B60u) { return; }
    ctx->pc = 0x262B60u;
label_262b60:
    // 0x262b60: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x262b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262b64: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x262b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b6c: 0xc040c12  jal         func_103048
    ctx->pc = 0x262B6Cu;
    SET_GPR_U32(ctx, 31, 0x262B74u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262B74u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B74u) { return; }
    ctx->pc = 0x262B74u;
label_262b74:
    // 0x262b74: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x262b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x262b78: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x262b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262b7c: 0xc040c24  jal         func_103090
    ctx->pc = 0x262B7Cu;
    SET_GPR_U32(ctx, 31, 0x262B84u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262B84u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B84u) { return; }
    ctx->pc = 0x262B84u;
label_262b84:
    // 0x262b84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b88: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x262b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262b8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x262b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b90: 0xc040c12  jal         func_103048
    ctx->pc = 0x262B90u;
    SET_GPR_U32(ctx, 31, 0x262B98u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262B98u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B98u) { return; }
    ctx->pc = 0x262B98u;
label_262b98:
    // 0x262b98: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x262b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262b9c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262ba0: 0xc040c24  jal         func_103090
    ctx->pc = 0x262BA0u;
    SET_GPR_U32(ctx, 31, 0x262BA8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262BA8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262BA8u) { return; }
    ctx->pc = 0x262BA8u;
label_262ba8:
    // 0x262ba8: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x262ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x262bac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262bb0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x262BB0u;
    SET_GPR_U32(ctx, 31, 0x262BB8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x262BB8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262BB8u) { return; }
    ctx->pc = 0x262BB8u;
label_262bb8:
    // 0x262bb8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x262bb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x262bbc: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x262bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x262bc0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x262bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x262bc4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x262BC4u;
    {
        const bool branch_taken_0x262bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262bc4) {
            ctx->pc = 0x262D68u;
            return;
        }
    }
    ctx->pc = 0x262BCCu;
}
