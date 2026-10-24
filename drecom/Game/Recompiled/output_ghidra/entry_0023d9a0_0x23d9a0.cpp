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

// Function: entry_0023d9a0
// Address: 0x23d9a0 - 0x23da24
void entry_0023d9a0_0x23d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d9a0_0x23d9a0");
#endif

    ctx->pc = 0x23d9a0u;

    // 0x23d9a0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d9a8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x23d9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d9ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9b0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x23d9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d9b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d9b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d9b8: 0x0  nop
    ctx->pc = 0x23d9b8u;
    // NOP
    // 0x23d9bc: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x23D9BCu;
    {
        const bool branch_taken_0x23d9bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d9bc) {
            ctx->pc = 0x23DA24u;
            return;
        }
    }
    ctx->pc = 0x23D9C4u;
    // 0x23d9c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9c8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d9cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x23d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x23d9d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d9d4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x23d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d9d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23d9d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23d9dc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9e0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d9e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23d9e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23d9e8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23d9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x23d9ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d9f4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x23d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d9f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9fc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23da00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23da00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23da04: 0x0  nop
    ctx->pc = 0x23da04u;
    // NOP
    // 0x23da08: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23DA08u;
    {
        const bool branch_taken_0x23da08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23da08) {
            ctx->pc = 0x23DA24u;
            return;
        }
    }
    ctx->pc = 0x23DA10u;
    // 0x23da10: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23da18: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x23da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23da1c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da20: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23da20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x23da24u;
}
