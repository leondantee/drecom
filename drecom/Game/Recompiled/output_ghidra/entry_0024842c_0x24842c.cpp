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

// Function: entry_0024842c
// Address: 0x24842c - 0x2484d4
void entry_0024842c_0x24842c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024842c_0x24842c");
#endif

    ctx->pc = 0x24842cu;

    // 0x24842c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248430: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248434: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x248434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24843c: 0x0  nop
    ctx->pc = 0x24843cu;
    // NOP
    // 0x248440: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x248440u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248444: 0x0  nop
    ctx->pc = 0x248444u;
    // NOP
    // 0x248448: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x248448u;
    {
        const bool branch_taken_0x248448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248448) {
            ctx->pc = 0x24852Cu;
            return;
        }
    }
    ctx->pc = 0x248450u;
    // 0x248450: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248454: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248458: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x248458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24845c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24845cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248460: 0x0  nop
    ctx->pc = 0x248460u;
    // NOP
    // 0x248464: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x248464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248468: 0x0  nop
    ctx->pc = 0x248468u;
    // NOP
    // 0x24846c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x24846Cu;
    {
        const bool branch_taken_0x24846c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24846c) {
            ctx->pc = 0x2484D4u;
            return;
        }
    }
    ctx->pc = 0x248474u;
    // 0x248474: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248478: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x248478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24847c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x24847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248480: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x248480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x248484: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x248484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x248488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24848c: 0x0  nop
    ctx->pc = 0x24848cu;
    // NOP
    // 0x248490: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248494: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x248494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x248498: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24849c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2484a0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2484a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2484a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2484a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2484a8: 0x0  nop
    ctx->pc = 0x2484a8u;
    // NOP
    // 0x2484ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2484acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2484b0: 0x0  nop
    ctx->pc = 0x2484b0u;
    // NOP
    // 0x2484b4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2484B4u;
    {
        const bool branch_taken_0x2484b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2484b4) {
            ctx->pc = 0x24852Cu;
            return;
        }
    }
    ctx->pc = 0x2484BCu;
    // 0x2484bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2484bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2484c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2484c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2484c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2484c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2484c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2484c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2484cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2484CCu;
    {
        const bool branch_taken_0x2484cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2484cc) {
            ctx->pc = 0x24852Cu;
            return;
        }
    }
    ctx->pc = 0x2484D4u;
}
