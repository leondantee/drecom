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

// Function: entry_0023eb00
// Address: 0x23eb00 - 0x23eb48
void entry_0023eb00_0x23eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023eb00_0x23eb00");
#endif

    ctx->pc = 0x23eb00u;

    // 0x23eb00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23eb04: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23eb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23eb08: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x23eb0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23eb0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23eb10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23eb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23eb14: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23eb14u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23eb18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23eb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23eb1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23eb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eb20: 0x0  nop
    ctx->pc = 0x23eb20u;
    // NOP
    // 0x23eb24: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23EB24u;
    {
        const bool branch_taken_0x23eb24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23eb24) {
            ctx->pc = 0x23EB48u;
            return;
        }
    }
    ctx->pc = 0x23EB2Cu;
    // 0x23eb2c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23eb30: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23eb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23eb34: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23eb38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23eb38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eb3c: 0x0  nop
    ctx->pc = 0x23eb3cu;
    // NOP
    // 0x23eb40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23eb40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23eb44: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23eb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x23eb48u;
}
