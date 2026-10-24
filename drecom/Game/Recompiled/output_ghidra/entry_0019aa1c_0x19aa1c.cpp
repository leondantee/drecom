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

// Function: entry_0019aa1c
// Address: 0x19aa1c - 0x19aa50
void entry_0019aa1c_0x19aa1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aa1c_0x19aa1c");
#endif

    ctx->pc = 0x19aa1cu;

    // 0x19aa1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa20: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19aa20u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aa24: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x19aa28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aa28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa2c: 0x0  nop
    ctx->pc = 0x19aa2cu;
    // NOP
    // 0x19aa30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19aa30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aa34: 0x0  nop
    ctx->pc = 0x19aa34u;
    // NOP
    // 0x19aa38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19AA38u;
    {
        const bool branch_taken_0x19aa38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aa38) {
            ctx->pc = 0x19AA50u;
            return;
        }
    }
    ctx->pc = 0x19AA40u;
    // 0x19aa40: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x19aa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa4c: 0xe420d380  swc1        $f0, -0x2C80($at)
    ctx->pc = 0x19aa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD380u, _value); } while (0); }
    ctx->pc = 0x19aa50u;
}
