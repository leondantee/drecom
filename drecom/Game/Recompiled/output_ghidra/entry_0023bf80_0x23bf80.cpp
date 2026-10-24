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

// Function: entry_0023bf80
// Address: 0x23bf80 - 0x23bfc8
void entry_0023bf80_0x23bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023bf80_0x23bf80");
#endif

    ctx->pc = 0x23bf80u;

    // 0x23bf80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf84: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23bf88: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x23bf8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23bf8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23bf90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23bf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23bf94: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23bf94u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bf98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23bf98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23bf9c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23bf9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bfa0: 0x0  nop
    ctx->pc = 0x23bfa0u;
    // NOP
    // 0x23bfa4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23BFA4u;
    {
        const bool branch_taken_0x23bfa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bfa4) {
            ctx->pc = 0x23BFC8u;
            return;
        }
    }
    ctx->pc = 0x23BFACu;
    // 0x23bfac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bfb0: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23bfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bfb4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23bfb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23bfb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bfbc: 0x0  nop
    ctx->pc = 0x23bfbcu;
    // NOP
    // 0x23bfc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23bfc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23bfc4: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23bfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x23bfc8u;
}
