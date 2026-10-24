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

// Function: entry_001d8418
// Address: 0x1d8418 - 0x1d8488
void entry_001d8418_0x1d8418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8418_0x1d8418");
#endif

    ctx->pc = 0x1d8418u;

    // 0x1d8418: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d8418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d841c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d841cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d8420: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1D8420u;
    {
        const bool branch_taken_0x1d8420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8420) {
            ctx->pc = 0x1D84D8u;
            return;
        }
    }
    ctx->pc = 0x1D8428u;
    // 0x1d8428: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d842c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d842cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8430: 0x0  nop
    ctx->pc = 0x1d8430u;
    // NOP
    // 0x1d8434: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8438: 0x0  nop
    ctx->pc = 0x1d8438u;
    // NOP
    // 0x1d843c: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x1D843Cu;
    {
        const bool branch_taken_0x1d843c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d843c) {
            ctx->pc = 0x1D84D8u;
            return;
        }
    }
    ctx->pc = 0x1D8444u;
    // 0x1d8444: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d8444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8448: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1d8448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1d844c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d844cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8450: 0x0  nop
    ctx->pc = 0x1d8450u;
    // NOP
    // 0x1d8454: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d8454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8458: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d8458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d845c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8464: 0x0  nop
    ctx->pc = 0x1d8464u;
    // NOP
    // 0x1d8468: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d846c: 0x0  nop
    ctx->pc = 0x1d846cu;
    // NOP
    // 0x1d8470: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8470u;
    {
        const bool branch_taken_0x1d8470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8470) {
            ctx->pc = 0x1D8488u;
            return;
        }
    }
    ctx->pc = 0x1D8478u;
    // 0x1d8478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d847c: 0x0  nop
    ctx->pc = 0x1d847cu;
    // NOP
    // 0x1d8480: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d8480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d8484: 0x0  nop
    ctx->pc = 0x1d8484u;
    // NOP
    ctx->pc = 0x1d8488u;
}
