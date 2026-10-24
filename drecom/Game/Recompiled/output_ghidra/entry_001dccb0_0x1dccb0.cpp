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

// Function: entry_001dccb0
// Address: 0x1dccb0 - 0x1dcd1c
void entry_001dccb0_0x1dccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dccb0_0x1dccb0");
#endif

    ctx->pc = 0x1dccb0u;

    // 0x1dccb0: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1dccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccb4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1dccb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dccbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dccbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dccc0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccc4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1dccc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dccc8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1dccc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1dcccc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dccccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dccd0: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x1dccd0u;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccd4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1dccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1dccd8: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x1dccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dccdc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dccdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dcce0: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x1dcce0u;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcce4: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1dcce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcce8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dcce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dccec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1dccecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1dccf0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1dccf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1dccf4: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x1dccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dccf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dccf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dccfc: 0x0  nop
    ctx->pc = 0x1dccfcu;
    // NOP
    // 0x1dcd00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcd00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcd04: 0x0  nop
    ctx->pc = 0x1dcd04u;
    // NOP
    // 0x1dcd08: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCD08u;
    {
        const bool branch_taken_0x1dcd08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcd08) {
            ctx->pc = 0x1DCD1Cu;
            return;
        }
    }
    ctx->pc = 0x1DCD10u;
    // 0x1dcd10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcd10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcd14: 0x0  nop
    ctx->pc = 0x1dcd14u;
    // NOP
    // 0x1dcd18: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1dcd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->pc = 0x1dcd1cu;
}
