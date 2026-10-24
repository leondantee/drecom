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

// Function: entry_0022ebcc
// Address: 0x22ebcc - 0x22ec68
void entry_0022ebcc_0x22ebcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ebcc_0x22ebcc");
#endif

    ctx->pc = 0x22ebccu;

    // 0x22ebcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebd0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ebd4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ebd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebdc: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ebe0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22ebe0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ebe4: 0x0  nop
    ctx->pc = 0x22ebe4u;
    // NOP
    // 0x22ebe8: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x22EBE8u;
    {
        const bool branch_taken_0x22ebe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ebe8) {
            ctx->pc = 0x22ECE0u;
            return;
        }
    }
    ctx->pc = 0x22EBF0u;
    // 0x22ebf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebf4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ebf8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ebfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec00: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ec04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ec08: 0x0  nop
    ctx->pc = 0x22ec08u;
    // NOP
    // 0x22ec0c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x22EC0Cu;
    {
        const bool branch_taken_0x22ec0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ec0c) {
            ctx->pc = 0x22EC68u;
            return;
        }
    }
    ctx->pc = 0x22EC14u;
    // 0x22ec14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec18: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec1c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x22ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ec20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec24: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ec28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22ec2c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22ec30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec38: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ec3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec40: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ec44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ec48: 0x0  nop
    ctx->pc = 0x22ec48u;
    // NOP
    // 0x22ec4c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22EC4Cu;
    {
        const bool branch_taken_0x22ec4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ec4c) {
            ctx->pc = 0x22EC68u;
            return;
        }
    }
    ctx->pc = 0x22EC54u;
    // 0x22ec54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec5c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x22ec5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec64: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x22ec68u;
}
