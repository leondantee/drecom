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

// Function: entry_0016e100
// Address: 0x16e100 - 0x16e200
void entry_0016e100_0x16e100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e100_0x16e100");
#endif

    ctx->pc = 0x16e100u;

    // 0x16e100: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x16e100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e104: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16e104u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16e108: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e10c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e10cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e110: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e114: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e118: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e11c: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16e11cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e120: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x16e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e124: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16e124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e128: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e12c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x16e12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e130: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e134: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e138: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16e138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e13c: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16e13cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16e140: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x16e140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16e144: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x16e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e148: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16e148u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16e14c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16e14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e150: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e150u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e154: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16e154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e158: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16e158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e15c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e160: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16e160u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e164: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x16e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e168: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e16c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e16cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e170: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x16e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e174: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e178: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e17c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16e17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e180: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16e180u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16e184: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x16e184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x16e188: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x16e188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e18c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16e18cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16e190: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x16e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e194: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e198: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x16e198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e19c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x16e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e1a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e1a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e1a4: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16e1a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e1a8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16e1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e1ac: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x16e1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e1b0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e1b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e1b4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16e1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e1b8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x16e1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e1bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e1c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16e1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e1c4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16e1c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16e1c8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x16e1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x16e1cc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x16e1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e1d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e1d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e1d4: 0x0  nop
    ctx->pc = 0x16e1d4u;
    // NOP
    // 0x16e1d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e1dc: 0x0  nop
    ctx->pc = 0x16e1dcu;
    // NOP
    // 0x16e1e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16E1E0u;
    {
        const bool branch_taken_0x16e1e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1e0) {
            ctx->pc = 0x16E200u;
            return;
        }
    }
    ctx->pc = 0x16E1E8u;
    // 0x16e1e8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e1ec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e1ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e1f0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x16e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e1f4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16e1f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16E1F8u;
    {
        const bool branch_taken_0x16e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e1f8) {
            ctx->pc = 0x16E264u;
            return;
        }
    }
    ctx->pc = 0x16E200u;
}
