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

// Function: Em0f_R1_dm_sword2
// Address: 0x30fe30 - 0x310030
void Em0f_R1_dm_sword2_0x30fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_dm_sword2_0x30fe30");
#endif

    switch (ctx->pc) {
        case 0x30fe94u: goto label_30fe94;
        case 0x30fed8u: goto label_30fed8;
        case 0x30ff04u: goto label_30ff04;
        case 0x30ff10u: goto label_30ff10;
        case 0x30ff20u: goto label_30ff20;
        case 0x30ff2cu: goto label_30ff2c;
        case 0x30ff88u: goto label_30ff88;
        case 0x30ffb4u: goto label_30ffb4;
        case 0x30ffc0u: goto label_30ffc0;
        case 0x30ffd0u: goto label_30ffd0;
        case 0x30ffdcu: goto label_30ffdc;
        default: break;
    }

    ctx->pc = 0x30fe30u;

    // 0x30fe30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30fe34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30fe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30fe38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30fe3c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x30fe40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fe44: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30fe44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30fe48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30fe48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30fe4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30fe50: 0x10830054  beq         $a0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x30FE50u;
    {
        const bool branch_taken_0x30fe50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fe50) {
            ctx->pc = 0x30FFA4u;
            goto label_30ffa4;
        }
    }
    ctx->pc = 0x30FE58u;
    // 0x30fe58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30fe5c: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x30FE5Cu;
    {
        const bool branch_taken_0x30fe5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fe5c) {
            ctx->pc = 0x30FF54u;
            goto label_30ff54;
        }
    }
    ctx->pc = 0x30FE64u;
    // 0x30fe64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fe68: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x30FE68u;
    {
        const bool branch_taken_0x30fe68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fe68) {
            ctx->pc = 0x30FEF4u;
            goto label_30fef4;
        }
    }
    ctx->pc = 0x30FE70u;
    // 0x30fe70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FE70u;
    {
        const bool branch_taken_0x30fe70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fe70) {
            ctx->pc = 0x30FE80u;
            goto label_30fe80;
        }
    }
    ctx->pc = 0x30FE78u;
    // 0x30fe78: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x30FE78u;
    {
        const bool branch_taken_0x30fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fe78) {
            ctx->pc = 0x31001Cu;
            goto label_31001c;
        }
    }
    ctx->pc = 0x30FE80u;
label_30fe80:
    // 0x30fe80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30fe84: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x30fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30fe88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fe8c: 0xc05cd90  jal         func_173640
    ctx->pc = 0x30FE8Cu;
    SET_GPR_U32(ctx, 31, 0x30FE94u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x30FE8Cu, 0x30FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FE94u;
label_30fe94:
    // 0x30fe94: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30fe94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30fe98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30fe98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30fe9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fea0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30fea0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30fea4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fea8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30fea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30feac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30feacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30feb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30feb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30feb4: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x30feb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x30feb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30febc: 0x36060600  ori         $a2, $s0, 0x600
    ctx->pc = 0x30febcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1536);
    // 0x30fec0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fec4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30fec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30fec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30feccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30fed0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30FED0u;
    SET_GPR_U32(ctx, 31, 0x30FED8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30FED0u, 0x30FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FED8u;
label_30fed8:
    // 0x30fed8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x30fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30fedc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fee0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x30fee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fee8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30fee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30feec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fef0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30fef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30fef4:
    // 0x30fef4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fef8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30fef8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fefc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30FEFCu;
    SET_GPR_U32(ctx, 31, 0x30FF04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30FEFCu, 0x30FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF04u;
label_30ff04:
    // 0x30ff04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff08: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30FF08u;
    SET_GPR_U32(ctx, 31, 0x30FF10u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30FF08u, 0x30FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF10u;
label_30ff10:
    // 0x30ff10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ff14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ff18: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30FF18u;
    SET_GPR_U32(ctx, 31, 0x30FF20u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30FF18u, 0x30FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF20u;
label_30ff20:
    // 0x30ff20: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff24: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30FF24u;
    SET_GPR_U32(ctx, 31, 0x30FF2Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30FF24u, 0x30FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF2Cu;
label_30ff2c:
    // 0x30ff2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff30: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30ff30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30ff34: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x30FF34u;
    {
        const bool branch_taken_0x30ff34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff34) {
            ctx->pc = 0x31001Cu;
            goto label_31001c;
        }
    }
    ctx->pc = 0x30FF3Cu;
    // 0x30ff3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff40: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30ff40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30ff44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30ff48: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x30ff48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x30ff4c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x30FF4Cu;
    {
        const bool branch_taken_0x30ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff4c) {
            ctx->pc = 0x31001Cu;
            goto label_31001c;
        }
    }
    ctx->pc = 0x30FF54u;
label_30ff54:
    // 0x30ff54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff58: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30ff58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30ff5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30ff5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30ff60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30ff60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30ff64: 0x24500024  addiu       $s0, $v0, 0x24
    ctx->pc = 0x30ff64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x30ff68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff6c: 0x36060600  ori         $a2, $s0, 0x600
    ctx->pc = 0x30ff6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1536);
    // 0x30ff70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff74: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30ff78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30ff78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ff7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30ff7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30ff80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30FF80u;
    SET_GPR_U32(ctx, 31, 0x30FF88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30FF80u, 0x30FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF88u;
label_30ff88:
    // 0x30ff88: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30ff8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff90: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x30ff90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x30ff94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff98: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30ff98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30ff9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30ffa0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30ffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30ffa4:
    // 0x30ffa4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ffa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ffac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30FFACu;
    SET_GPR_U32(ctx, 31, 0x30FFB4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30FFACu, 0x30FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFB4u;
label_30ffb4:
    // 0x30ffb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffb8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30FFB8u;
    SET_GPR_U32(ctx, 31, 0x30FFC0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30FFB8u, 0x30FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFC0u;
label_30ffc0:
    // 0x30ffc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ffc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ffc8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30FFC8u;
    SET_GPR_U32(ctx, 31, 0x30FFD0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30FFC8u, 0x30FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFD0u;
label_30ffd0:
    // 0x30ffd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffd4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30FFD4u;
    SET_GPR_U32(ctx, 31, 0x30FFDCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30FFD4u, 0x30FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFDCu;
label_30ffdc:
    // 0x30ffdc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffe0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30ffe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30ffe4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30FFE4u;
    {
        const bool branch_taken_0x30ffe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ffe4) {
            ctx->pc = 0x31001Cu;
            goto label_31001c;
        }
    }
    ctx->pc = 0x30FFECu;
    // 0x30ffec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fff0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fff4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30fff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30fff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fffc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x310000: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x310000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x310004: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x310004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x310008: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31000c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x310010: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310014: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x310014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x310018: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_31001c:
    // 0x31001c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31001cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310024: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x310024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310028: 0x3e00008  jr          $ra
    ctx->pc = 0x310028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310030u;
}
