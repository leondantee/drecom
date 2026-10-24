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

// Function: entry_0012766c
// Address: 0x12766c - 0x127710
void entry_0012766c_0x12766c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012766c_0x12766c");
#endif

    switch (ctx->pc) {
        case 0x12767cu: goto label_12767c;
        default: break;
    }

    ctx->pc = 0x12766cu;

    // 0x12766c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127674: 0xc05d25c  jal         func_174970
    ctx->pc = 0x127674u;
    SET_GPR_U32(ctx, 31, 0x12767Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127674u, 0x12767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12767Cu;
label_12767c:
    // 0x12767c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12767Cu;
    {
        const bool branch_taken_0x12767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12767c) {
            ctx->pc = 0x127710u;
            return;
        }
    }
    ctx->pc = 0x127684u;
    // 0x127684: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127688: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12768c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12768cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x127690: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127694: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127698: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127698u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12769c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12769cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1276a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1276a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1276a4: 0x0  nop
    ctx->pc = 0x1276a4u;
    // NOP
    // 0x1276a8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1276A8u;
    {
        const bool branch_taken_0x1276a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1276a8) {
            ctx->pc = 0x127710u;
            return;
        }
    }
    ctx->pc = 0x1276B0u;
    // 0x1276b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1276b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1276b4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1276b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1276b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1276b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1276bc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1276bcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1276c0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1276c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1276c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1276c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1276c8: 0x0  nop
    ctx->pc = 0x1276c8u;
    // NOP
    // 0x1276cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1276ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1276d0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1276d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1276d4: 0x0  nop
    ctx->pc = 0x1276d4u;
    // NOP
    // 0x1276d8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1276D8u;
    {
        const bool branch_taken_0x1276d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1276d8) {
            ctx->pc = 0x127710u;
            return;
        }
    }
    ctx->pc = 0x1276E0u;
    // 0x1276e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1276e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1276e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1276e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1276e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1276e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1276ec: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1276ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1276f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1276f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1276f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1276f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1276f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1276fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1276fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127700: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127704: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127708: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12770c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12770cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x127710u;
}
