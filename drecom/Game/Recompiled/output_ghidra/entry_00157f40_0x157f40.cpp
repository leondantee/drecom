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

// Function: entry_00157f40
// Address: 0x157f40 - 0x158034
void entry_00157f40_0x157f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157f40_0x157f40");
#endif

    switch (ctx->pc) {
        case 0x157f48u: goto label_157f48;
        default: break;
    }

    ctx->pc = 0x157f40u;

    // 0x157f40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157F40u;
    SET_GPR_U32(ctx, 31, 0x157F48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157F40u, 0x157F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F48u;
label_157f48:
    // 0x157f48: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x157f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157f4c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157f50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f54: 0x0  nop
    ctx->pc = 0x157f54u;
    // NOP
    // 0x157f58: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157f58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157f5c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157f60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157f64: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157f68: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x157f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157f6c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f74: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157f78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157f7c: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x157f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x157f80: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x157f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x157f84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f88: 0x0  nop
    ctx->pc = 0x157f88u;
    // NOP
    // 0x157f8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x157f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x157f90: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157f90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157f94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x157f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x157f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f9c: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x157f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157fa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157fa4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x157fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157fa8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x157fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157fac: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x157facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x157fb0: 0xc4a000e8  lwc1        $f0, 0xE8($a1)
    ctx->pc = 0x157fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157fb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157fb8: 0xe4a000e8  swc1        $f0, 0xE8($a1)
    ctx->pc = 0x157fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 232), bits); }
    // 0x157fbc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x157fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157fc0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x157fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x157fc4: 0x2483f7d0  addiu       $v1, $a0, -0x830
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965200));
    // 0x157fc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x157fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157fcc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157fd0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157fd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157fd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157fd8: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157fdc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157fdcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157fe0: 0x0  nop
    ctx->pc = 0x157fe0u;
    // NOP
    // 0x157fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157fe8: 0x0  nop
    ctx->pc = 0x157fe8u;
    // NOP
    // 0x157fec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157ff0: 0x0  nop
    ctx->pc = 0x157ff0u;
    // NOP
    // 0x157ff4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x157FF4u;
    {
        const bool branch_taken_0x157ff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157ff4) {
            ctx->pc = 0x158034u;
            return;
        }
    }
    ctx->pc = 0x157FFCu;
    // 0x157ffc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x158000: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x158000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x158004: 0x2444f7d0  addiu       $a0, $v0, -0x830
    ctx->pc = 0x158004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x158008: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x158008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15800c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x15800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158010: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x158010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x158014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x158018: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x158018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15801c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15801cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x158020: 0x0  nop
    ctx->pc = 0x158020u;
    // NOP
    // 0x158024: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x158024u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x158028: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x158028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x15802c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15802Cu;
    {
        const bool branch_taken_0x15802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15802c) {
            ctx->pc = 0x158060u;
            return;
        }
    }
    ctx->pc = 0x158034u;
}
