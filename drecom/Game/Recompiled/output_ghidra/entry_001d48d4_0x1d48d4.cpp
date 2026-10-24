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

// Function: entry_001d48d4
// Address: 0x1d48d4 - 0x1d4c10
void entry_001d48d4_0x1d48d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48d4_0x1d48d4");
#endif

    switch (ctx->pc) {
        case 0x1d4958u: goto label_1d4958;
        case 0x1d4978u: goto label_1d4978;
        case 0x1d4a54u: goto label_1d4a54;
        case 0x1d4a6cu: goto label_1d4a6c;
        case 0x1d4a78u: goto label_1d4a78;
        case 0x1d4b6cu: goto label_1d4b6c;
        case 0x1d4b80u: goto label_1d4b80;
        case 0x1d4b8cu: goto label_1d4b8c;
        default: break;
    }

    ctx->pc = 0x1d48d4u;

    // 0x1d48d4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d48d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d48dc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1d48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d48e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d48e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d48e4: 0x0  nop
    ctx->pc = 0x1d48e4u;
    // NOP
    // 0x1d48e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d48e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d48ec: 0x0  nop
    ctx->pc = 0x1d48ecu;
    // NOP
    // 0x1d48f0: 0x450100c7  bc1t        . + 4 + (0xC7 << 2)
    ctx->pc = 0x1D48F0u;
    {
        const bool branch_taken_0x1d48f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d48f0) {
            ctx->pc = 0x1D4C10u;
            return;
        }
    }
    ctx->pc = 0x1D48F8u;
    // 0x1d48f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d48fc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4900: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4908: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d490c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d490cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4910: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d4910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4914: 0x245e0020  addiu       $fp, $v0, 0x20
    ctx->pc = 0x1d4914u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d491c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d491cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4920: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4928: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d492c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d492cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4930: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4934: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1d4934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1d4938: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x1d4938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1d493c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d493cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d4940: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1d4940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4944: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x1d4944u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1d4948: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d4948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d494c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d494cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4950: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D4950u;
    SET_GPR_U32(ctx, 31, 0x1D4958u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D4958u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4958u) { return; }
    ctx->pc = 0x1D4958u;
label_1d4958:
    // 0x1d4958: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d4958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d495c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4960: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x1d4960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d4964: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d4964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4968: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1d4968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d496c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d496cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4970: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D4970u;
    SET_GPR_U32(ctx, 31, 0x1D4978u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D4978u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4978u) { return; }
    ctx->pc = 0x1D4978u;
label_1d4978:
    // 0x1d4978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d497c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d497cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4980: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4988: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d498c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d498cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4990: 0x2c29821  addu        $s3, $s6, $v0
    ctx->pc = 0x1d4990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4998: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d4998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d499c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d499cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d49a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d49a4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d49a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d49a8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1d49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d49ac: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d49acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d49b0: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1d49b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d49b4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1d49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d49b8: 0x24439000  addiu       $v1, $v0, -0x7000
    ctx->pc = 0x1d49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d49bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d49bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d49c0: 0x0  nop
    ctx->pc = 0x1d49c0u;
    // NOP
    // 0x1d49c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d49c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d49c8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d49c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1d49cc: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d49d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d49d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d49d4: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d49d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d49d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d49d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d49dc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d49dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d49e0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d49e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d49e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d49e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d49e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d49ec: 0x0  nop
    ctx->pc = 0x1d49ecu;
    // NOP
    // 0x1d49f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d49f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d49f4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d49f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d49f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d49fc: 0x0  nop
    ctx->pc = 0x1d49fcu;
    // NOP
    // 0x1d4a00: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4a00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4a04: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4a08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4a0c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d4a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4a10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4a14: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d4a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d4a18: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1d4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1d4a1c: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1d4a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4a24: 0x0  nop
    ctx->pc = 0x1d4a24u;
    // NOP
    // 0x1d4a28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4a2c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1d4a30: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d4a34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4a38: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4a3c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d4a3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d4a40: 0x0  nop
    ctx->pc = 0x1d4a40u;
    // NOP
    // 0x1d4a44: 0x0  nop
    ctx->pc = 0x1d4a44u;
    // NOP
    // 0x1d4a48: 0x0  nop
    ctx->pc = 0x1d4a48u;
    // NOP
    // 0x1d4a4c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D4A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A54u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D4A4Cu, 0x1D4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A54u;
