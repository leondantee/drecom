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

// Function: entry_0023ea00
// Address: 0x23ea00 - 0x23eaa8
void entry_0023ea00_0x23ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ea00_0x23ea00");
#endif

    ctx->pc = 0x23ea00u;

    // 0x23ea00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ea08: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ea0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ea0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea10: 0x0  nop
    ctx->pc = 0x23ea10u;
    // NOP
    // 0x23ea14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23ea14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ea18: 0x0  nop
    ctx->pc = 0x23ea18u;
    // NOP
    // 0x23ea1c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23EA1Cu;
    {
        const bool branch_taken_0x23ea1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ea1c) {
            ctx->pc = 0x23EB00u;
            return;
        }
    }
    ctx->pc = 0x23EA24u;
    // 0x23ea24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ea2c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ea30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ea30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea34: 0x0  nop
    ctx->pc = 0x23ea34u;
    // NOP
    // 0x23ea38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ea38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ea3c: 0x0  nop
    ctx->pc = 0x23ea3cu;
    // NOP
    // 0x23ea40: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23EA40u;
    {
        const bool branch_taken_0x23ea40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ea40) {
            ctx->pc = 0x23EAA8u;
            return;
        }
    }
    ctx->pc = 0x23EA48u;
    // 0x23ea48: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea4c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ea50: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ea54: 0x3c043cc9  lui         $a0, 0x3CC9
    ctx->pc = 0x23ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15561 << 16));
    // 0x23ea58: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x23ea58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x23ea5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23ea5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea60: 0x0  nop
    ctx->pc = 0x23ea60u;
    // NOP
    // 0x23ea64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23ea64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23ea68: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x23ea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x23ea6c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea70: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23ea74: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ea78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ea78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea7c: 0x0  nop
    ctx->pc = 0x23ea7cu;
    // NOP
    // 0x23ea80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23ea80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ea84: 0x0  nop
    ctx->pc = 0x23ea84u;
    // NOP
    // 0x23ea88: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23EA88u;
    {
        const bool branch_taken_0x23ea88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ea88) {
            ctx->pc = 0x23EB00u;
            return;
        }
    }
    ctx->pc = 0x23EA90u;
    // 0x23ea90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ea90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea94: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x23ea94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ea98: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x23ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x23ea9c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23eaa0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23EAA0u;
    {
        const bool branch_taken_0x23eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eaa0) {
            ctx->pc = 0x23EB00u;
            return;
        }
    }
    ctx->pc = 0x23EAA8u;
}
