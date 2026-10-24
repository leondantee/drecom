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

// Function: entry_00138830
// Address: 0x138830 - 0x13887c
void entry_00138830_0x138830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138830_0x138830");
#endif

    ctx->pc = 0x138830u;

    // 0x138830: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138830u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138834: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x138834u;
    {
        const bool branch_taken_0x138834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138834) {
            ctx->pc = 0x138730u;
            return;
        }
    }
    ctx->pc = 0x13883Cu;
    // 0x13883c: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x13883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138840: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x138840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x138844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138848: 0x0  nop
    ctx->pc = 0x138848u;
    // NOP
    // 0x13884c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13884cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x138850: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x138850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x138854: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x138854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13885c: 0x0  nop
    ctx->pc = 0x13885cu;
    // NOP
    // 0x138860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138864: 0x0  nop
    ctx->pc = 0x138864u;
    // NOP
    // 0x138868: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x138868u;
    {
        const bool branch_taken_0x138868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138868) {
            ctx->pc = 0x13887Cu;
            return;
        }
    }
    ctx->pc = 0x138870u;
    // 0x138870: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138874: 0x0  nop
    ctx->pc = 0x138874u;
    // NOP
    // 0x138878: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x138878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    ctx->pc = 0x13887cu;
}
