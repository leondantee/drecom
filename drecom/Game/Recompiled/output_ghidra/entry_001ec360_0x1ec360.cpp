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

// Function: entry_001ec360
// Address: 0x1ec360 - 0x1ec410
void entry_001ec360_0x1ec360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec360_0x1ec360");
#endif

    ctx->pc = 0x1ec360u;

    // 0x1ec360: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec364: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec368: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1ec368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec36c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec370: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec374: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ec374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec378: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ec378u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec37c: 0x0  nop
    ctx->pc = 0x1ec37cu;
    // NOP
    // 0x1ec380: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x1EC380u;
    {
        const bool branch_taken_0x1ec380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec380) {
            ctx->pc = 0x1EC498u;
            return;
        }
    }
    ctx->pc = 0x1EC388u;
    // 0x1ec388: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec38c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec390: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1ec390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec394: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec398: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec39c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec3a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec3a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec3a4: 0x0  nop
    ctx->pc = 0x1ec3a4u;
    // NOP
    // 0x1ec3a8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1EC3A8u;
    {
        const bool branch_taken_0x1ec3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec3a8) {
            ctx->pc = 0x1EC410u;
            return;
        }
    }
    ctx->pc = 0x1EC3B0u;
    // 0x1ec3b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec3b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec3b8: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x1ec3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec3bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec3c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec3c4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec3c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec3cc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1ec3d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec3d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec3d8: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1ec3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec3dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec3e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec3e4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec3e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec3e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec3ec: 0x0  nop
    ctx->pc = 0x1ec3ecu;
    // NOP
    // 0x1ec3f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC3F0u;
    {
        const bool branch_taken_0x1ec3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec3f0) {
            ctx->pc = 0x1EC410u;
            return;
        }
    }
    ctx->pc = 0x1EC3F8u;
    // 0x1ec3f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec3fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec400: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ec400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec404: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec408: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec40c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x1ec410u;
}
