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

// Function: entry_001ddad0
// Address: 0x1ddad0 - 0x1ddb3c
void entry_001ddad0_0x1ddad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddad0_0x1ddad0");
#endif

    ctx->pc = 0x1ddad0u;

    // 0x1ddad0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1ddad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddad4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ddad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1ddad8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ddad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ddadc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ddadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ddae0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ddae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddae4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ddae4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ddae8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ddae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ddaec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddaf0: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x1ddaf0u;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddaf4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ddaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1ddaf8: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x1ddaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddafc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddb00: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x1ddb00u;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddb04: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ddb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddb08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ddb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ddb0c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ddb0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ddb10: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ddb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1ddb14: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1ddb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddb18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddb18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddb1c: 0x0  nop
    ctx->pc = 0x1ddb1cu;
    // NOP
    // 0x1ddb20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddb20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddb24: 0x0  nop
    ctx->pc = 0x1ddb24u;
    // NOP
    // 0x1ddb28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDB28u;
    {
        const bool branch_taken_0x1ddb28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddb28) {
            ctx->pc = 0x1DDB3Cu;
            return;
        }
    }
    ctx->pc = 0x1DDB30u;
    // 0x1ddb30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddb30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddb34: 0x0  nop
    ctx->pc = 0x1ddb34u;
    // NOP
    // 0x1ddb38: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ddb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->pc = 0x1ddb3cu;
}
