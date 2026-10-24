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

// Function: entry_0034f0f8
// Address: 0x34f0f8 - 0x34f180
void entry_0034f0f8_0x34f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f0f8_0x34f0f8");
#endif

    ctx->pc = 0x34f0f8u;

    // 0x34f0f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f100: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f104: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f108: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f10c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f110: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f114: 0x0  nop
    ctx->pc = 0x34f114u;
    // NOP
    // 0x34f118: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x34F118u;
    {
        const bool branch_taken_0x34f118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f118) {
            ctx->pc = 0x34F180u;
            return;
        }
    }
    ctx->pc = 0x34F120u;
    // 0x34f120: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f124: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f128: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f12c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x34f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x34f130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f134: 0x0  nop
    ctx->pc = 0x34f134u;
    // NOP
    // 0x34f138: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34f138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34f13c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34f13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34f140: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f144: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f148: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f14c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f150: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f154: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f158: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f15c: 0x0  nop
    ctx->pc = 0x34f15cu;
    // NOP
    // 0x34f160: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x34F160u;
    {
        const bool branch_taken_0x34f160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f160) {
            ctx->pc = 0x34F180u;
            return;
        }
    }
    ctx->pc = 0x34F168u;
    // 0x34f168: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f16c: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x34f16cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f170: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x34f170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f174: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f178: 0x24731330  addiu       $s3, $v1, 0x1330
    ctx->pc = 0x34f178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f17c: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x34f17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    ctx->pc = 0x34f180u;
}
