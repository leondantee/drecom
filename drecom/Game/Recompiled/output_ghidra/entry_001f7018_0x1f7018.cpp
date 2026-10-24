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

// Function: entry_001f7018
// Address: 0x1f7018 - 0x1f7090
void entry_001f7018_0x1f7018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7018_0x1f7018");
#endif

    ctx->pc = 0x1f7018u;

    // 0x1f7018: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f701c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f701cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7020: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7024: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7028: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f7028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f702c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f702cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7030: 0x0  nop
    ctx->pc = 0x1f7030u;
    // NOP
    // 0x1f7034: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7034u;
    {
        const bool branch_taken_0x1f7034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7034) {
            ctx->pc = 0x1F7090u;
            return;
        }
    }
    ctx->pc = 0x1F703Cu;
    // 0x1f703c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7040: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7044: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f7044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f704c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7050: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f7050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f7054: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f7054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f7058: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f705c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7060: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f7060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7064: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7068: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f7068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f706c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f706cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7070: 0x0  nop
    ctx->pc = 0x1f7070u;
    // NOP
    // 0x1f7074: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7074u;
    {
        const bool branch_taken_0x1f7074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7074) {
            ctx->pc = 0x1F7090u;
            return;
        }
    }
    ctx->pc = 0x1F707Cu;
    // 0x1f707c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7080: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7084: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7088: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f708c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x1f7090u;
}
