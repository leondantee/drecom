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

// Function: entry_001f6f7c
// Address: 0x1f6f7c - 0x1f7018
void entry_001f6f7c_0x1f6f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6f7c_0x1f6f7c");
#endif

    ctx->pc = 0x1f6f7cu;

    // 0x1f6f7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f84: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6f88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f8c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f90: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f6f90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6f94: 0x0  nop
    ctx->pc = 0x1f6f94u;
    // NOP
    // 0x1f6f98: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F6F98u;
    {
        const bool branch_taken_0x1f6f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6f98) {
            ctx->pc = 0x1F7090u;
            return;
        }
    }
    ctx->pc = 0x1F6FA0u;
    // 0x1f6fa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6fa8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6fac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fb0: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6fb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6fb8: 0x0  nop
    ctx->pc = 0x1f6fb8u;
    // NOP
    // 0x1f6fbc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6FBCu;
    {
        const bool branch_taken_0x1f6fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6fbc) {
            ctx->pc = 0x1F7018u;
            return;
        }
    }
    ctx->pc = 0x1F6FC4u;
    // 0x1f6fc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6fcc: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1f6fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6fd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fd4: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6fd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6fdc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f6fe0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6fe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6fe8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6fec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ff0: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ff4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6ff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6ff8: 0x0  nop
    ctx->pc = 0x1f6ff8u;
    // NOP
    // 0x1f6ffc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6FFCu;
    {
        const bool branch_taken_0x1f6ffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6ffc) {
            ctx->pc = 0x1F7018u;
            return;
        }
    }
    ctx->pc = 0x1F7004u;
    // 0x1f7004: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7008: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f700c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7010: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f7010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7014: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f7014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x1f7018u;
}
