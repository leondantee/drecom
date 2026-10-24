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

// Function: entry_00129064
// Address: 0x129064 - 0x129108
void entry_00129064_0x129064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129064_0x129064");
#endif

    switch (ctx->pc) {
        case 0x129074u: goto label_129074;
        default: break;
    }

    ctx->pc = 0x129064u;

    // 0x129064: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12906c: 0xc05d25c  jal         func_174970
    ctx->pc = 0x12906Cu;
    SET_GPR_U32(ctx, 31, 0x129074u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12906Cu, 0x129074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129074u;
label_129074:
    // 0x129074: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x129074u;
    {
        const bool branch_taken_0x129074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129074) {
            ctx->pc = 0x129108u;
            return;
        }
    }
    ctx->pc = 0x12907Cu;
    // 0x12907c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129080: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x129080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129084: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x129084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x129088: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x129088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12908c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12908cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x129090: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x129090u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129094: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x129094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x129098: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x129098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12909c: 0x0  nop
    ctx->pc = 0x12909cu;
    // NOP
    // 0x1290a0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1290A0u;
    {
        const bool branch_taken_0x1290a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1290a0) {
            ctx->pc = 0x129108u;
            return;
        }
    }
    ctx->pc = 0x1290A8u;
    // 0x1290a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1290ac: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1290acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1290b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1290b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1290b4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1290b4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1290b8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1290b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1290bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1290bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1290c0: 0x0  nop
    ctx->pc = 0x1290c0u;
    // NOP
    // 0x1290c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1290c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1290c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1290c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1290cc: 0x0  nop
    ctx->pc = 0x1290ccu;
    // NOP
    // 0x1290d0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1290D0u;
    {
        const bool branch_taken_0x1290d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1290d0) {
            ctx->pc = 0x129108u;
            return;
        }
    }
    ctx->pc = 0x1290D8u;
    // 0x1290d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1290d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1290dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1290e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1290e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1290e4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1290e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1290e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1290ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1290ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1290f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1290f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1290f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1290f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1290fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1290fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129100: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129104: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x129108u;
}
