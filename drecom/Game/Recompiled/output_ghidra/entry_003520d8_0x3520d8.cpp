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

// Function: entry_003520d8
// Address: 0x3520d8 - 0x352108
void entry_003520d8_0x3520d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003520d8_0x3520d8");
#endif

    ctx->pc = 0x3520d8u;

    // 0x3520d8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3520d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3520dc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3520dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3520e0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3520e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3520e4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3520e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3520e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3520e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3520ec: 0x0  nop
    ctx->pc = 0x3520ecu;
    // NOP
    // 0x3520f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3520F0u;
    {
        const bool branch_taken_0x3520f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3520f0) {
            ctx->pc = 0x352108u;
            return;
        }
    }
    ctx->pc = 0x3520F8u;
    // 0x3520f8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3520f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3520fc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3520fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352100: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x352100u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x352104: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x352104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x352108u;
}
