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

// Function: Em0f_R1_walk
// Address: 0x30cac0 - 0x30ce54
void Em0f_R1_walk_0x30cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_walk_0x30cac0");
#endif

    switch (ctx->pc) {
        case 0x30cb70u: goto label_30cb70;
        case 0x30cb98u: goto label_30cb98;
        case 0x30cc00u: goto label_30cc00;
        case 0x30cc0cu: goto label_30cc0c;
        case 0x30cc44u: goto label_30cc44;
        case 0x30cc50u: goto label_30cc50;
        case 0x30cc7cu: goto label_30cc7c;
        case 0x30cc90u: goto label_30cc90;
        case 0x30ccb8u: goto label_30ccb8;
        case 0x30ccc4u: goto label_30ccc4;
        case 0x30ccd4u: goto label_30ccd4;
        case 0x30cce0u: goto label_30cce0;
        case 0x30cd0cu: goto label_30cd0c;
        case 0x30cd2cu: goto label_30cd2c;
        case 0x30cd4cu: goto label_30cd4c;
        case 0x30cdb0u: goto label_30cdb0;
        case 0x30cdc4u: goto label_30cdc4;
        case 0x30cddcu: goto label_30cddc;
        case 0x30cde8u: goto label_30cde8;
        case 0x30cdf8u: goto label_30cdf8;
        case 0x30ce04u: goto label_30ce04;
        default: break;
    }

    ctx->pc = 0x30cac0u;

    // 0x30cac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30cac4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x30cac8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x30cacc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30caccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30cad0: 0x24639940  addiu       $v1, $v1, -0x66C0
    ctx->pc = 0x30cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940992));
    // 0x30cad4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30cad8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30cad8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399940u));
    // 0x30cadc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30cadcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30cae0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cae4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30cae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30cae8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30cae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30caec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30caecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30caf0: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x30CAF0u;
    {
        const bool branch_taken_0x30caf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30caf0) {
            ctx->pc = 0x30CD74u;
            goto label_30cd74;
        }
    }
    ctx->pc = 0x30CAF8u;
    // 0x30caf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30cafc: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x30CAFCu;
    {
        const bool branch_taken_0x30cafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30cafc) {
            ctx->pc = 0x30CCECu;
            goto label_30ccec;
        }
    }
    ctx->pc = 0x30CB04u;
    // 0x30cb04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cb08: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x30CB08u;
    {
        const bool branch_taken_0x30cb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30cb08) {
            ctx->pc = 0x30CBB0u;
            goto label_30cbb0;
        }
    }
    ctx->pc = 0x30CB10u;
    // 0x30cb10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CB10u;
    {
        const bool branch_taken_0x30cb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cb10) {
            ctx->pc = 0x30CB20u;
            goto label_30cb20;
        }
    }
    ctx->pc = 0x30CB18u;
    // 0x30cb18: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x30CB18u;
    {
        const bool branch_taken_0x30cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cb18) {
            ctx->pc = 0x30CE44u;
            goto label_30ce44;
        }
    }
    ctx->pc = 0x30CB20u;
label_30cb20:
    // 0x30cb20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cb24: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x30cb24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x30cb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30cb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cb2c: 0x0  nop
    ctx->pc = 0x30cb2cu;
    // NOP
    // 0x30cb30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30cb30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30cb34: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x30cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x30cb38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30cb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cb3c: 0x0  nop
    ctx->pc = 0x30cb3cu;
    // NOP
    // 0x30cb40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30cb40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cb44: 0x0  nop
    ctx->pc = 0x30cb44u;
    // NOP
    // 0x30cb48: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x30CB48u;
    {
        const bool branch_taken_0x30cb48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cb48) {
            ctx->pc = 0x30CB78u;
            goto label_30cb78;
        }
    }
    ctx->pc = 0x30CB50u;
    // 0x30cb50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cb54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cb58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30cb5c: 0x24065a29  addiu       $a2, $zero, 0x5A29
    ctx->pc = 0x30cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23081));
    // 0x30cb60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30cb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cb64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30cb64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30cb68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30CB68u;
    SET_GPR_U32(ctx, 31, 0x30CB70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30CB68u, 0x30CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB70u;
label_30cb70:
    // 0x30cb70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30CB70u;
    {
        const bool branch_taken_0x30cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cb70) {
            ctx->pc = 0x30CB98u;
            goto label_30cb98;
        }
    }
    ctx->pc = 0x30CB78u;
