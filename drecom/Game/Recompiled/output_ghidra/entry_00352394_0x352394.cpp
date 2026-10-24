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

// Function: entry_00352394
// Address: 0x352394 - 0x3523c4
void entry_00352394_0x352394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00352394_0x352394");
#endif

    ctx->pc = 0x352394u;

    // 0x352394: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352398: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35239c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x35239cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3523a0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3523a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3523a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3523a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3523a8: 0x0  nop
    ctx->pc = 0x3523a8u;
    // NOP
    // 0x3523ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3523ACu;
    {
        const bool branch_taken_0x3523ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3523ac) {
            ctx->pc = 0x3523C4u;
            return;
        }
    }
    ctx->pc = 0x3523B4u;
    // 0x3523b4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3523b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3523b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3523b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3523bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3523bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3523c0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3523c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x3523c4u;
}
