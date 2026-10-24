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

// Function: entry_001297d4
// Address: 0x1297d4 - 0x129880
void entry_001297d4_0x1297d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001297d4_0x1297d4");
#endif

    switch (ctx->pc) {
        case 0x1297e4u: goto label_1297e4;
        default: break;
    }

    ctx->pc = 0x1297d4u;

    // 0x1297d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1297d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1297d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1297d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297dc: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1297DCu;
    SET_GPR_U32(ctx, 31, 0x1297E4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1297DCu, 0x1297E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1297E4u;
label_1297e4:
    // 0x1297e4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1297E4u;
    {
        const bool branch_taken_0x1297e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1297e4) {
            ctx->pc = 0x129880u;
            return;
        }
    }
    ctx->pc = 0x1297ECu;
    // 0x1297ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1297ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1297f0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1297f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1297f4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1297f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1297f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1297f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1297fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1297fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x129800: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x129800u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129804: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x129804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x129808: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x129808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12980c: 0x0  nop
    ctx->pc = 0x12980cu;
    // NOP
    // 0x129810: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x129810u;
    {
        const bool branch_taken_0x129810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129810) {
            ctx->pc = 0x129880u;
            return;
        }
    }
    ctx->pc = 0x129818u;
    // 0x129818: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12981c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129820: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x129820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x129824: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x129824u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129828: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x129828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x12982c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12982cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129830: 0x0  nop
    ctx->pc = 0x129830u;
    // NOP
    // 0x129834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x129834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x129838: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x129838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12983c: 0x0  nop
    ctx->pc = 0x12983cu;
    // NOP
    // 0x129840: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x129840u;
    {
        const bool branch_taken_0x129840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129840) {
            ctx->pc = 0x129880u;
            return;
        }
    }
    ctx->pc = 0x129848u;
    // 0x129848: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12984c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129850: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129854: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x129854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x129858: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12985c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12985cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129864: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129868: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12986c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12986cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129870: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129874: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x129878: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x129878u;
    {
        const bool branch_taken_0x129878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129878) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x129880u;
}
