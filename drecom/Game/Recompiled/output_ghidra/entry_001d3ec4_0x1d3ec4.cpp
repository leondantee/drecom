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

// Function: entry_001d3ec4
// Address: 0x1d3ec4 - 0x1d41f0
void entry_001d3ec4_0x1d3ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3ec4_0x1d3ec4");
#endif

    switch (ctx->pc) {
        case 0x1d3f44u: goto label_1d3f44;
        case 0x1d3f64u: goto label_1d3f64;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d4054u: goto label_1d4054;
        case 0x1d4060u: goto label_1d4060;
        case 0x1d414cu: goto label_1d414c;
        case 0x1d4160u: goto label_1d4160;
        case 0x1d416cu: goto label_1d416c;
        default: break;
    }

    ctx->pc = 0x1d3ec4u;

    // 0x1d3ec4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d3ec8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3ecc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1d3eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3ed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3ed4: 0x0  nop
    ctx->pc = 0x1d3ed4u;
    // NOP
    // 0x1d3ed8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d3ed8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3edc: 0x0  nop
    ctx->pc = 0x1d3edcu;
    // NOP
    // 0x1d3ee0: 0x450100c3  bc1t        . + 4 + (0xC3 << 2)
    ctx->pc = 0x1D3EE0u;
    {
        const bool branch_taken_0x1d3ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3ee0) {
            ctx->pc = 0x1D41F0u;
            return;
        }
    }
    ctx->pc = 0x1D3EE8u;
    // 0x1d3ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3eec: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d3ef0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3ef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3ef8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3efc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f00: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3f04: 0x24570020  addiu       $s7, $v0, 0x20
    ctx->pc = 0x1d3f04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d3f08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3f0c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d3f10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3f18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3f1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f20: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3f24: 0x245e0050  addiu       $fp, $v0, 0x50
    ctx->pc = 0x1d3f24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1d3f28: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d3f2c: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x1d3f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3f30: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x1d3f30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d3f34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d3f38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3f3c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D3F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F44u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D3F44u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3F44u) { return; }
    ctx->pc = 0x1D3F44u;
label_1d3f44:
    // 0x1d3f44: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d3f48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3f4c: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x1d3f4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1d3f50: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d3f54: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1d3f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d3f58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3f5c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F64u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D3F64u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3F64u) { return; }
    ctx->pc = 0x1D3F64u;
