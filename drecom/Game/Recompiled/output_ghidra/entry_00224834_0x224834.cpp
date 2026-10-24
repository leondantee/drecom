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

// Function: entry_00224834
// Address: 0x224834 - 0x2248ac
void entry_00224834_0x224834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224834_0x224834");
#endif

    ctx->pc = 0x224834u;

    // 0x224834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224838: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22483c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x22483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224844: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x224844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22484c: 0x0  nop
    ctx->pc = 0x22484cu;
    // NOP
    // 0x224850: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x224850u;
    {
        const bool branch_taken_0x224850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224850) {
            ctx->pc = 0x2248ACu;
            return;
        }
    }
    ctx->pc = 0x224858u;
    // 0x224858: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22485c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224860: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x224860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224864: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224868: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x224868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22486c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22486cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x224870: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x224874: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224878: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22487c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x22487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224880: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224884: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x224884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224888: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22488c: 0x0  nop
    ctx->pc = 0x22488cu;
    // NOP
    // 0x224890: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x224890u;
    {
        const bool branch_taken_0x224890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224890) {
            ctx->pc = 0x2248ACu;
            return;
        }
    }
    ctx->pc = 0x224898u;
    // 0x224898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22489c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2248a0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2248a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2248a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2248a8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2248a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x2248acu;
}
