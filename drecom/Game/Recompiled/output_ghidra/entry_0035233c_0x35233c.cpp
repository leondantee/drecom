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

// Function: entry_0035233c
// Address: 0x35233c - 0x35236c
void entry_0035233c_0x35233c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035233c_0x35233c");
#endif

    ctx->pc = 0x35233cu;

    // 0x35233c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352340: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352344: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x352344u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x352348: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x352348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35234c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35234cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352350: 0x0  nop
    ctx->pc = 0x352350u;
    // NOP
    // 0x352354: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x352354u;
    {
        const bool branch_taken_0x352354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x352354) {
            ctx->pc = 0x35236Cu;
            return;
        }
    }
    ctx->pc = 0x35235Cu;
    // 0x35235c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352360: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352364: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x352364u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x352368: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x352368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x35236cu;
}
