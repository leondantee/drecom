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

// Function: entry_001b925c
// Address: 0x1b925c - 0x1b9300
void entry_001b925c_0x1b925c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b925c_0x1b925c");
#endif

    ctx->pc = 0x1b925cu;

    // 0x1b925c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9260: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1b9260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9264: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b9264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1b9268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b926c: 0x0  nop
    ctx->pc = 0x1b926cu;
    // NOP
    // 0x1b9270: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9274: 0x0  nop
    ctx->pc = 0x1b9274u;
    // NOP
    // 0x1b9278: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B9278u;
    {
        const bool branch_taken_0x1b9278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9278) {
            ctx->pc = 0x1B935Cu;
            return;
        }
    }
    ctx->pc = 0x1B9280u;
    // 0x1b9280: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b9280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9284: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b9284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b9288: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b928c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b928cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9290: 0x0  nop
    ctx->pc = 0x1b9290u;
    // NOP
    // 0x1b9294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9298: 0x0  nop
    ctx->pc = 0x1b9298u;
    // NOP
    // 0x1b929c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B929Cu;
    {
        const bool branch_taken_0x1b929c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b929c) {
            ctx->pc = 0x1B9300u;
            return;
        }
    }
    ctx->pc = 0x1B92A4u;
    // 0x1b92a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b92a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b92a8: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b92a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b92ac: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b92acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1b92b0: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x1b92b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b92b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b92b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b92b8: 0x0  nop
    ctx->pc = 0x1b92b8u;
    // NOP
    // 0x1b92bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b92bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b92c0: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b92c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1b92c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b92c8: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b92c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b92cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b92d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b92d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b92d4: 0x0  nop
    ctx->pc = 0x1b92d4u;
    // NOP
    // 0x1b92d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b92d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b92dc: 0x0  nop
    ctx->pc = 0x1b92dcu;
    // NOP
    // 0x1b92e0: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B92E0u;
    {
        const bool branch_taken_0x1b92e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b92e0) {
            ctx->pc = 0x1B935Cu;
            return;
        }
    }
    ctx->pc = 0x1B92E8u;
    // 0x1b92e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b92ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b92ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b92f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b92f4: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b92f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1b92f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B92F8u;
    {
        const bool branch_taken_0x1b92f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b92f8) {
            ctx->pc = 0x1B935Cu;
            return;
        }
    }
    ctx->pc = 0x1B9300u;
}
