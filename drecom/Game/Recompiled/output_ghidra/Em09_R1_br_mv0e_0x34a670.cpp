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

// Function: Em09_R1_br_mv0e
// Address: 0x34a670 - 0x34a99c
void Em09_R1_br_mv0e_0x34a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_br_mv0e_0x34a670");
#endif

    switch (ctx->pc) {
        case 0x34a694u: goto label_34a694;
        case 0x34a708u: goto label_34a708;
        case 0x34a858u: goto label_34a858;
        case 0x34a944u: goto label_34a944;
        default: break;
    }

    ctx->pc = 0x34a670u;

    // 0x34a670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34a670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34a674: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x34a674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x34a678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a67c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x34a680: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34a684: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x34a684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x34a688: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34a688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a68c: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x34A68Cu;
    SET_GPR_U32(ctx, 31, 0x34A694u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x34A68Cu, 0x34A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A694u;
label_34a694:
    // 0x34a694: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a698: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a69c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34a6a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a6a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a6a4: 0x0  nop
    ctx->pc = 0x34a6a4u;
    // NOP
    // 0x34a6a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34a6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a6ac: 0x0  nop
    ctx->pc = 0x34a6acu;
    // NOP
    // 0x34a6b0: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x34A6B0u;
    {
        const bool branch_taken_0x34a6b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a6b0) {
            ctx->pc = 0x34A768u;
            goto label_34a768;
        }
    }
    ctx->pc = 0x34A6B8u;
    // 0x34a6b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a6bc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a6c0: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x34a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x34a6c4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x34a6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x34a6c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a6c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a6cc: 0x0  nop
    ctx->pc = 0x34a6ccu;
    // NOP
    // 0x34a6d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a6d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a6d4: 0x0  nop
    ctx->pc = 0x34a6d4u;
    // NOP
    // 0x34a6d8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x34A6D8u;
    {
        const bool branch_taken_0x34a6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a6d8) {
            ctx->pc = 0x34A768u;
            goto label_34a768;
        }
    }
    ctx->pc = 0x34A6E0u;
    // 0x34a6e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a6e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a6e8: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x34a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x34a6ec: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x34a6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x34a6f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34a6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34a6f4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34a6f8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34a6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a6fc: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x34a6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x34a700: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x34A700u;
    SET_GPR_U32(ctx, 31, 0x34A708u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x34A700u, 0x34A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A708u;
label_34a708:
    // 0x34a708: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34A708u;
    {
        const bool branch_taken_0x34a708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a708) {
            ctx->pc = 0x34A768u;
            goto label_34a768;
        }
    }
    ctx->pc = 0x34A710u;
    // 0x34a710: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a714: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a718: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x34a718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34a71c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34A71Cu;
    {
        const bool branch_taken_0x34a71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a71c) {
            ctx->pc = 0x34A768u;
            goto label_34a768;
        }
    }
    ctx->pc = 0x34A724u;
    // 0x34a724: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a728: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a72c: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x34a72cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x34a730: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34A730u;
    {
        const bool branch_taken_0x34a730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a730) {
            ctx->pc = 0x34A768u;
            goto label_34a768;
        }
    }
    ctx->pc = 0x34A738u;
    // 0x34a738: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a73c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a740: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a744: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x34a744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34a748: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a74c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a74cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a750: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a754: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a758: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a75c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a75cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a760: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a764: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34a768:
    // 0x34a768: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a76c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x34a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a770: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x34a770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34a774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a778: 0x0  nop
    ctx->pc = 0x34a778u;
    // NOP
    // 0x34a77c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a77cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a780: 0x0  nop
    ctx->pc = 0x34a780u;
    // NOP
    // 0x34a784: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x34A784u;
    {
        const bool branch_taken_0x34a784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a784) {
            ctx->pc = 0x34A7FCu;
            goto label_34a7fc;
        }
    }
    ctx->pc = 0x34A78Cu;
    // 0x34a78c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a790: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a794: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x34a794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34a798: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x34A798u;
    {
        const bool branch_taken_0x34a798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a798) {
            ctx->pc = 0x34A7FCu;
            goto label_34a7fc;
        }
    }
    ctx->pc = 0x34A7A0u;
    // 0x34a7a0: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x34a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a7a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7a8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x34a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a7ac: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34a7b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a7b4: 0x0  nop
    ctx->pc = 0x34a7b4u;
    // NOP
    // 0x34a7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a7bc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34a7bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a7c0: 0x0  nop
    ctx->pc = 0x34a7c0u;
    // NOP
    // 0x34a7c4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x34A7C4u;
    {
        const bool branch_taken_0x34a7c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a7c4) {
            ctx->pc = 0x34A7FCu;
            goto label_34a7fc;
        }
    }
    ctx->pc = 0x34A7CCu;
    // 0x34a7cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a7d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a7d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34a7dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a7e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a7ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a7f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34a7fc:
    // 0x34a7fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a800: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a804: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x34a804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34a808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a80c: 0x0  nop
    ctx->pc = 0x34a80cu;
    // NOP
    // 0x34a810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a814: 0x0  nop
    ctx->pc = 0x34a814u;
    // NOP
    // 0x34a818: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x34A818u;
    {
        const bool branch_taken_0x34a818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a818) {
            ctx->pc = 0x34A898u;
            goto label_34a898;
        }
    }
    ctx->pc = 0x34A820u;
    // 0x34a820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a824: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a828: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34a828u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a82c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x34a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34a830: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a834: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34a834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a83c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34a83cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a840: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a844: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34a844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a84c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34a850: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A850u;
    SET_GPR_U32(ctx, 31, 0x34A858u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A850u, 0x34A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A858u;
label_34a858:
    // 0x34a858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34a858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a85c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34a85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34a860: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34A860u;
    {
        const bool branch_taken_0x34a860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a860) {
            ctx->pc = 0x34A898u;
            goto label_34a898;
        }
    }
    ctx->pc = 0x34A868u;
    // 0x34a868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a86c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a870: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a874: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34a874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34a878: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a87c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a87cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a880: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a884: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a888: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a88c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a890: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a894: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34a898:
    // 0x34a898: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a89c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a8a0: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x34a8a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x34a8a4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x34A8A4u;
    {
        const bool branch_taken_0x34a8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a8a4) {
            ctx->pc = 0x34A8ECu;
            goto label_34a8ec;
        }
    }
    ctx->pc = 0x34A8ACu;
    // 0x34a8ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a8b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a8b8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x34a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x34a8bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a8c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a8cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a8d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34a8dc: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34a8e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a8e8: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34a8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
