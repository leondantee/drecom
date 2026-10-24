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

// Function: entry_001e6bf0
// Address: 0x1e6bf0 - 0x1e6fe4
void entry_001e6bf0_0x1e6bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6bf0_0x1e6bf0");
#endif

    switch (ctx->pc) {
        case 0x1e6c18u: goto label_1e6c18;
        case 0x1e6c44u: goto label_1e6c44;
        case 0x1e6c6cu: goto label_1e6c6c;
        case 0x1e6c8cu: goto label_1e6c8c;
        case 0x1e6ca0u: goto label_1e6ca0;
        case 0x1e6ce0u: goto label_1e6ce0;
        case 0x1e6d00u: goto label_1e6d00;
        case 0x1e6d1cu: goto label_1e6d1c;
        case 0x1e6d38u: goto label_1e6d38;
        case 0x1e6d60u: goto label_1e6d60;
        case 0x1e6d84u: goto label_1e6d84;
        case 0x1e6d9cu: goto label_1e6d9c;
        case 0x1e6ddcu: goto label_1e6ddc;
        case 0x1e6dfcu: goto label_1e6dfc;
        case 0x1e6e1cu: goto label_1e6e1c;
        case 0x1e6e38u: goto label_1e6e38;
        case 0x1e6e6cu: goto label_1e6e6c;
        case 0x1e6e98u: goto label_1e6e98;
        case 0x1e6eacu: goto label_1e6eac;
        case 0x1e6eecu: goto label_1e6eec;
        case 0x1e6f0cu: goto label_1e6f0c;
        case 0x1e6f28u: goto label_1e6f28;
        case 0x1e6f44u: goto label_1e6f44;
        case 0x1e6f70u: goto label_1e6f70;
        default: break;
    }

    ctx->pc = 0x1e6bf0u;

    // 0x1e6bf0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1e6bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6bf4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e6bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6bf8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1e6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e6bfc: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x1e6bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1e6c00: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1e6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e6c04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c08: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6c0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6c0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6c10: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6C10u;
    SET_GPR_U32(ctx, 31, 0x1E6C18u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6C18u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6C18u) { return; }
    ctx->pc = 0x1E6C18u;
label_1e6c18:
    // 0x1e6c18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6c18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c1c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1e6c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e6c20: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1e6c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6c24: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e6c28: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e6c2c: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x1e6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e6c30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6c30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6c38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6c38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6c3c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6C3Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C44u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6C44u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6C44u) { return; }
    ctx->pc = 0x1E6C44u;
label_1e6c44:
    // 0x1e6c44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c48: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1e6c48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e6c4c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1e6c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1e6c50: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1e6c50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e6c54: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1e6c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e6c58: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e6c5c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6c60: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6c60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6c64: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6C64u;
    SET_GPR_U32(ctx, 31, 0x1E6C6Cu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6C6Cu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6C6Cu) { return; }
    ctx->pc = 0x1E6C6Cu;
label_1e6c6c:
    // 0x1e6c6c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6c70: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e6c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e6c74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6c78: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x1e6c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e6c7c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6c80: 0x8fa60a50  lw          $a2, 0xA50($sp)
    ctx->pc = 0x1e6c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e6c84: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6C84u;
    SET_GPR_U32(ctx, 31, 0x1E6C8Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E6C8Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6C8Cu) { return; }
    ctx->pc = 0x1E6C8Cu;
label_1e6c8c:
    // 0x1e6c8c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e6c8cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c90: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e6c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6c94: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6c98: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E6C98u;
    SET_GPR_U32(ctx, 31, 0x1E6CA0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E6CA0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6CA0u) { return; }
    ctx->pc = 0x1E6CA0u;
label_1e6ca0:
    // 0x1e6ca0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6ca4: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e6ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6ca8: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6cac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6cacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e6cb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e6cb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e6cb4: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e6cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e6cb8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6cbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e6cbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6cc0: 0x0  nop
    ctx->pc = 0x1e6cc0u;
    // NOP
    // 0x1e6cc4: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e6cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e6cc8: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1e6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6ccc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6cccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6cd0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e6cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6cd4: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e6cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6cd8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E6CD8u;
    SET_GPR_U32(ctx, 31, 0x1E6CE0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E6CE0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6CE0u) { return; }
    ctx->pc = 0x1E6CE0u;
