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

// Function: entry_00315f6c
// Address: 0x315f6c - 0x316048
void entry_00315f6c_0x315f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315f6c_0x315f6c");
#endif

    switch (ctx->pc) {
        case 0x315f78u: goto label_315f78;
        case 0x315fe8u: goto label_315fe8;
        default: break;
    }

    ctx->pc = 0x315f6cu;

    // 0x315f6c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x315f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x315f70: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x315F70u;
    SET_GPR_U32(ctx, 31, 0x315F78u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x315F78u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x315F78u) { return; }
    ctx->pc = 0x315F78u;
label_315f78:
    // 0x315f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315f7c: 0x0  nop
    ctx->pc = 0x315f7cu;
    // NOP
    // 0x315f80: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x315f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x315f84: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x315f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x315f88: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x315f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x315f8c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x315f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315f90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315f98: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x315f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315f9c: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x315f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315fa0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x315fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x315fa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315fac: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x315facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315fb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x315fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x315fb4: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x315fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315fb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x315fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x315fbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315fc4: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x315fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x315fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x315fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x315fcc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x315fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x315fd0: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x315fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x315fd4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x315fd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x315fd8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x315fd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x315fdc: 0x26260104  addiu       $a2, $s1, 0x104
    ctx->pc = 0x315fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x315fe0: 0xc040d62  jal         func_103588
    ctx->pc = 0x315FE0u;
    SET_GPR_U32(ctx, 31, 0x315FE8u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x315FE8u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x315FE8u) { return; }
    ctx->pc = 0x315FE8u;
label_315fe8:
    // 0x315fe8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315fec: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x315fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x315ff0: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x315ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x315ff4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315ff8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x315ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315ffc: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x315ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x316000: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x316000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316004: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x316004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x316008: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x316008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x31600c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316010: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x316010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316014: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x316014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x316018: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x316018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31601c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31601cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x316020: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x316020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x316024: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x316024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316028: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x316028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31602c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x31602cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x316030: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x316030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x316034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316038: 0x0  nop
    ctx->pc = 0x316038u;
    // NOP
    // 0x31603c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x31603cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x316040: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x316040u;
    {
        const bool branch_taken_0x316040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316040) {
            ctx->pc = 0x3161E0u;
            return;
        }
    }
    ctx->pc = 0x316048u;
}
