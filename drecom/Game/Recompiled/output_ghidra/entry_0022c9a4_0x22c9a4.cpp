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

// Function: entry_0022c9a4
// Address: 0x22c9a4 - 0x22ca4c
void entry_0022c9a4_0x22c9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c9a4_0x22c9a4");
#endif

    ctx->pc = 0x22c9a4u;

    // 0x22c9a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c9a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c9ac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c9b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c9b4: 0x0  nop
    ctx->pc = 0x22c9b4u;
    // NOP
    // 0x22c9b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22c9b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c9bc: 0x0  nop
    ctx->pc = 0x22c9bcu;
    // NOP
    // 0x22c9c0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22C9C0u;
    {
        const bool branch_taken_0x22c9c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c9c0) {
            ctx->pc = 0x22CAA4u;
            return;
        }
    }
    ctx->pc = 0x22C9C8u;
    // 0x22c9c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c9cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c9d0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c9d8: 0x0  nop
    ctx->pc = 0x22c9d8u;
    // NOP
    // 0x22c9dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c9dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c9e0: 0x0  nop
    ctx->pc = 0x22c9e0u;
    // NOP
    // 0x22c9e4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22C9E4u;
    {
        const bool branch_taken_0x22c9e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c9e4) {
            ctx->pc = 0x22CA4Cu;
            return;
        }
    }
    ctx->pc = 0x22C9ECu;
    // 0x22c9ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c9f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c9f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c9f8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22c9fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22c9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22ca00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ca00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca04: 0x0  nop
    ctx->pc = 0x22ca04u;
    // NOP
    // 0x22ca08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22ca08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22ca0c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22ca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22ca10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ca18: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22ca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ca1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ca1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca20: 0x0  nop
    ctx->pc = 0x22ca20u;
    // NOP
    // 0x22ca24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ca28: 0x0  nop
    ctx->pc = 0x22ca28u;
    // NOP
    // 0x22ca2c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22CA2Cu;
    {
        const bool branch_taken_0x22ca2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ca2c) {
            ctx->pc = 0x22CAA4u;
            return;
        }
    }
    ctx->pc = 0x22CA34u;
    // 0x22ca34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ca34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ca40: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22ca40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22ca44: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22CA44u;
    {
        const bool branch_taken_0x22ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ca44) {
            ctx->pc = 0x22CAA4u;
            return;
        }
    }
    ctx->pc = 0x22CA4Cu;
}
