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

// Function: entry_00182050
// Address: 0x182050 - 0x182098
void entry_00182050_0x182050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182050_0x182050");
#endif

    ctx->pc = 0x182050u;

    // 0x182050: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182054: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182058: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x182058u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18205c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18205cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182064: 0x0  nop
    ctx->pc = 0x182064u;
    // NOP
    // 0x182068: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18206c: 0x0  nop
    ctx->pc = 0x18206cu;
    // NOP
    // 0x182070: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x182070u;
    {
        const bool branch_taken_0x182070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182070) {
            ctx->pc = 0x182098u;
            return;
        }
    }
    ctx->pc = 0x182078u;
    // 0x182078: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18207c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18207cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182080: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x182080u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182084: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182088: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x182088u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18208c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x182090: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182090u;
    {
        const bool branch_taken_0x182090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182090) {
            ctx->pc = 0x1820ACu;
            return;
        }
    }
    ctx->pc = 0x182098u;
}