label_30cb78:
    // 0x30cb78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cb7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cb80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30cb84: 0x24065a01  addiu       $a2, $zero, 0x5A01
    ctx->pc = 0x30cb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x30cb88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30cb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cb8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30cb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30cb90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30CB90u;
    SET_GPR_U32(ctx, 31, 0x30CB98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30CB90u, 0x30CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB98u;
label_30cb98:
    // 0x30cb98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cb9c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30cb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30cba0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cba4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30cba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30cba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cbac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30cbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30cbb0:
    // 0x30cbb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cbb4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30cbb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30cbb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30cbbc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x30cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x30cbc0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x30CBC0u;
    {
        const bool branch_taken_0x30cbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cbc0) {
            ctx->pc = 0x30CC50u;
            goto label_30cc50;
        }
    }
    ctx->pc = 0x30CBC8u;
    // 0x30cbc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cbcc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30cbd0: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30cbd4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30cbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30cbd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30cbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30cbdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30cbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30cbe0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30cbe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30cbe8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30cbe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30cbec: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30cbf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30cbf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cbf4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30cbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30cbf8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30CBF8u;
    SET_GPR_U32(ctx, 31, 0x30CC00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30CBF8u, 0x30CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC00u;
label_30cc00:
    // 0x30cc00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30cc00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30cc04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30CC04u;
    SET_GPR_U32(ctx, 31, 0x30CC0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30CC04u, 0x30CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC0Cu;
label_30cc0c:
    // 0x30cc0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30cc14: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30cc18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30cc1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30cc20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30cc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30cc24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30cc28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30cc2c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30cc2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30cc30: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30cc34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30cc34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cc38: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30cc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30cc3c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30CC3Cu;
    SET_GPR_U32(ctx, 31, 0x30CC44u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30CC3Cu, 0x30CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC44u;
label_30cc44:
    // 0x30cc44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30cc44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30cc48: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30CC48u;
    SET_GPR_U32(ctx, 31, 0x30CC50u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30CC48u, 0x30CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC50u;
label_30cc50:
    // 0x30cc50: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x30cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x30cc54: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30cc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30cc58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30cc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30cc5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc68: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30cc6c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cc70: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x30cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x30cc74: 0xc05c848  jal         func_172120
    ctx->pc = 0x30CC74u;
    SET_GPR_U32(ctx, 31, 0x30CC7Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30CC74u, 0x30CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC7Cu;
label_30cc7c:
    // 0x30cc7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc80: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30cc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cc84: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30cc84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30cc88: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30CC88u;
    SET_GPR_U32(ctx, 31, 0x30CC90u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30CC88u, 0x30CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC90u;
label_30cc90:
    // 0x30cc90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc94: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30cc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30cc98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc9c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30cc9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30cca0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cca4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30cca4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cca8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ccacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ccb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30CCB0u;
    SET_GPR_U32(ctx, 31, 0x30CCB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30CCB0u, 0x30CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCB8u;
label_30ccb8:
    // 0x30ccb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccbc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30CCBCu;
    SET_GPR_U32(ctx, 31, 0x30CCC4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30CCBCu, 0x30CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCC4u;
label_30ccc4:
    // 0x30ccc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ccc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cccc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30CCCCu;
    SET_GPR_U32(ctx, 31, 0x30CCD4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30CCCCu, 0x30CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCD4u;
label_30ccd4:
    // 0x30ccd4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccd8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30CCD8u;
    SET_GPR_U32(ctx, 31, 0x30CCE0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30CCD8u, 0x30CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCE0u;
label_30cce0:
    // 0x30cce0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cce4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x30CCE4u;
    {
        const bool branch_taken_0x30cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cce4) {
            ctx->pc = 0x30CE44u;
            goto label_30ce44;
        }
    }
    ctx->pc = 0x30CCECu;
label_30ccec:
    // 0x30ccec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccf4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30ccf8: 0x24065a01  addiu       $a2, $zero, 0x5A01
    ctx->pc = 0x30ccf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x30ccfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30ccfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cd00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30cd00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30cd04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30CD04u;
    SET_GPR_U32(ctx, 31, 0x30CD0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30CD04u, 0x30CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD0Cu;
label_30cd0c:
    // 0x30cd0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd10: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cd14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd18: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x30cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x30cd1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cd20: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x30cd20u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30cd24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30CD24u;
    SET_GPR_U32(ctx, 31, 0x30CD2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30CD24u, 0x30CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD2Cu;
label_30cd2c:
    // 0x30cd2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30cd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30cd34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd38: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x30cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x30cd3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd40: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cd44: 0xc0c3640  jal         func_30D900
    ctx->pc = 0x30CD44u;
    SET_GPR_U32(ctx, 31, 0x30CD4Cu);
    ctx->pc = 0x30D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D900u, 0x30CD44u, 0x30CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD4Cu;
label_30cd4c:
    // 0x30cd4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd50: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30cd50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30cd54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cd58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd5c: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x30cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x30cd60: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x30cd60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x30cd64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd68: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30cd68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30cd6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cd70: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30cd70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30cd74:
    // 0x30cd74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd78: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30cd78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30cd7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cd80: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30cd80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cd84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd88: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x30cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd90: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x30cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x30cd94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30cd98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30cd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30cd9c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30cda0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30cda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cda4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30cda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30cda8: 0xc05c848  jal         func_172120
    ctx->pc = 0x30CDA8u;
    SET_GPR_U32(ctx, 31, 0x30CDB0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30CDA8u, 0x30CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDB0u;
label_30cdb0:
    // 0x30cdb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdb4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cdb8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30cdb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30cdbc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30CDBCu;
    SET_GPR_U32(ctx, 31, 0x30CDC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30CDBCu, 0x30CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDC4u;
label_30cdc4:
    // 0x30cdc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdc8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30cdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30cdcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30cdd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cdd4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30CDD4u;
    SET_GPR_U32(ctx, 31, 0x30CDDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30CDD4u, 0x30CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDDCu;
label_30cddc:
    // 0x30cddc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cde0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30CDE0u;
    SET_GPR_U32(ctx, 31, 0x30CDE8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30CDE0u, 0x30CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDE8u;
label_30cde8:
    // 0x30cde8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30cdecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cdf0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30CDF0u;
    SET_GPR_U32(ctx, 31, 0x30CDF8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30CDF0u, 0x30CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDF8u;
label_30cdf8:
    // 0x30cdf8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdfc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30CDFCu;
    SET_GPR_U32(ctx, 31, 0x30CE04u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30CDFCu, 0x30CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE04u;
label_30ce04:
    // 0x30ce04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30ce08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30ce0c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30CE0Cu;
    {
        const bool branch_taken_0x30ce0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ce0c) {
            ctx->pc = 0x30CE44u;
            goto label_30ce44;
        }
    }
    ctx->pc = 0x30CE14u;
    // 0x30ce14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ce18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30ce1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ce20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ce24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30ce28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ce2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30ce30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ce34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30ce38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ce3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30ce44:
    // 0x30ce44: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30ce44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ce48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30ce48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30ce4c: 0x3e00008  jr          $ra
    ctx->pc = 0x30CE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CE54u;
}
