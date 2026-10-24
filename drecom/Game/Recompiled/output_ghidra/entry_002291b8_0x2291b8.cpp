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

// Function: entry_002291b8
// Address: 0x2291b8 - 0x229204
void entry_002291b8_0x2291b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002291b8_0x2291b8");
#endif

    ctx->pc = 0x2291b8u;

    // 0x2291b8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2291b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2291bc: 0x3c05bf86  lui         $a1, 0xBF86
    ctx->pc = 0x2291bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49030 << 16));
    // 0x2291c0: 0x34a40a92  ori         $a0, $a1, 0xA92
    ctx->pc = 0x2291c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
    // 0x2291c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2291c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2291c8: 0x0  nop
    ctx->pc = 0x2291c8u;
    // NOP
    // 0x2291cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2291ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2291d0: 0x0  nop
    ctx->pc = 0x2291d0u;
    // NOP
    // 0x2291d4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2291D4u;
    {
        const bool branch_taken_0x2291d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2291d4) {
            ctx->pc = 0x229204u;
            return;
        }
    }
    ctx->pc = 0x2291DCu;
    // 0x2291dc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2291dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2291e0: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2291e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2291e4: 0xc4e1006c  lwc1        $f1, 0x6C($a3)
    ctx->pc = 0x2291e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2291e8: 0x3c0841f0  lui         $t0, 0x41F0
    ctx->pc = 0x2291e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16880 << 16));
    // 0x2291ec: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2291ecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2291f0: 0x0  nop
    ctx->pc = 0x2291f0u;
    // NOP
    // 0x2291f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2291f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2291f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2291f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2291fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2291fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229200: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x229204u;
}
