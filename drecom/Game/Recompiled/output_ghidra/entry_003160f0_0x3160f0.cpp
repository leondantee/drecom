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

// Function: entry_003160f0
// Address: 0x3160f0 - 0x3161cc
void entry_003160f0_0x3160f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003160f0_0x3160f0");
#endif

    switch (ctx->pc) {
        case 0x3160fcu: goto label_3160fc;
        case 0x31616cu: goto label_31616c;
        default: break;
    }

    ctx->pc = 0x3160f0u;

    // 0x3160f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3160f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3160f4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3160F4u;
    SET_GPR_U32(ctx, 31, 0x3160FCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3160FCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3160FCu) { return; }
    ctx->pc = 0x3160FCu;
label_3160fc:
    // 0x3160fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3160fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316100: 0x0  nop
    ctx->pc = 0x316100u;
    // NOP
    // 0x316104: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x316104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x316108: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x316108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x31610c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x31610cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x316110: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x316110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x316114: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31611c: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x31611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316120: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x316120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x316124: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x316124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316128: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31612c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316130: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x316130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316134: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x316134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x316138: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x316138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x31613c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31613cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316140: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x316140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316148: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x316148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x31614c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31614cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316150: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x316150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x316154: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x316154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x316158: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x316158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x31615c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x31615cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x316160: 0x26260104  addiu       $a2, $s1, 0x104
    ctx->pc = 0x316160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x316164: 0xc040d62  jal         func_103588
    ctx->pc = 0x316164u;
    SET_GPR_U32(ctx, 31, 0x31616Cu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x31616Cu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31616Cu) { return; }
    ctx->pc = 0x31616Cu;
label_31616c:
    // 0x31616c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316170: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x316170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x316174: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x316174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x316178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x316178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31617c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x31617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316180: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x316180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x316184: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x316184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x316188: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x316188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31618c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x31618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x316190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x316190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316194: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x316194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316198: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x316198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x31619c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3161a0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3161a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3161a4: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x3161a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x3161a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3161a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3161ac: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x3161acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3161b0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x3161b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x3161b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3161b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3161b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3161b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3161bc: 0x0  nop
    ctx->pc = 0x3161bcu;
    // NOP
    // 0x3161c0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x3161c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x3161c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3161C4u;
    {
        const bool branch_taken_0x3161c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3161c4) {
            ctx->pc = 0x3161E0u;
            return;
        }
    }
    ctx->pc = 0x3161CCu;
}