label_1d3f64:
    // 0x1d3f64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3f68: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d3f6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3f74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3f78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f7c: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x1d3f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3f84: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d3f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d3f88: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3f90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3f94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f98: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3f9c: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1d3f9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d3fa0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d3fa4: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1d3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d3fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3fac: 0x0  nop
    ctx->pc = 0x1d3facu;
    // NOP
    // 0x1d3fb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3fb4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d3fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d3fb8: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d3fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3fc0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d3fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3fc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d3fc4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d3fc8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d3fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d3fcc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d3fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3fd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d3fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3fd8: 0x0  nop
    ctx->pc = 0x1d3fd8u;
    // NOP
    // 0x1d3fdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d3fdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d3fe0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d3fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3fe8: 0x0  nop
    ctx->pc = 0x1d3fe8u;
    // NOP
    // 0x1d3fec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d3fecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d3ff0: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1d3ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3ff4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d3ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d3ff8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d3ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3ffc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d3ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4000: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d4000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d4004: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1d4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1d4008: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x1d4008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1d400c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d400cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4010: 0x0  nop
    ctx->pc = 0x1d4010u;
    // NOP
    // 0x1d4014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4018: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d401c: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d401cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d4020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4024: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4028: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d4028u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d402c: 0x0  nop
    ctx->pc = 0x1d402cu;
    // NOP
    // 0x1d4030: 0x0  nop
    ctx->pc = 0x1d4030u;
    // NOP
    // 0x1d4034: 0x0  nop
    ctx->pc = 0x1d4034u;
    // NOP
    // 0x1d4038: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D4038u;
    SET_GPR_U32(ctx, 31, 0x1D4040u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D4038u, 0x1D4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4040u;
label_1d4040:
    // 0x1d4040: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d4040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d4044: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d4044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d4048: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d404c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D404Cu;
    SET_GPR_U32(ctx, 31, 0x1D4054u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D404Cu, 0x1D4054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4054u;
label_1d4054:
    // 0x1d4054: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4058: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D4058u;
    SET_GPR_U32(ctx, 31, 0x1D4060u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D4058u, 0x1D4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4060u;
label_1d4060:
    // 0x1d4060: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4064: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d4064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4068: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d406c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d406cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d4070: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4074: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d4074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4078: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d4078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d407c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d407cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4080: 0x0  nop
    ctx->pc = 0x1d4080u;
    // NOP
    // 0x1d4084: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4088: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d408c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4090: 0x0  nop
    ctx->pc = 0x1d4090u;
    // NOP
    // 0x1d4094: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4094u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4098: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1d4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d409c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d409cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d40a0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1d40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d40a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d40a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d40a8: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d40a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d40ac: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1d40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d40b0: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1d40b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d40b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d40b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d40b8: 0x0  nop
    ctx->pc = 0x1d40b8u;
    // NOP
    // 0x1d40bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d40bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d40c0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d40c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d40c4: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d40c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d40c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d40cc: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d40ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d40d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d40d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d40d4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1d40d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1d40d8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1d40d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d40dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d40e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d40e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d40e4: 0x0  nop
    ctx->pc = 0x1d40e4u;
    // NOP
    // 0x1d40e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d40e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d40ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d40f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d40f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d40f4: 0x0  nop
    ctx->pc = 0x1d40f4u;
    // NOP
    // 0x1d40f8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d40f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d40fc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1d40fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4100: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4104: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1d4104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d410c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1d410cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1d4110: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1d4110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1d4114: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x1d4114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1d4118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d411c: 0x0  nop
    ctx->pc = 0x1d411cu;
    // NOP
    // 0x1d4120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4124: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d4128: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d4128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d412c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d412cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4130: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4134: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d4134u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d4138: 0x0  nop
    ctx->pc = 0x1d4138u;
    // NOP
    // 0x1d413c: 0x0  nop
    ctx->pc = 0x1d413cu;
    // NOP
    // 0x1d4140: 0x0  nop
    ctx->pc = 0x1d4140u;
    // NOP
    // 0x1d4144: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D4144u;
    SET_GPR_U32(ctx, 31, 0x1D414Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D4144u, 0x1D414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D414Cu;
label_1d414c:
    // 0x1d414c: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d414cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d4150: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d4150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d4154: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4154u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4158: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D4158u;
    SET_GPR_U32(ctx, 31, 0x1D4160u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D4158u, 0x1D4160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4160u;
label_1d4160:
    // 0x1d4160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4164: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D4164u;
    SET_GPR_U32(ctx, 31, 0x1D416Cu);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D4164u, 0x1D416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D416Cu;
label_1d416c:
    // 0x1d416c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d416cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4170: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4174: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4178: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d417c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d417cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4180: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4184: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d4184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d418c: 0x0  nop
    ctx->pc = 0x1d418cu;
    // NOP
    // 0x1d4190: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4190u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4194: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d4198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d419c: 0x0  nop
    ctx->pc = 0x1d419cu;
    // NOP
    // 0x1d41a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d41a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d41a4: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1d41a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d41a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d41a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d41ac: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1d41acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d41b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d41b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d41b4: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d41b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d41b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d41bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d41bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d41c0: 0x0  nop
    ctx->pc = 0x1d41c0u;
    // NOP
    // 0x1d41c4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1d41c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1d41c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d41c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d41cc: 0x0  nop
    ctx->pc = 0x1d41ccu;
    // NOP
    // 0x1d41d0: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1d41d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1d41d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d41d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d41d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d41dc: 0x0  nop
    ctx->pc = 0x1d41dcu;
    // NOP
    // 0x1d41e0: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1d41e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1d41e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d41e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d41e8: 0x0  nop
    ctx->pc = 0x1d41e8u;
    // NOP
    // 0x1d41ec: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x1d41ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->pc = 0x1d41f0u;
}
