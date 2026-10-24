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

// Function: entry_0023dc44
// Address: 0x23dc44 - 0x23dcbc
void entry_0023dc44_0x23dc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023dc44_0x23dc44");
#endif

    ctx->pc = 0x23dc44u;

    // 0x23dc44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc48: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x23dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dc4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23dc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dc54: 0x0  nop
    ctx->pc = 0x23dc54u;
    // NOP
    // 0x23dc58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23dc58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23dc5c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23dc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x23dc60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc64: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x23dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dc68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23dc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23dc6c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23dc6cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dc70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23dc70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dc74: 0x0  nop
    ctx->pc = 0x23dc74u;
    // NOP
    // 0x23dc78: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x23DC78u;
    {
        const bool branch_taken_0x23dc78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23dc78) {
            ctx->pc = 0x23DCBCu;
            return;
        }
    }
    ctx->pc = 0x23DC80u;
    // 0x23dc80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc84: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x23dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dc88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23dc88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dc8c: 0x0  nop
    ctx->pc = 0x23dc8cu;
    // NOP
    // 0x23dc90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23dc90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dc94: 0x0  nop
    ctx->pc = 0x23dc94u;
    // NOP
    // 0x23dc98: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23DC98u;
    {
        const bool branch_taken_0x23dc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23dc98) {
            ctx->pc = 0x23DCBCu;
            return;
        }
    }
    ctx->pc = 0x23DCA0u;
    // 0x23dca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23dca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dca4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dca8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23dca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x23dcac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23dcacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dcb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dcb8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23dcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x23dcbcu;
}
