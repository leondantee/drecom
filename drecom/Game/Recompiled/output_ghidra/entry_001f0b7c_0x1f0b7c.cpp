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

// Function: entry_001f0b7c
// Address: 0x1f0b7c - 0x1f0c24
void entry_001f0b7c_0x1f0b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0b7c_0x1f0b7c");
#endif

    ctx->pc = 0x1f0b7cu;

    // 0x1f0b7c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0b80: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0b84: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0b88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0b8c: 0x0  nop
    ctx->pc = 0x1f0b8cu;
    // NOP
    // 0x1f0b90: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f0b90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0b94: 0x0  nop
    ctx->pc = 0x1f0b94u;
    // NOP
    // 0x1f0b98: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1F0B98u;
    {
        const bool branch_taken_0x1f0b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0b98) {
            ctx->pc = 0x1F0C7Cu;
            return;
        }
    }
    ctx->pc = 0x1F0BA0u;
    // 0x1f0ba0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0ba4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0ba8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f0ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0bac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0bb0: 0x0  nop
    ctx->pc = 0x1f0bb0u;
    // NOP
    // 0x1f0bb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0bb8: 0x0  nop
    ctx->pc = 0x1f0bb8u;
    // NOP
    // 0x1f0bbc: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1F0BBCu;
    {
        const bool branch_taken_0x1f0bbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0bbc) {
            ctx->pc = 0x1F0C24u;
            return;
        }
    }
    ctx->pc = 0x1F0BC4u;
    // 0x1f0bc4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0bc8: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x1f0bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f0bcc: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x1f0bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0bd0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1f0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1f0bd4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f0bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f0bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0bdc: 0x0  nop
    ctx->pc = 0x1f0bdcu;
    // NOP
    // 0x1f0be0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0be0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0be4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1f0be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1f0be8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0bec: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0bf0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f0bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0bf8: 0x0  nop
    ctx->pc = 0x1f0bf8u;
    // NOP
    // 0x1f0bfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f0bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0c00: 0x0  nop
    ctx->pc = 0x1f0c00u;
    // NOP
    // 0x1f0c04: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1F0C04u;
    {
        const bool branch_taken_0x1f0c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0c04) {
            ctx->pc = 0x1F0C7Cu;
            return;
        }
    }
    ctx->pc = 0x1F0C0Cu;
    // 0x1f0c0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c10: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c14: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0c18: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1f0c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1f0c1c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0C1Cu;
    {
        const bool branch_taken_0x1f0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c1c) {
            ctx->pc = 0x1F0C7Cu;
            return;
        }
    }
    ctx->pc = 0x1F0C24u;
}
