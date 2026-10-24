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

// Function: entry_0024746c
// Address: 0x24746c - 0x2474b4
void entry_0024746c_0x24746c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024746c_0x24746c");
#endif

    ctx->pc = 0x24746cu;

    // 0x24746c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x24746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247470: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x247470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x247474: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x247478: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x247478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24747c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24747cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x247480: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x247480u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247484: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x247484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247488: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x247488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24748c: 0x0  nop
    ctx->pc = 0x24748cu;
    // NOP
    // 0x247490: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x247490u;
    {
        const bool branch_taken_0x247490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247490) {
            ctx->pc = 0x2474B4u;
            return;
        }
    }
    ctx->pc = 0x247498u;
    // 0x247498: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x247498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24749c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x24749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2474a0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2474a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2474a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2474a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2474a8: 0x0  nop
    ctx->pc = 0x2474a8u;
    // NOP
    // 0x2474ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2474acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2474b0: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x2474b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x2474b4u;
}