label_34a8ec:
    // 0x34a8ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a8f4: 0x846300c2  lh          $v1, 0xC2($v1)
    ctx->pc = 0x34a8f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x34a8f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x34a8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34a8fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34a8fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34a900: 0x2861005b  slti        $at, $v1, 0x5B
    ctx->pc = 0x34a900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x34a904: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x34A904u;
    {
        const bool branch_taken_0x34a904 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a904) {
            ctx->pc = 0x34A988u;
            goto label_34a988;
        }
    }
    ctx->pc = 0x34A90Cu;
    // 0x34a90c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a910: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a914: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34a914u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a918: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34a91c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a920: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34a920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a924: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a928: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34a928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a92c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a930: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34a930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a934: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a938: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34a938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34a93c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A93Cu;
    SET_GPR_U32(ctx, 31, 0x34A944u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A93Cu, 0x34A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A944u;
label_34a944:
    // 0x34a944: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34a944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a948: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x34a948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x34a94c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a950: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34A950u;
    {
        const bool branch_taken_0x34a950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a950) {
            ctx->pc = 0x34A988u;
            goto label_34a988;
        }
    }
    ctx->pc = 0x34A958u;
    // 0x34a958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a95c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a960: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a964: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x34a964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x34a968: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a96c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a96cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a974: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a978: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a97c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a980: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a984: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34a988:
    // 0x34a988: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x34a988u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a990: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34a994: 0x3e00008  jr          $ra
    ctx->pc = 0x34A994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A99Cu;
}
