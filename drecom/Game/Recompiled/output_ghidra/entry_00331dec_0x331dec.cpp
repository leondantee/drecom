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

// Function: entry_00331dec
// Address: 0x331dec - 0x331f24
void entry_00331dec_0x331dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331dec_0x331dec");
#endif

    switch (ctx->pc) {
        case 0x331f18u: goto label_331f18;
        default: break;
    }

    ctx->pc = 0x331decu;

    // 0x331dec: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x331decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x331df0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331df0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331df4: 0x0  nop
    ctx->pc = 0x331df4u;
    // NOP
    // 0x331df8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x331df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331dfc: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x331dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x331e00: 0x826665ae  lb          $a2, 0x65AE($s3)
    ctx->pc = 0x331e00u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
    // 0x331e04: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x331e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x331e08: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x331e08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x331e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x331e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x331e10: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x331e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331e14: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x331e14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x331e18: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x331e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x331e1c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x331e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x331e20: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x331e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x331e24: 0x24465e60  addiu       $a2, $v0, 0x5E60
    ctx->pc = 0x331e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24160));
    // 0x331e28: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x331e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x331e2c: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x331e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x331e30: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x331e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x331e34: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x331e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x331e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x331e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x331e3c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x331e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x331e40: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x331e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x331e44: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x331e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331e48: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x331e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x331e4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x331e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331e50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x331e50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x331e54: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x331e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331e58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x331e5c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x331e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x331e60: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x331e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x331e64: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x331e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331e68: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x331e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x331e6c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x331e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331e70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x331e70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x331e74: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x331e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331e78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x331e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x331e7c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x331e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x331e80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x331e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x331e84: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x331e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x331e88: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x331e88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x331e8c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x331e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x331e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331e94: 0x0  nop
    ctx->pc = 0x331e94u;
    // NOP
    // 0x331e98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331e9c: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x331e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
    // 0x331ea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331ea4: 0x0  nop
    ctx->pc = 0x331ea4u;
    // NOP
    // 0x331ea8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x331ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331eac: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x331eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331eb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x331eb4: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x331eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x331eb8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x331eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x331ebc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x331ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x331ec0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x331ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x331ec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x331ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x331ec8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x331ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x331ecc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x331eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x331ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331ed4: 0x0  nop
    ctx->pc = 0x331ed4u;
    // NOP
    // 0x331ed8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331edc: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x331edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x331ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331ee4: 0x0  nop
    ctx->pc = 0x331ee4u;
    // NOP
    // 0x331ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x331ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331eec: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x331eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331ef0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x331ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x331ef4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x331ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x331ef8: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x331ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x331efc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x331efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x331f00: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x331f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x331f04: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x331f04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x331f08: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x331f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x331f0c: 0x246626f0  addiu       $a2, $v1, 0x26F0
    ctx->pc = 0x331f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 9968));
    // 0x331f10: 0xc040c80  jal         func_103200
    ctx->pc = 0x331F10u;
    SET_GPR_U32(ctx, 31, 0x331F18u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x331F18u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x331F18u) { return; }
    ctx->pc = 0x331F18u;
label_331f18:
    // 0x331f18: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x331f18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x331f1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x331F1Cu;
    {
        const bool branch_taken_0x331f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331f1c) {
            ctx->pc = 0x331F50u;
            return;
        }
    }
    ctx->pc = 0x331F24u;
}
