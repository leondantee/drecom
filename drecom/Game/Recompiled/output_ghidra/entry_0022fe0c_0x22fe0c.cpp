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

// Function: entry_0022fe0c
// Address: 0x22fe0c - 0x22fe84
void entry_0022fe0c_0x22fe0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fe0c_0x22fe0c");
#endif

    ctx->pc = 0x22fe0cu;

    // 0x22fe0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe14: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fe18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe1c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22fe20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fe24: 0x0  nop
    ctx->pc = 0x22fe24u;
    // NOP
    // 0x22fe28: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22FE28u;
    {
        const bool branch_taken_0x22fe28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fe28) {
            ctx->pc = 0x22FE84u;
            return;
        }
    }
    ctx->pc = 0x22FE30u;
    // 0x22fe30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe38: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fe3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe40: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22fe44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22fe48: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22fe4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe54: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fe58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe5c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22fe60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fe64: 0x0  nop
    ctx->pc = 0x22fe64u;
    // NOP
    // 0x22fe68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22FE68u;
    {
        const bool branch_taken_0x22fe68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fe68) {
            ctx->pc = 0x22FE84u;
            return;
        }
    }
    ctx->pc = 0x22FE70u;
    // 0x22fe70: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe74: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe78: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe80: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x22fe84u;
}
