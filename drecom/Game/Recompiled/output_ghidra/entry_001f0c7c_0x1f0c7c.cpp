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

// Function: entry_001f0c7c
// Address: 0x1f0c7c - 0x1f0cdc
void entry_001f0c7c_0x1f0c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0c7c_0x1f0c7c");
#endif

    ctx->pc = 0x1f0c7cu;

    // 0x1f0c7c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c80: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x1f0c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f0c84: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1f0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1f0c88: 0x30641000  andi        $a0, $v1, 0x1000
    ctx->pc = 0x1f0c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f0c8c: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F0C8Cu;
    {
        const bool branch_taken_0x1f0c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c8c) {
            ctx->pc = 0x1F0D2Cu;
            return;
        }
    }
    ctx->pc = 0x1F0C94u;
    // 0x1f0c94: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c98: 0xc4a20124  lwc1        $f2, 0x124($a1)
    ctx->pc = 0x1f0c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0c9c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1f0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1f0ca0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f0ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0ca4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f0ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f0ca8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f0ca8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0cac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0cb0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f0cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0cb4: 0x0  nop
    ctx->pc = 0x1f0cb4u;
    // NOP
    // 0x1f0cb8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0CB8u;
    {
        const bool branch_taken_0x1f0cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0cb8) {
            ctx->pc = 0x1F0CDCu;
            return;
        }
    }
    ctx->pc = 0x1F0CC0u;
    // 0x1f0cc0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0cc4: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f0cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0cc8: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x1f0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x1f0ccc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f0cccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0cd0: 0x0  nop
    ctx->pc = 0x1f0cd0u;
    // NOP
    // 0x1f0cd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0cd8: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f0cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1f0cdcu;
}
