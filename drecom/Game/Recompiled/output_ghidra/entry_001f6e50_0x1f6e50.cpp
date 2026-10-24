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

// Function: entry_001f6e50
// Address: 0x1f6e50 - 0x1f6f04
void entry_001f6e50_0x1f6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6e50_0x1f6e50");
#endif

    ctx->pc = 0x1f6e50u;

    // 0x1f6e50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6e58: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f6e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f6e5c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1f6e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f6e60: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1F6E60u;
    {
        const bool branch_taken_0x1f6e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e60) {
            ctx->pc = 0x1F7090u;
            return;
        }
    }
    ctx->pc = 0x1F6E68u;
    // 0x1f6e68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6e70: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6e74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e78: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6e7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f6e7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6e80: 0x0  nop
    ctx->pc = 0x1f6e80u;
    // NOP
    // 0x1f6e84: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F6E84u;
    {
        const bool branch_taken_0x1f6e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6e84) {
            ctx->pc = 0x1F6F7Cu;
            return;
        }
    }
    ctx->pc = 0x1F6E8Cu;
    // 0x1f6e8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6e94: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6e98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e9c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ea0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6ea4: 0x0  nop
    ctx->pc = 0x1f6ea4u;
    // NOP
    // 0x1f6ea8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6EA8u;
    {
        const bool branch_taken_0x1f6ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6ea8) {
            ctx->pc = 0x1F6F04u;
            return;
        }
    }
    ctx->pc = 0x1F6EB0u;
    // 0x1f6eb0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6eb4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6eb8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6ebc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ec0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6ec8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f6ecc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ed0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6ed4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6ed8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6edc: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ee0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6ee4: 0x0  nop
    ctx->pc = 0x1f6ee4u;
    // NOP
    // 0x1f6ee8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6EE8u;
    {
        const bool branch_taken_0x1f6ee8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6ee8) {
            ctx->pc = 0x1F6F04u;
            return;
        }
    }
    ctx->pc = 0x1F6EF0u;
    // 0x1f6ef0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ef4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6ef8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f6ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6efc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f00: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1f6f04u;
}