label_1d4a54:
    // 0x1d4a54: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d4a58: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1d4a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d4a5c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1d4a5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d4a60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4a60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4a64: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D4A64u;
    SET_GPR_U32(ctx, 31, 0x1D4A6Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D4A64u, 0x1D4A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A6Cu;
label_1d4a6c:
    // 0x1d4a6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4a6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4a70: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D4A70u;
    SET_GPR_U32(ctx, 31, 0x1D4A78u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D4A70u, 0x1D4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A78u;
label_1d4a78:
    // 0x1d4a78: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4a7c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d4a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4a80: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4a84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d4a88: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4a8c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d4a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4a90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4a98: 0x0  nop
    ctx->pc = 0x1d4a98u;
    // NOP
    // 0x1d4a9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4a9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4aa0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d4aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4aa8: 0x0  nop
    ctx->pc = 0x1d4aa8u;
    // NOP
    // 0x1d4aac: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4aacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4ab0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4ab4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4ab8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4abc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4ac0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4ac4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1d4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d4ac8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4acc: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d4ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4ad4: 0x0  nop
    ctx->pc = 0x1d4ad4u;
    // NOP
    // 0x1d4ad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4adc: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1d4ae0: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d4ae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4ae8: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4aec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d4aecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d4af0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1d4af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1d4af4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1d4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4af8: 0x3c153f00  lui         $s5, 0x3F00
    ctx->pc = 0x1d4af8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4afc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1d4afcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b00: 0x0  nop
    ctx->pc = 0x1d4b00u;
    // NOP
    // 0x1d4b04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4b04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4b08: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d4b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b10: 0x0  nop
    ctx->pc = 0x1d4b10u;
    // NOP
    // 0x1d4b14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4b14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4b18: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4b1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4b20: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1d4b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4b24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4b28: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1d4b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1d4b2c: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d4b30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d4b34: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x1d4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1d4b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b3c: 0x0  nop
    ctx->pc = 0x1d4b3cu;
    // NOP
    // 0x1d4b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4b44: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1d4b48: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d4b4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4b50: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4b54: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d4b54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d4b58: 0x0  nop
    ctx->pc = 0x1d4b58u;
    // NOP
    // 0x1d4b5c: 0x0  nop
    ctx->pc = 0x1d4b5cu;
    // NOP
    // 0x1d4b60: 0x0  nop
    ctx->pc = 0x1d4b60u;
    // NOP
    // 0x1d4b64: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D4B64u;
    SET_GPR_U32(ctx, 31, 0x1D4B6Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D4B64u, 0x1D4B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B6Cu;
label_1d4b6c:
    // 0x1d4b6c: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d4b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d4b70: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d4b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d4b74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4b74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4b78: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D4B78u;
    SET_GPR_U32(ctx, 31, 0x1D4B80u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D4B78u, 0x1D4B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B80u;
label_1d4b80:
    // 0x1d4b80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4b80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4b84: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D4B84u;
    SET_GPR_U32(ctx, 31, 0x1D4B8Cu);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D4B84u, 0x1D4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B8Cu;
label_1d4b8c:
    // 0x1d4b8c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d4b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4b90: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d4b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4b94: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4b98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d4b9c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d4b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4ba0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d4ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4ba4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4bac: 0x0  nop
    ctx->pc = 0x1d4bacu;
    // NOP
    // 0x1d4bb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4bb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4bb4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d4bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4bbc: 0x0  nop
    ctx->pc = 0x1d4bbcu;
    // NOP
    // 0x1d4bc0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4bc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4bc4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4bc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4bcc: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1d4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4bd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4bd4: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d4bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4bd8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d4bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4bdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d4bdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4be0: 0x0  nop
    ctx->pc = 0x1d4be0u;
    // NOP
    // 0x1d4be4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1d4be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1d4be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4bec: 0x0  nop
    ctx->pc = 0x1d4becu;
    // NOP
    // 0x1d4bf0: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1d4bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1d4bf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4bfc: 0x0  nop
    ctx->pc = 0x1d4bfcu;
    // NOP
    // 0x1d4c00: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1d4c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1d4c04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4c08: 0x0  nop
    ctx->pc = 0x1d4c08u;
    // NOP
    // 0x1d4c0c: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x1d4c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->pc = 0x1d4c10u;
}
