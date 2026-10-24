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

// Function: entry_001d854c
// Address: 0x1d854c - 0x1d8588
void entry_001d854c_0x1d854c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d854c_0x1d854c");
#endif

    ctx->pc = 0x1d854cu;

    // 0x1d854c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8550: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1d8550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1d8554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d8554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8558: 0x0  nop
    ctx->pc = 0x1d8558u;
    // NOP
    // 0x1d855c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d855cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d8560: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d8560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d8564: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8568: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d8568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d856c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d856cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8570: 0x0  nop
    ctx->pc = 0x1d8570u;
    // NOP
    // 0x1d8574: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8574u;
    {
        const bool branch_taken_0x1d8574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8574) {
            ctx->pc = 0x1D8588u;
            return;
        }
    }
    ctx->pc = 0x1D857Cu;
    // 0x1d857c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8580: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d8580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d8584: 0x0  nop
    ctx->pc = 0x1d8584u;
    // NOP
    ctx->pc = 0x1d8588u;
}
