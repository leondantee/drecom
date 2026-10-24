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

// Function: entry_001efc90
// Address: 0x1efc90 - 0x1efd38
void entry_001efc90_0x1efc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efc90_0x1efc90");
#endif

    ctx->pc = 0x1efc90u;

    // 0x1efc90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efc98: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1efc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efc9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efca0: 0x0  nop
    ctx->pc = 0x1efca0u;
    // NOP
    // 0x1efca4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1efca4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efca8: 0x0  nop
    ctx->pc = 0x1efca8u;
    // NOP
    // 0x1efcac: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1EFCACu;
    {
        const bool branch_taken_0x1efcac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efcac) {
            ctx->pc = 0x1EFD90u;
            return;
        }
    }
    ctx->pc = 0x1EFCB4u;
    // 0x1efcb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efcb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efcbc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1efcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efcc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efcc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efcc4: 0x0  nop
    ctx->pc = 0x1efcc4u;
    // NOP
    // 0x1efcc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1efcc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efccc: 0x0  nop
    ctx->pc = 0x1efcccu;
    // NOP
    // 0x1efcd0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1EFCD0u;
    {
        const bool branch_taken_0x1efcd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efcd0) {
            ctx->pc = 0x1EFD38u;
            return;
        }
    }
    ctx->pc = 0x1EFCD8u;
    // 0x1efcd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efcdc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1efcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efce0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1efce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efce4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1efce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1efce8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1efce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1efcec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efcecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efcf0: 0x0  nop
    ctx->pc = 0x1efcf0u;
    // NOP
    // 0x1efcf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efcf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efcf8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1efcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1efcfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd04: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1efd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efd08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd0c: 0x0  nop
    ctx->pc = 0x1efd0cu;
    // NOP
    // 0x1efd10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1efd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efd14: 0x0  nop
    ctx->pc = 0x1efd14u;
    // NOP
    // 0x1efd18: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1EFD18u;
    {
        const bool branch_taken_0x1efd18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efd18) {
            ctx->pc = 0x1EFD90u;
            return;
        }
    }
    ctx->pc = 0x1EFD20u;
    // 0x1efd20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efd20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd2c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1efd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1efd30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EFD30u;
    {
        const bool branch_taken_0x1efd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd30) {
            ctx->pc = 0x1EFD90u;
            return;
        }
    }
    ctx->pc = 0x1EFD38u;
}
