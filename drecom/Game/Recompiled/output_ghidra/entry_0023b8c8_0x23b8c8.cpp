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

// Function: entry_0023b8c8
// Address: 0x23b8c8 - 0x23b910
void entry_0023b8c8_0x23b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b8c8_0x23b8c8");
#endif

    ctx->pc = 0x23b8c8u;

    // 0x23b8c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b8cc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23b8d0: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x23b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x23b8d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23b8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23b8d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23b8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23b8dc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23b8dcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b8e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23b8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b8e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23b8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b8e8: 0x0  nop
    ctx->pc = 0x23b8e8u;
    // NOP
    // 0x23b8ec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B8ECu;
    {
        const bool branch_taken_0x23b8ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b8ec) {
            ctx->pc = 0x23B910u;
            return;
        }
    }
    ctx->pc = 0x23B8F4u;
    // 0x23b8f4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b8f8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b8fc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x23b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x23b900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23b900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b904: 0x0  nop
    ctx->pc = 0x23b904u;
    // NOP
    // 0x23b908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23b908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23b90c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23b90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x23b910u;
}
