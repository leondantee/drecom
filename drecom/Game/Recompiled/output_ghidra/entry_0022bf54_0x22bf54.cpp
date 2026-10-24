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

// Function: entry_0022bf54
// Address: 0x22bf54 - 0x22bffc
void entry_0022bf54_0x22bf54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022bf54_0x22bf54");
#endif

    ctx->pc = 0x22bf54u;

    // 0x22bf54: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bf5c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22bf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bf60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bf60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bf64: 0x0  nop
    ctx->pc = 0x22bf64u;
    // NOP
    // 0x22bf68: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22bf68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf6c: 0x0  nop
    ctx->pc = 0x22bf6cu;
    // NOP
    // 0x22bf70: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22BF70u;
    {
        const bool branch_taken_0x22bf70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bf70) {
            ctx->pc = 0x22C054u;
            return;
        }
    }
    ctx->pc = 0x22BF78u;
    // 0x22bf78: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bf80: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bf84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bf84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bf88: 0x0  nop
    ctx->pc = 0x22bf88u;
    // NOP
    // 0x22bf8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bf8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf90: 0x0  nop
    ctx->pc = 0x22bf90u;
    // NOP
    // 0x22bf94: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22BF94u;
    {
        const bool branch_taken_0x22bf94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bf94) {
            ctx->pc = 0x22BFFCu;
            return;
        }
    }
    ctx->pc = 0x22BF9Cu;
    // 0x22bf9c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bfa0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bfa4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22bfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bfa8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22bfac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22bfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22bfb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bfb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfb4: 0x0  nop
    ctx->pc = 0x22bfb4u;
    // NOP
    // 0x22bfb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22bfb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22bfbc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22bfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22bfc0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bfc4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bfc8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22bfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bfcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bfccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfd0: 0x0  nop
    ctx->pc = 0x22bfd0u;
    // NOP
    // 0x22bfd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22bfd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bfd8: 0x0  nop
    ctx->pc = 0x22bfd8u;
    // NOP
    // 0x22bfdc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22BFDCu;
    {
        const bool branch_taken_0x22bfdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bfdc) {
            ctx->pc = 0x22C054u;
            return;
        }
    }
    ctx->pc = 0x22BFE4u;
    // 0x22bfe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfe8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bfec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bff0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22bff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22bff4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22BFF4u;
    {
        const bool branch_taken_0x22bff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bff4) {
            ctx->pc = 0x22C054u;
            return;
        }
    }
    ctx->pc = 0x22BFFCu;
}
