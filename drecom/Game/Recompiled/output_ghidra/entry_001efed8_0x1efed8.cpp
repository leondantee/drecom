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

// Function: entry_001efed8
// Address: 0x1efed8 - 0x1eff24
void entry_001efed8_0x1efed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efed8_0x1efed8");
#endif

    ctx->pc = 0x1efed8u;

    // 0x1efed8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efedc: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x1efedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efee0: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x1efee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x1efee4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1efee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1efee8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1efee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efeec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efef0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1efef0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efef4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efef8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1efef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efefc: 0x0  nop
    ctx->pc = 0x1efefcu;
    // NOP
    // 0x1eff00: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFF00u;
    {
        const bool branch_taken_0x1eff00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eff00) {
            ctx->pc = 0x1EFF24u;
            return;
        }
    }
    ctx->pc = 0x1EFF08u;
    // 0x1eff08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1eff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eff0c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1eff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eff10: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1eff10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1eff14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eff14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff18: 0x0  nop
    ctx->pc = 0x1eff18u;
    // NOP
    // 0x1eff1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eff1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eff20: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1eff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1eff24u;
}
