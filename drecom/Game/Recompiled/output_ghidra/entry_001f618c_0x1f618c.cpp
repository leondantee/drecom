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

// Function: entry_001f618c
// Address: 0x1f618c - 0x1f6228
void entry_001f618c_0x1f618c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f618c_0x1f618c");
#endif

    ctx->pc = 0x1f618cu;

    // 0x1f618c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6190: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6194: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6198: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f619c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f61a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f61a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f61a4: 0x0  nop
    ctx->pc = 0x1f61a4u;
    // NOP
    // 0x1f61a8: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F61A8u;
    {
        const bool branch_taken_0x1f61a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f61a8) {
            ctx->pc = 0x1F62A0u;
            return;
        }
    }
    ctx->pc = 0x1F61B0u;
    // 0x1f61b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f61b8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f61b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f61bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61c0: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f61c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f61c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f61c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f61c8: 0x0  nop
    ctx->pc = 0x1f61c8u;
    // NOP
    // 0x1f61cc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F61CCu;
    {
        const bool branch_taken_0x1f61cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f61cc) {
            ctx->pc = 0x1F6228u;
            return;
        }
    }
    ctx->pc = 0x1F61D4u;
    // 0x1f61d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f61dc: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1f61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f61e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61e4: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f61e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f61e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f61e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f61ec: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f61ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f61f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f61f8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f61f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f61fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6200: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6208: 0x0  nop
    ctx->pc = 0x1f6208u;
    // NOP
    // 0x1f620c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F620Cu;
    {
        const bool branch_taken_0x1f620c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f620c) {
            ctx->pc = 0x1F6228u;
            return;
        }
    }
    ctx->pc = 0x1F6214u;
    // 0x1f6214: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6218: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f621c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6224: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x1f6228u;
}