label_1e6ce0:
    // 0x1e6ce0: 0x3c153f80  lui         $s5, 0x3F80
    ctx->pc = 0x1e6ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6ce4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1e6ce4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6ce8: 0x0  nop
    ctx->pc = 0x1e6ce8u;
    // NOP
    // 0x1e6cec: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e6cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e6cf0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6cf4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6cf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6cf8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E6CF8u;
    SET_GPR_U32(ctx, 31, 0x1E6D00u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E6D00u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D00u) { return; }
    ctx->pc = 0x1E6D00u;
label_1e6d00:
    // 0x1e6d00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6d00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d04: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6d08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d0c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d10: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6d14: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E6D14u;
    SET_GPR_U32(ctx, 31, 0x1E6D1Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E6D1Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D1Cu) { return; }
    ctx->pc = 0x1E6D1Cu;
label_1e6d1c:
    // 0x1e6d1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6d1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d20: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6d24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6d2c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d30: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E6D30u;
    SET_GPR_U32(ctx, 31, 0x1E6D38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E6D38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D38u) { return; }
    ctx->pc = 0x1E6D38u;
label_1e6d38:
    // 0x1e6d38: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1e6d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6d3c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1e6d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6d40: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1e6d40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e6d44: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1e6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e6d48: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1e6d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e6d4c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d50: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6d50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d54: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6d54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6d58: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6D58u;
    SET_GPR_U32(ctx, 31, 0x1E6D60u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6D60u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D60u) { return; }
    ctx->pc = 0x1E6D60u;
label_1e6d60:
    // 0x1e6d60: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x1e6d60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e6d64: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1e6d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e6d68: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x1e6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e6d6c: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x1e6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1e6d70: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6d74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6d74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d78: 0x8fa60a50  lw          $a2, 0xA50($sp)
    ctx->pc = 0x1e6d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e6d7c: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6D7Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D84u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E6D84u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D84u) { return; }
    ctx->pc = 0x1E6D84u;
label_1e6d84:
    // 0x1e6d84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6d84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d88: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1e6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6d8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6d8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d90: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6d94: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E6D94u;
    SET_GPR_U32(ctx, 31, 0x1E6D9Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E6D9Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D9Cu) { return; }
    ctx->pc = 0x1E6D9Cu;
label_1e6d9c:
    // 0x1e6d9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6d9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6da0: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e6da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6da4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6da8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6da8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e6dac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e6dacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e6db0: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e6db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e6db4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e6db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6db8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e6db8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6dbc: 0x0  nop
    ctx->pc = 0x1e6dbcu;
    // NOP
    // 0x1e6dc0: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e6dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e6dc4: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1e6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6dc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6dcc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6dd0: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e6dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6dd4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E6DD4u;
    SET_GPR_U32(ctx, 31, 0x1E6DDCu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E6DDCu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6DDCu) { return; }
    ctx->pc = 0x1E6DDCu;
label_1e6ddc:
    // 0x1e6ddc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6ddcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6de0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e6de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6de4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e6de4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6de8: 0x0  nop
    ctx->pc = 0x1e6de8u;
    // NOP
    // 0x1e6dec: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e6decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e6df0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e6df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6df4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E6DF4u;
    SET_GPR_U32(ctx, 31, 0x1E6DFCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E6DFCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6DFCu) { return; }
    ctx->pc = 0x1E6DFCu;
label_1e6dfc:
    // 0x1e6dfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6dfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e00: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6e08: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e0c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e6e0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6e10: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6e14: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E6E14u;
    SET_GPR_U32(ctx, 31, 0x1E6E1Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E6E1Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6E1Cu) { return; }
    ctx->pc = 0x1E6E1Cu;
label_1e6e1c:
    // 0x1e6e1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6e1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e20: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e24: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6e28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6e2c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e30: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E6E30u;
    SET_GPR_U32(ctx, 31, 0x1E6E38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E6E38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6E38u) { return; }
    ctx->pc = 0x1E6E38u;
label_1e6e38:
    // 0x1e6e38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6e38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e3c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e6e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e6e40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e6e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e6e44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6e48: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x1e6e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e6e4c: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x1e6e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e6e50: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e6e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6e54: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1e6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e58: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1e6e58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6e5c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1e6e5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1e6e60: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6e60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6e64: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6E64u;
    SET_GPR_U32(ctx, 31, 0x1E6E6Cu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6E6Cu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6E6Cu) { return; }
    ctx->pc = 0x1E6E6Cu;
