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

// Function: entry_001efd90
// Address: 0x1efd90 - 0x1efe00
void entry_001efd90_0x1efd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efd90_0x1efd90");
#endif

    ctx->pc = 0x1efd90u;

    // 0x1efd90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd94: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1efd94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1efd98: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x1EFD98u;
    {
        const bool branch_taken_0x1efd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efd98) {
            ctx->pc = 0x1EFF70u;
            return;
        }
    }
    ctx->pc = 0x1EFDA0u;
    // 0x1efda0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efda4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efda8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1efda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1efdac: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1efdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1efdb0: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1EFDB0u;
    {
        const bool branch_taken_0x1efdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efdb0) {
            ctx->pc = 0x1EFED8u;
            return;
        }
    }
    ctx->pc = 0x1EFDB8u;
    // 0x1efdb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efdbc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1efdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efdc0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1efdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1efdc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1efdc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efdc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efdcc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1efdccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efdd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efdd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efdd4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1efdd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efdd8: 0x0  nop
    ctx->pc = 0x1efdd8u;
    // NOP
    // 0x1efddc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFDDCu;
    {
        const bool branch_taken_0x1efddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efddc) {
            ctx->pc = 0x1EFE00u;
            return;
        }
    }
    ctx->pc = 0x1EFDE4u;
    // 0x1efde4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efde8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1efde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efdec: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1efdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1efdf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efdf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efdf4: 0x0  nop
    ctx->pc = 0x1efdf4u;
    // NOP
    // 0x1efdf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efdf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efdfc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1efdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1efe00u;
}
