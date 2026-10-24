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

// Function: entry_003119c4
// Address: 0x3119c4 - 0x3119f4
void entry_003119c4_0x3119c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003119c4_0x3119c4");
#endif

    ctx->pc = 0x3119c4u;

    // 0x3119c4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x3119c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3119c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3119c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3119cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3119ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3119d0: 0x0  nop
    ctx->pc = 0x3119d0u;
    // NOP
    // 0x3119d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3119d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3119d8: 0x0  nop
    ctx->pc = 0x3119d8u;
    // NOP
    // 0x3119dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3119DCu;
    {
        const bool branch_taken_0x3119dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3119dc) {
            ctx->pc = 0x3119F4u;
            return;
        }
    }
    ctx->pc = 0x3119E4u;
    // 0x3119e4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3119e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3119e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3119e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3119ec: 0x0  nop
    ctx->pc = 0x3119ecu;
    // NOP
    // 0x3119f0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3119f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x3119f4u;
}
