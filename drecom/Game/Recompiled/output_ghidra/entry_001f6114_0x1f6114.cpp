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

// Function: entry_001f6114
// Address: 0x1f6114 - 0x1f618c
void entry_001f6114_0x1f6114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6114_0x1f6114");
#endif

    ctx->pc = 0x1f6114u;

    // 0x1f6114: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6118: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f611c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6124: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f612c: 0x0  nop
    ctx->pc = 0x1f612cu;
    // NOP
    // 0x1f6130: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6130u;
    {
        const bool branch_taken_0x1f6130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6130) {
            ctx->pc = 0x1F618Cu;
            return;
        }
    }
    ctx->pc = 0x1F6138u;
    // 0x1f6138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f613c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f613cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6140: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f6140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6148: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f614c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f614cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6150: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f6154: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6158: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f615c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6160: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6164: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6168: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f616c: 0x0  nop
    ctx->pc = 0x1f616cu;
    // NOP
    // 0x1f6170: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6170u;
    {
        const bool branch_taken_0x1f6170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6170) {
            ctx->pc = 0x1F618Cu;
            return;
        }
    }
    ctx->pc = 0x1F6178u;
    // 0x1f6178: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f617c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6180: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f6180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6184: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6188: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1f618cu;
}
