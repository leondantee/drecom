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

// Function: entry_0022eaa0
// Address: 0x22eaa0 - 0x22eb54
void entry_0022eaa0_0x22eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022eaa0_0x22eaa0");
#endif

    ctx->pc = 0x22eaa0u;

    // 0x22eaa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eaa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eaa8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x22eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22eaac: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22eaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22eab0: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x22EAB0u;
    {
        const bool branch_taken_0x22eab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eab0) {
            ctx->pc = 0x22ECE0u;
            return;
        }
    }
    ctx->pc = 0x22EAB8u;
    // 0x22eab8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eabc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eac0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eac4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eac8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eacc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22eaccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ead0: 0x0  nop
    ctx->pc = 0x22ead0u;
    // NOP
    // 0x22ead4: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x22EAD4u;
    {
        const bool branch_taken_0x22ead4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ead4) {
            ctx->pc = 0x22EBCCu;
            return;
        }
    }
    ctx->pc = 0x22EADCu;
    // 0x22eadc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eae0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eae4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eae8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eaec: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eaf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22eaf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eaf4: 0x0  nop
    ctx->pc = 0x22eaf4u;
    // NOP
    // 0x22eaf8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x22EAF8u;
    {
        const bool branch_taken_0x22eaf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eaf8) {
            ctx->pc = 0x22EB54u;
            return;
        }
    }
    ctx->pc = 0x22EB00u;
    // 0x22eb00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb08: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eb0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb10: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22eb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22eb18: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22eb1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb24: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eb28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb2c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22eb30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eb34: 0x0  nop
    ctx->pc = 0x22eb34u;
    // NOP
    // 0x22eb38: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22EB38u;
    {
        const bool branch_taken_0x22eb38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eb38) {
            ctx->pc = 0x22EB54u;
            return;
        }
    }
    ctx->pc = 0x22EB40u;
    // 0x22eb40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb44: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb48: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb50: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x22eb54u;
}
