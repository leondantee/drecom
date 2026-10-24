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

// Function: entry_001820bc
// Address: 0x1820bc - 0x182104
void entry_001820bc_0x1820bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001820bc_0x1820bc");
#endif

    ctx->pc = 0x1820bcu;

    // 0x1820bc: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1820bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1820c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1820c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1820c4: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1820c4u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1820c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1820cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1820ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1820d0: 0x0  nop
    ctx->pc = 0x1820d0u;
    // NOP
    // 0x1820d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1820d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1820d8: 0x0  nop
    ctx->pc = 0x1820d8u;
    // NOP
    // 0x1820dc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1820DCu;
    {
        const bool branch_taken_0x1820dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1820dc) {
            ctx->pc = 0x182104u;
            return;
        }
    }
    ctx->pc = 0x1820E4u;
    // 0x1820e4: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1820e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1820e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1820e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1820ec: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1820ecu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1820f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1820f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1820f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1820f8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1820f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1820fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1820FCu;
    {
        const bool branch_taken_0x1820fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1820fc) {
            ctx->pc = 0x182118u;
            return;
        }
    }
    ctx->pc = 0x182104u;
}
