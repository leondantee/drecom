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

// Function: entry_00182128
// Address: 0x182128 - 0x182170
void entry_00182128_0x182128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182128_0x182128");
#endif

    ctx->pc = 0x182128u;

    // 0x182128: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18212c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18212cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182130: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x182130u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182134: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x182134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18213c: 0x0  nop
    ctx->pc = 0x18213cu;
    // NOP
    // 0x182140: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182144: 0x0  nop
    ctx->pc = 0x182144u;
    // NOP
    // 0x182148: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x182148u;
    {
        const bool branch_taken_0x182148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182148) {
            ctx->pc = 0x182170u;
            return;
        }
    }
    ctx->pc = 0x182150u;
    // 0x182150: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182154: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182158: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x182158u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18215c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18215cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182160: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x182160u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x182164: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x182164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x182168: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182168u;
    {
        const bool branch_taken_0x182168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182168) {
            ctx->pc = 0x182184u;
            return;
        }
    }
    ctx->pc = 0x182170u;
}
