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

// Function: entry_001f0d2c
// Address: 0x1f0d2c - 0x1f0d78
void entry_001f0d2c_0x1f0d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0d2c_0x1f0d2c");
#endif

    ctx->pc = 0x1f0d2cu;

    // 0x1f0d2c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0d30: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x1f0d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0d34: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x1f0d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x1f0d38: 0x34658000  ori         $a1, $v1, 0x8000
    ctx->pc = 0x1f0d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1f0d3c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1f0d3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0d40: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f0d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f0d44: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f0d44u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0d48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0d4c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f0d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0d50: 0x0  nop
    ctx->pc = 0x1f0d50u;
    // NOP
    // 0x1f0d54: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0D54u;
    {
        const bool branch_taken_0x1f0d54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0d54) {
            ctx->pc = 0x1F0D78u;
            return;
        }
    }
    ctx->pc = 0x1F0D5Cu;
    // 0x1f0d5c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0d60: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0d64: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f0d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0d6c: 0x0  nop
    ctx->pc = 0x1f0d6cu;
    // NOP
    // 0x1f0d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0d74: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f0d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1f0d78u;
}
