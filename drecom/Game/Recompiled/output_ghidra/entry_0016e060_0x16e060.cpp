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

// Function: entry_0016e060
// Address: 0x16e060 - 0x16e0fc
void entry_0016e060_0x16e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e060_0x16e060");
#endif

    ctx->pc = 0x16e060u;

    // 0x16e060: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e064: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x16e064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e068: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e06c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x16e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e070: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e074: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e078: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16e078u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e07c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e07cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e080: 0x0  nop
    ctx->pc = 0x16e080u;
    // NOP
    // 0x16e084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e088: 0x0  nop
    ctx->pc = 0x16e088u;
    // NOP
    // 0x16e08c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x16E08Cu;
    {
        const bool branch_taken_0x16e08c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e08c) {
            ctx->pc = 0x16E100u;
            return;
        }
    }
    ctx->pc = 0x16E094u;
    // 0x16e094: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x16e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e098: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e09c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e09cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e0a0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x16e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e0a4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16e0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e0a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e0ac: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16e0acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e0b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e0b4: 0x0  nop
    ctx->pc = 0x16e0b4u;
    // NOP
    // 0x16e0b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e0b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e0bc: 0x0  nop
    ctx->pc = 0x16e0bcu;
    // NOP
    // 0x16e0c0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x16E0C0u;
    {
        const bool branch_taken_0x16e0c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e0c0) {
            ctx->pc = 0x16E100u;
            return;
        }
    }
    ctx->pc = 0x16E0C8u;
    // 0x16e0c8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x16e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e0cc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x16e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e0d0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x16e0d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e0d4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x16e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e0d8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x16e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e0dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e0e0: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x16e0e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16e0e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e0e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e0e8: 0x0  nop
    ctx->pc = 0x16e0e8u;
    // NOP
    // 0x16e0ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e0ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e0f0: 0x0  nop
    ctx->pc = 0x16e0f0u;
    // NOP
    // 0x16e0f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16E0F4u;
    {
        const bool branch_taken_0x16e0f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e0f4) {
            ctx->pc = 0x16E100u;
            return;
        }
    }
    ctx->pc = 0x16E0FCu;
}
