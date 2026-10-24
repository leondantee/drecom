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

// Function: entry_0016a544
// Address: 0x16a544 - 0x16a644
void entry_0016a544_0x16a544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a544_0x16a544");
#endif

    ctx->pc = 0x16a544u;

    // 0x16a544: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x16a544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a548: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16a548u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16a54c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x16a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a550: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a550u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a554: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16a554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a558: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a55c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a560: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16a560u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a564: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x16a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a568: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x16a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a56c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a56cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a570: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x16a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a574: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a578: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a57c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16a57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16a580: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16a580u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16a584: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x16a584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16a588: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x16a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a58c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16a58cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16a590: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a594: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a598: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a59c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5a4: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16a5a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a5a8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x16a5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5ac: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5b0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a5b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5b4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x16a5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5b8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16a5c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16a5c4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16a5c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16a5c8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x16a5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x16a5cc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x16a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5d0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x16a5d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x16a5d4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5d8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a5d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5dc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5e0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5e8: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x16a5e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16a5ec: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x16a5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5f0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a5f4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16a5f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a5f8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x16a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5fc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a600: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a604: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16a604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16a608: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16a608u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16a60c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x16a60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x16a610: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x16a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a618: 0x0  nop
    ctx->pc = 0x16a618u;
    // NOP
    // 0x16a61c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a61cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a620: 0x0  nop
    ctx->pc = 0x16a620u;
    // NOP
    // 0x16a624: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16A624u;
    {
        const bool branch_taken_0x16a624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a624) {
            ctx->pc = 0x16A644u;
            return;
        }
    }
    ctx->pc = 0x16A62Cu;
    // 0x16a62c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a630: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a630u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a634: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x16a634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a638: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a638u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16a63c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16A63Cu;
    {
        const bool branch_taken_0x16a63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a63c) {
            ctx->pc = 0x16A6A8u;
            return;
        }
    }
    ctx->pc = 0x16A644u;
}
