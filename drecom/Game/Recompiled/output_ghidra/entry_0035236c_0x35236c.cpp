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

// Function: entry_0035236c
// Address: 0x35236c - 0x352394
void entry_0035236c_0x35236c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035236c_0x35236c");
#endif

    ctx->pc = 0x35236cu;

    // 0x35236c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352370: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x352370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352374: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x352374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352378: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x352378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35237c: 0x0  nop
    ctx->pc = 0x35237cu;
    // NOP
    // 0x352380: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x352380u;
    {
        const bool branch_taken_0x352380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x352380) {
            ctx->pc = 0x352394u;
            return;
        }
    }
    ctx->pc = 0x352388u;
    // 0x352388: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35238c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352390: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x352390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x352394u;
}
