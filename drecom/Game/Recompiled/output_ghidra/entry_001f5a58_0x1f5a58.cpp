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

// Function: entry_001f5a58
// Address: 0x1f5a58 - 0x1f5af4
void entry_001f5a58_0x1f5a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5a58_0x1f5a58");
#endif

    ctx->pc = 0x1f5a58u;

    // 0x1f5a58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a60: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f5a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a68: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f5a6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5a70: 0x0  nop
    ctx->pc = 0x1f5a70u;
    // NOP
    // 0x1f5a74: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F5A74u;
    {
        const bool branch_taken_0x1f5a74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5a74) {
            ctx->pc = 0x1F5B6Cu;
            return;
        }
    }
    ctx->pc = 0x1F5A7Cu;
    // 0x1f5a7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a84: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f5a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a8c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5a94: 0x0  nop
    ctx->pc = 0x1f5a94u;
    // NOP
    // 0x1f5a98: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F5A98u;
    {
        const bool branch_taken_0x1f5a98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5a98) {
            ctx->pc = 0x1F5AF4u;
            return;
        }
    }
    ctx->pc = 0x1F5AA0u;
    // 0x1f5aa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5aa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5aa8: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1f5aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5aac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5ab0: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5ab4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f5ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5ab8: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f5abc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5ac0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5ac4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f5ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5ac8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5acc: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5ad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5ad4: 0x0  nop
    ctx->pc = 0x1f5ad4u;
    // NOP
    // 0x1f5ad8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5AD8u;
    {
        const bool branch_taken_0x1f5ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5ad8) {
            ctx->pc = 0x1F5AF4u;
            return;
        }
    }
    ctx->pc = 0x1F5AE0u;
    // 0x1f5ae0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5ae4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5ae8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f5ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5aec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5af0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x1f5af4u;
}
