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

// Function: entry_00352130
// Address: 0x352130 - 0x352160
void entry_00352130_0x352130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00352130_0x352130");
#endif

    ctx->pc = 0x352130u;

    // 0x352130: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352134: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352138: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x352138u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x35213c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x35213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352140: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x352140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352144: 0x0  nop
    ctx->pc = 0x352144u;
    // NOP
    // 0x352148: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x352148u;
    {
        const bool branch_taken_0x352148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x352148) {
            ctx->pc = 0x352160u;
            return;
        }
    }
    ctx->pc = 0x352150u;
    // 0x352150: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352154: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352158: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x352158u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35215c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35215cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x352160u;
}
