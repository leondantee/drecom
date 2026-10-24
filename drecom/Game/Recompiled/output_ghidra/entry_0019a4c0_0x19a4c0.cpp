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

// Function: entry_0019a4c0
// Address: 0x19a4c0 - 0x19a4f4
void entry_0019a4c0_0x19a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a4c0_0x19a4c0");
#endif

    ctx->pc = 0x19a4c0u;

    // 0x19a4c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a4c4: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a4c4u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a4c8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x19a4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a4d0: 0x0  nop
    ctx->pc = 0x19a4d0u;
    // NOP
    // 0x19a4d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a4d8: 0x0  nop
    ctx->pc = 0x19a4d8u;
    // NOP
    // 0x19a4dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19A4DCu;
    {
        const bool branch_taken_0x19a4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a4dc) {
            ctx->pc = 0x19A4F4u;
            return;
        }
    }
    ctx->pc = 0x19A4E4u;
    // 0x19a4e4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x19a4e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a4ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a4f0: 0xe420d360  swc1        $f0, -0x2CA0($at)
    ctx->pc = 0x19a4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD360u, _value); } while (0); }
    ctx->pc = 0x19a4f4u;
}