label_1e6e6c:
    // 0x1e6e6c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6e6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e70: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e6e70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e6e74: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e6e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e6e78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6e7c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x1e6e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e6e80: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6e84: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e6e84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6e88: 0x8fa30a50  lw          $v1, 0xA50($sp)
    ctx->pc = 0x1e6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e6e8c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1e6e8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6e90: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6E90u;
    SET_GPR_U32(ctx, 31, 0x1E6E98u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E6E98u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6E98u) { return; }
    ctx->pc = 0x1E6E98u;
label_1e6e98:
    // 0x1e6e98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6e98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e9c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6ea0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6ea4: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E6EA4u;
    SET_GPR_U32(ctx, 31, 0x1E6EACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E6EACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6EACu) { return; }
    ctx->pc = 0x1E6EACu;
label_1e6eac:
    // 0x1e6eac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e6eacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6eb0: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6eb4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6eb8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6eb8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e6ebc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e6ebcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e6ec0: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e6ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e6ec4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6ecc: 0x0  nop
    ctx->pc = 0x1e6eccu;
    // NOP
    // 0x1e6ed0: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e6ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e6ed4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6ed8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e6ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6edc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e6edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6ee0: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e6ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6ee4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E6EE4u;
    SET_GPR_U32(ctx, 31, 0x1E6EECu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E6EECu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6EECu) { return; }
    ctx->pc = 0x1E6EECu;
label_1e6eec:
    // 0x1e6eec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6eecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6ef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6ef8: 0x0  nop
    ctx->pc = 0x1e6ef8u;
    // NOP
    // 0x1e6efc: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e6efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e6f00: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e6f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f04: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E6F04u;
    SET_GPR_U32(ctx, 31, 0x1E6F0Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E6F0Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6F0Cu) { return; }
    ctx->pc = 0x1E6F0Cu;
label_1e6f0c:
    // 0x1e6f0c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f10: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f14: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e6f14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6f18: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1e6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6f1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6f1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f20: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E6F20u;
    SET_GPR_U32(ctx, 31, 0x1E6F28u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E6F28u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6F28u) { return; }
    ctx->pc = 0x1E6F28u;
label_1e6f28:
    // 0x1e6f28: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6f28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f2c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6f30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6f38: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f3c: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E6F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F44u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E6F44u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6F44u) { return; }
    ctx->pc = 0x1E6F44u;
label_1e6f44:
    // 0x1e6f44: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6f44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f48: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1e6f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e6f4c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1e6f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6f50: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1e6f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e6f54: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1e6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e6f58: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1e6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e6f5c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f60: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6f60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6f64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6f68: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6F68u;
    SET_GPR_U32(ctx, 31, 0x1E6F70u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6F70u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6F70u) { return; }
    ctx->pc = 0x1E6F70u;
label_1e6f70:
    // 0x1e6f70: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6f70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f74: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e6f78: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e6f7c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1e6f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6f80: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x1e6f80u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6f84: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e6f88: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x1e6f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e6f8c: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x1e6f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6f90: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x1e6f90u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6f94: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x1e6f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e6f98: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1e6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e6f9c: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x1e6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1e6fa0: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x1e6fa0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6fa4: 0x8fa501e4  lw          $a1, 0x1E4($sp)
    ctx->pc = 0x1e6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e6fa8: 0x8fa601c4  lw          $a2, 0x1C4($sp)
    ctx->pc = 0x1e6fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e6fac: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x1e6facu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e6fb0: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1e6fb0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6fb4: 0x2b61818  mult        $v1, $s5, $s6
    ctx->pc = 0x1e6fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e6fb8: 0x2971018  mult        $v0, $s4, $s7
    ctx->pc = 0x1e6fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6fbc: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x1e6fbcu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e6fc0: 0x1a800008  blez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6FC0u;
    {
        const bool branch_taken_0x1e6fc0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1e6fc0) {
            ctx->pc = 0x1E6FE4u;
            return;
        }
    }
    ctx->pc = 0x1E6FC8u;
    // 0x1e6fc8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e6fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6fcc: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x1e6fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e6fd0: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x1e6fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e6fd4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1e6fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e6fd8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e6fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1e6fdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6FDCu;
    {
        const bool branch_taken_0x1e6fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6fdc) {
            ctx->pc = 0x1E6FF8u;
            return;
        }
    }
    ctx->pc = 0x1E6FE4u;
}
