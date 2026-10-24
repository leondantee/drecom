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

// Function: Em09_R1_br_mv0d
// Address: 0x34a220 - 0x34a4b0
void Em09_R1_br_mv0d_0x34a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_br_mv0d_0x34a220");
#endif

    switch (ctx->pc) {
        case 0x34a244u: goto label_34a244;
        case 0x34a2b8u: goto label_34a2b8;
        case 0x34a408u: goto label_34a408;
        default: break;
    }

    ctx->pc = 0x34a220u;

    // 0x34a220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34a224: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x34a224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x34a228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a22c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x34a230: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34a230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34a234: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x34a234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x34a238: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34a238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a23c: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x34A23Cu;
    SET_GPR_U32(ctx, 31, 0x34A244u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x34A23Cu, 0x34A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A244u;
label_34a244:
    // 0x34a244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a248: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a24c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34a250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a254: 0x0  nop
    ctx->pc = 0x34a254u;
    // NOP
    // 0x34a258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34a258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a25c: 0x0  nop
    ctx->pc = 0x34a25cu;
    // NOP
    // 0x34a260: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x34A260u;
    {
        const bool branch_taken_0x34a260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a260) {
            ctx->pc = 0x34A318u;
            goto label_34a318;
        }
    }
    ctx->pc = 0x34A268u;
    // 0x34a268: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a26c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a270: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x34a270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x34a274: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x34a274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x34a278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a27c: 0x0  nop
    ctx->pc = 0x34a27cu;
    // NOP
    // 0x34a280: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a284: 0x0  nop
    ctx->pc = 0x34a284u;
    // NOP
    // 0x34a288: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x34A288u;
    {
        const bool branch_taken_0x34a288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a288) {
            ctx->pc = 0x34A318u;
            goto label_34a318;
        }
    }
    ctx->pc = 0x34A290u;
    // 0x34a290: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34a290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a294: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a298: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x34a298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x34a29c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x34a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x34a2a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34a2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34a2a4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34a2a8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a2ac: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x34a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x34a2b0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x34A2B0u;
    SET_GPR_U32(ctx, 31, 0x34A2B8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x34A2B0u, 0x34A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2B8u;
label_34a2b8:
    // 0x34a2b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34A2B8u;
    {
        const bool branch_taken_0x34a2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a2b8) {
            ctx->pc = 0x34A318u;
            goto label_34a318;
        }
    }
    ctx->pc = 0x34A2C0u;
    // 0x34a2c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a2c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a2c8: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x34a2c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34a2cc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34A2CCu;
    {
        const bool branch_taken_0x34a2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a2cc) {
            ctx->pc = 0x34A318u;
            goto label_34a318;
        }
    }
    ctx->pc = 0x34A2D4u;
    // 0x34a2d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a2d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a2dc: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x34a2dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x34a2e0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34A2E0u;
    {
        const bool branch_taken_0x34a2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a2e0) {
            ctx->pc = 0x34A318u;
            goto label_34a318;
        }
    }
    ctx->pc = 0x34A2E8u;
    // 0x34a2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a2ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a2f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a2f4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x34a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34a2f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a2fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a300: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a304: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a308: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a30c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a30cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a310: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a314: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34a318:
    // 0x34a318: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a31c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x34a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a320: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x34a320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34a324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a328: 0x0  nop
    ctx->pc = 0x34a328u;
    // NOP
    // 0x34a32c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a32cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a330: 0x0  nop
    ctx->pc = 0x34a330u;
    // NOP
    // 0x34a334: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x34A334u;
    {
        const bool branch_taken_0x34a334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a334) {
            ctx->pc = 0x34A3ACu;
            goto label_34a3ac;
        }
    }
    ctx->pc = 0x34A33Cu;
    // 0x34a33c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a340: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a344: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x34a344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34a348: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x34A348u;
    {
        const bool branch_taken_0x34a348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a348) {
            ctx->pc = 0x34A3ACu;
            goto label_34a3ac;
        }
    }
    ctx->pc = 0x34A350u;
    // 0x34a350: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x34a350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a354: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a358: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x34a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a35c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34a360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a364: 0x0  nop
    ctx->pc = 0x34a364u;
    // NOP
    // 0x34a368: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a36c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34a36cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a370: 0x0  nop
    ctx->pc = 0x34a370u;
    // NOP
    // 0x34a374: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x34A374u;
    {
        const bool branch_taken_0x34a374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a374) {
            ctx->pc = 0x34A3ACu;
            goto label_34a3ac;
        }
    }
    ctx->pc = 0x34A37Cu;
    // 0x34a37c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a380: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a384: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a384u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a388: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34a38c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a390: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a394: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a398: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a39c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a3a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34a3ac:
    // 0x34a3ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3b0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a3b4: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x34a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34a3b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a3bc: 0x0  nop
    ctx->pc = 0x34a3bcu;
    // NOP
    // 0x34a3c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a3c4: 0x0  nop
    ctx->pc = 0x34a3c4u;
    // NOP
    // 0x34a3c8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x34A3C8u;
    {
        const bool branch_taken_0x34a3c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a3c8) {
            ctx->pc = 0x34A448u;
            goto label_34a448;
        }
    }
    ctx->pc = 0x34A3D0u;
    // 0x34a3d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a3d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3d8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34a3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a3dc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x34a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34a3e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3e4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34a3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a3e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3ec: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34a3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a3f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3f4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34a3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a3f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34a400: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A400u;
    SET_GPR_U32(ctx, 31, 0x34A408u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A400u, 0x34A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A408u;
label_34a408:
    // 0x34a408: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34a408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a40c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34a40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34a410: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34A410u;
    {
        const bool branch_taken_0x34a410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a410) {
            ctx->pc = 0x34A448u;
            goto label_34a448;
        }
    }
    ctx->pc = 0x34A418u;
    // 0x34a418: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a41c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a420: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a424: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34a424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34a428: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a42c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a42cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a430: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a434: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a438: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a43c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a440: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a444: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34a448:
    // 0x34a448: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a44c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a450: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x34a450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x34a454: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x34A454u;
    {
        const bool branch_taken_0x34a454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a454) {
            ctx->pc = 0x34A49Cu;
            goto label_34a49c;
        }
    }
    ctx->pc = 0x34A45Cu;
    // 0x34a45c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a460: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a464: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a464u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a468: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a46c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a470: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a474: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a478: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a47c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a480: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a488: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34a48c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34a490: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a494: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a498: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34a498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
label_34a49c:
    // 0x34a49c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x34a49cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a4a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a4a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34a4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34a4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x34A4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A4B0u;
}
