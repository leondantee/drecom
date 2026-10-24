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

// Function: entry_0022495c
// Address: 0x22495c - 0x2249e4
void entry_0022495c_0x22495c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022495c_0x22495c");
#endif

    ctx->pc = 0x22495cu;

    // 0x22495c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224960: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224964: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x224964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224968: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22496c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224970: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x224970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224978: 0x0  nop
    ctx->pc = 0x224978u;
    // NOP
    // 0x22497c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x22497Cu;
    {
        const bool branch_taken_0x22497c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22497c) {
            ctx->pc = 0x2249E4u;
            return;
        }
    }
    ctx->pc = 0x224984u;
    // 0x224984: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224988: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22498c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x22498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224994: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224998: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x224998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22499c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22499cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2249a0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2249a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2249a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2249a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2249a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2249ac: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2249acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2249b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2249b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2249b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2249b8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2249b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2249bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2249bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2249c0: 0x0  nop
    ctx->pc = 0x2249c0u;
    // NOP
    // 0x2249c4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2249C4u;
    {
        const bool branch_taken_0x2249c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2249c4) {
            ctx->pc = 0x2249E4u;
            return;
        }
    }
    ctx->pc = 0x2249CCu;
    // 0x2249cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2249d0: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2249d4: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2249d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2249d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2249dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2249dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2249e0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2249e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x2249e4u;
}
