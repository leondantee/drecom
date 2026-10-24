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

// Function: entry_00189818
// Address: 0x189818 - 0x189870
void entry_00189818_0x189818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189818_0x189818");
#endif

    ctx->pc = 0x189818u;

    // 0x189818: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18981c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189820: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189824: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189828: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18982c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189830: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189834: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x189834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189838: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189838u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18983c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18983cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189840: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189848: 0x0  nop
    ctx->pc = 0x189848u;
    // NOP
    // 0x18984c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18984cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189850: 0x0  nop
    ctx->pc = 0x189850u;
    // NOP
    // 0x189854: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189854u;
    {
        const bool branch_taken_0x189854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189854) {
            ctx->pc = 0x189870u;
            return;
        }
    }
    ctx->pc = 0x18985Cu;
    // 0x18985c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18985cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189860: 0x0  nop
    ctx->pc = 0x189860u;
    // NOP
    // 0x189864: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x189864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x189868: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x189868u;
    {
        const bool branch_taken_0x189868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189868) {
            ctx->pc = 0x1898B0u;
            return;
        }
    }
    ctx->pc = 0x189870u;
}
