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

// Function: entry_00224720
// Address: 0x224720 - 0x224798
void entry_00224720_0x224720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224720_0x224720");
#endif

    ctx->pc = 0x224720u;

    // 0x224720: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224724: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224728: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x224728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22472c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224730: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x224730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224738: 0x0  nop
    ctx->pc = 0x224738u;
    // NOP
    // 0x22473c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22473Cu;
    {
        const bool branch_taken_0x22473c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22473c) {
            ctx->pc = 0x224798u;
            return;
        }
    }
    ctx->pc = 0x224744u;
    // 0x224744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224748: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22474c: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x22474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224750: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224754: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x224754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224758: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x224758u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22475c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22475cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x224760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224764: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224768: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x224768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22476c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224770: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x224770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224774: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224778: 0x0  nop
    ctx->pc = 0x224778u;
    // NOP
    // 0x22477c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22477Cu;
    {
        const bool branch_taken_0x22477c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22477c) {
            ctx->pc = 0x224798u;
            return;
        }
    }
    ctx->pc = 0x224784u;
    // 0x224784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224788: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22478c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x22478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224794: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x224794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x224798u;
}
