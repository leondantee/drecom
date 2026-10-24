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

// Function: entry_0023e094
// Address: 0x23e094 - 0x23e13c
void entry_0023e094_0x23e094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e094_0x23e094");
#endif

    ctx->pc = 0x23e094u;

    // 0x23e094: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e098: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e09c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e0a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e0a4: 0x0  nop
    ctx->pc = 0x23e0a4u;
    // NOP
    // 0x23e0a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23e0a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e0ac: 0x0  nop
    ctx->pc = 0x23e0acu;
    // NOP
    // 0x23e0b0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23E0B0u;
    {
        const bool branch_taken_0x23e0b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e0b0) {
            ctx->pc = 0x23E194u;
            return;
        }
    }
    ctx->pc = 0x23E0B8u;
    // 0x23e0b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e0bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e0c0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e0c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e0c8: 0x0  nop
    ctx->pc = 0x23e0c8u;
    // NOP
    // 0x23e0cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e0ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e0d0: 0x0  nop
    ctx->pc = 0x23e0d0u;
    // NOP
    // 0x23e0d4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23E0D4u;
    {
        const bool branch_taken_0x23e0d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e0d4) {
            ctx->pc = 0x23E13Cu;
            return;
        }
    }
    ctx->pc = 0x23E0DCu;
    // 0x23e0dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e0e0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e0e4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23e0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e0e8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23e0ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23e0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23e0f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e0f4: 0x0  nop
    ctx->pc = 0x23e0f4u;
    // NOP
    // 0x23e0f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23e0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23e0fc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23e0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23e100: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e104: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e108: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e10c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e10cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e110: 0x0  nop
    ctx->pc = 0x23e110u;
    // NOP
    // 0x23e114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e118: 0x0  nop
    ctx->pc = 0x23e118u;
    // NOP
    // 0x23e11c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23E11Cu;
    {
        const bool branch_taken_0x23e11c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e11c) {
            ctx->pc = 0x23E194u;
            return;
        }
    }
    ctx->pc = 0x23E124u;
    // 0x23e124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e128: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e12c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e130: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23e130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23e134: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23E134u;
    {
        const bool branch_taken_0x23e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e134) {
            ctx->pc = 0x23E194u;
            return;
        }
    }
    ctx->pc = 0x23E13Cu;
}
