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

// Function: entry_0023be80
// Address: 0x23be80 - 0x23bf28
void entry_0023be80_0x23be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023be80_0x23be80");
#endif

    ctx->pc = 0x23be80u;

    // 0x23be80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23be84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23be88: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23be8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23be8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23be90: 0x0  nop
    ctx->pc = 0x23be90u;
    // NOP
    // 0x23be94: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23be94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23be98: 0x0  nop
    ctx->pc = 0x23be98u;
    // NOP
    // 0x23be9c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23BE9Cu;
    {
        const bool branch_taken_0x23be9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23be9c) {
            ctx->pc = 0x23BF80u;
            return;
        }
    }
    ctx->pc = 0x23BEA4u;
    // 0x23bea4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bea8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23beac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23beb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23beb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23beb4: 0x0  nop
    ctx->pc = 0x23beb4u;
    // NOP
    // 0x23beb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23beb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bebc: 0x0  nop
    ctx->pc = 0x23bebcu;
    // NOP
    // 0x23bec0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23BEC0u;
    {
        const bool branch_taken_0x23bec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bec0) {
            ctx->pc = 0x23BF28u;
            return;
        }
    }
    ctx->pc = 0x23BEC8u;
    // 0x23bec8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23becc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23beccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bed0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bed4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23bed8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23bed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23bedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23bedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bee0: 0x0  nop
    ctx->pc = 0x23bee0u;
    // NOP
    // 0x23bee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23bee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23bee8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23bee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23beec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bef0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bef4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23befc: 0x0  nop
    ctx->pc = 0x23befcu;
    // NOP
    // 0x23bf00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23bf00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bf04: 0x0  nop
    ctx->pc = 0x23bf04u;
    // NOP
    // 0x23bf08: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23BF08u;
    {
        const bool branch_taken_0x23bf08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bf08) {
            ctx->pc = 0x23BF80u;
            return;
        }
    }
    ctx->pc = 0x23BF10u;
    // 0x23bf10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bf10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bf14: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf18: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bf1c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23bf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23bf20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23BF20u;
    {
        const bool branch_taken_0x23bf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf20) {
            ctx->pc = 0x23BF80u;
            return;
        }
    }
    ctx->pc = 0x23BF28u;
}
