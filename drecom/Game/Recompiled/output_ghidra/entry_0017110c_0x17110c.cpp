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

// Function: entry_0017110c
// Address: 0x17110c - 0x171178
void entry_0017110c_0x17110c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017110c_0x17110c");
#endif

    ctx->pc = 0x17110cu;

    // 0x17110c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x17110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171110: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x171110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x171114: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171118: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17111c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x17111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171120: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x171120u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x171124: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x171124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x171128: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17112c: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x17112cu;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171130: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x171130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x171134: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x171134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171138: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17113c: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x17113cu;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171140: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x171140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171144: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171148: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x171148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17114c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x17114cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x171150: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x171150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171158: 0x0  nop
    ctx->pc = 0x171158u;
    // NOP
    // 0x17115c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17115cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171160: 0x0  nop
    ctx->pc = 0x171160u;
    // NOP
    // 0x171164: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x171164u;
    {
        const bool branch_taken_0x171164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171164) {
            ctx->pc = 0x171178u;
            return;
        }
    }
    ctx->pc = 0x17116Cu;
    // 0x17116c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17116cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171170: 0x0  nop
    ctx->pc = 0x171170u;
    // NOP
    // 0x171174: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x171174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->pc = 0x171178u;
}
