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

// Function: Em01_R1_dm_shotgun
// Address: 0x306970 - 0x306b78
void Em01_R1_dm_shotgun_0x306970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_dm_shotgun_0x306970");
#endif

    switch (ctx->pc) {
        case 0x3069d4u: goto label_3069d4;
        case 0x306a18u: goto label_306a18;
        case 0x306a38u: goto label_306a38;
        case 0x306a44u: goto label_306a44;
        case 0x306a54u: goto label_306a54;
        case 0x306a60u: goto label_306a60;
        case 0x306accu: goto label_306acc;
        case 0x306aecu: goto label_306aec;
        case 0x306af8u: goto label_306af8;
        case 0x306b08u: goto label_306b08;
        case 0x306b14u: goto label_306b14;
        default: break;
    }

    ctx->pc = 0x306970u;

    // 0x306970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306974: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x306974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x306978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x306978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30697c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30697cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x306980: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306984: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x306984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306988: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x306988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30698c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306990: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x306990u;
    {
        const bool branch_taken_0x306990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x306990) {
            ctx->pc = 0x306ADCu;
            goto label_306adc;
        }
    }
    ctx->pc = 0x306998u;
    // 0x306998: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x306998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30699c: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x30699Cu;
    {
        const bool branch_taken_0x30699c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30699c) {
            ctx->pc = 0x306A98u;
            goto label_306a98;
        }
    }
    ctx->pc = 0x3069A4u;
    // 0x3069a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3069a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3069a8: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3069A8u;
    {
        const bool branch_taken_0x3069a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3069a8) {
            ctx->pc = 0x306A28u;
            goto label_306a28;
        }
    }
    ctx->pc = 0x3069B0u;
    // 0x3069b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3069B0u;
    {
        const bool branch_taken_0x3069b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3069b0) {
            ctx->pc = 0x3069C0u;
            goto label_3069c0;
        }
    }
    ctx->pc = 0x3069B8u;
    // 0x3069b8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3069B8u;
    {
        const bool branch_taken_0x3069b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3069b8) {
            ctx->pc = 0x306B64u;
            goto label_306b64;
        }
    }
    ctx->pc = 0x3069C0u;
label_3069c0:
    // 0x3069c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3069c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3069c4: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x3069c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3069c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3069c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3069cc: 0xc05cd90  jal         func_173640
    ctx->pc = 0x3069CCu;
    SET_GPR_U32(ctx, 31, 0x3069D4u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x3069CCu, 0x3069D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069D4u;
label_3069d4:
    // 0x3069d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3069d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3069d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3069d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3069dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3069dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3069e0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3069e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3069e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3069e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3069e8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x3069e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x3069ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3069ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3069f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3069f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3069f4: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x3069f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3069f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3069f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3069fc: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x3069fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
    // 0x306a00: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306a08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306a0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306a10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306A10u;
    SET_GPR_U32(ctx, 31, 0x306A18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306A10u, 0x306A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A18u;
label_306a18:
    // 0x306a18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a1c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306a20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306a24: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_306a28:
    // 0x306a28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306a2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306a30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306A30u;
    SET_GPR_U32(ctx, 31, 0x306A38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306A30u, 0x306A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A38u;
label_306a38:
    // 0x306a38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306A3Cu;
    SET_GPR_U32(ctx, 31, 0x306A44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306A3Cu, 0x306A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A44u;
label_306a44:
    // 0x306a44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x306a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306a4c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306A4Cu;
    SET_GPR_U32(ctx, 31, 0x306A54u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306A4Cu, 0x306A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A54u;
label_306a54:
    // 0x306a54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a58: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306A58u;
    SET_GPR_U32(ctx, 31, 0x306A60u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306A58u, 0x306A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A60u;
label_306a60:
    // 0x306a60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a64: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x306a64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x306a68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306a6c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x306a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x306a70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a74: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306a78: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x306A78u;
    {
        const bool branch_taken_0x306a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a78) {
            ctx->pc = 0x306B64u;
            goto label_306b64;
        }
    }
    ctx->pc = 0x306A80u;
    // 0x306a80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a84: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x306a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x306a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306a8c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x306a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x306a90: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x306A90u;
    {
        const bool branch_taken_0x306a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a90) {
            ctx->pc = 0x306B64u;
            goto label_306b64;
        }
    }
    ctx->pc = 0x306A98u;
label_306a98:
    // 0x306a98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a9c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x306a9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x306aa0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x306aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306aa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306aa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x306aa8: 0x24500024  addiu       $s0, $v0, 0x24
    ctx->pc = 0x306aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x306aac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306ab0: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x306ab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
    // 0x306ab4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306ab8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306abc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306ac0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306ac4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306AC4u;
    SET_GPR_U32(ctx, 31, 0x306ACCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306AC4u, 0x306ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306ACCu;
label_306acc:
    // 0x306acc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306ad0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306ad8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_306adc:
    // 0x306adc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306ae0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306ae0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306ae4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306AE4u;
    SET_GPR_U32(ctx, 31, 0x306AECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306AE4u, 0x306AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AECu;
label_306aec:
    // 0x306aec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306af0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306AF0u;
    SET_GPR_U32(ctx, 31, 0x306AF8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306AF0u, 0x306AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AF8u;
label_306af8:
    // 0x306af8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306afc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x306afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306b00: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306B00u;
    SET_GPR_U32(ctx, 31, 0x306B08u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306B00u, 0x306B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B08u;
label_306b08:
    // 0x306b08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b0c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306B0Cu;
    SET_GPR_U32(ctx, 31, 0x306B14u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306B0Cu, 0x306B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B14u;
label_306b14:
    // 0x306b14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b18: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x306b18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x306b1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306b20: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x306b20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x306b24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306b2c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x306B2Cu;
    {
        const bool branch_taken_0x306b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306b2c) {
            ctx->pc = 0x306B64u;
            goto label_306b64;
        }
    }
    ctx->pc = 0x306B34u;
    // 0x306b34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306b38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306b40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306b44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306b48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306b4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x306b54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306b58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306b5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_306b64:
    // 0x306b64: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x306b64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x306b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306b6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x306b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x306b70: 0x3e00008  jr          $ra
    ctx->pc = 0x306B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306B78u;
}
