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

// Function: entry_002d1008
// Address: 0x2d1008 - 0x2d1150
void entry_002d1008_0x2d1008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1008_0x2d1008");
#endif

    switch (ctx->pc) {
        case 0x2d1044u: goto label_2d1044;
        case 0x2d1054u: goto label_2d1054;
        case 0x2d1110u: goto label_2d1110;
        case 0x2d112cu: goto label_2d112c;
        default: break;
    }

    ctx->pc = 0x2d1008u;

    // 0x2d1008: 0x2e020012  sltiu       $v0, $s0, 0x12
    ctx->pc = 0x2d1008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x2d100c: 0x1440fef9  bnez        $v0, . + 4 + (-0x107 << 2)
    ctx->pc = 0x2D100Cu;
    {
        const bool branch_taken_0x2d100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d100c) {
            ctx->pc = 0x2D0BF4u;
            return;
        }
    }
    ctx->pc = 0x2D1014u;
    // 0x2d1014: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2d1014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1018: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x2d1018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2d101c: 0x245114d0  addiu       $s1, $v0, 0x14D0
    ctx->pc = 0x2d101cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2d1020: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2d1020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1024: 0x3462000a  ori         $v0, $v1, 0xA
    ctx->pc = 0x2d1024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x2d1028: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2d1028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d102c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1030: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2d1030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d1034: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d1034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1038: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d103c: 0xc096360  jal         func_258D80
    ctx->pc = 0x2D103Cu;
    SET_GPR_U32(ctx, 31, 0x2D1044u);
    ctx->pc = 0x258D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D80u, 0x2D103Cu, 0x2D1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1044u;
label_2d1044:
    // 0x2d1044: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d1044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d1048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d104c: 0xc096360  jal         func_258D80
    ctx->pc = 0x2D104Cu;
    SET_GPR_U32(ctx, 31, 0x2D1054u);
    ctx->pc = 0x258D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D80u, 0x2D104Cu, 0x2D1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1054u;
label_2d1054:
    // 0x2d1054: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d1054u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d1058: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2d1058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d105c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1060: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d1060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d1064: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1068: 0xa44301c0  sh          $v1, 0x1C0($v0)
    ctx->pc = 0x2d1068u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 448), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d106c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1070: 0x2462134c  addiu       $v0, $v1, 0x134C
    ctx->pc = 0x2d1070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d1074: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1078: 0xa44001c2  sh          $zero, 0x1C2($v0)
    ctx->pc = 0x2d1078u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 450), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d107c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1080: 0x2443134c  addiu       $v1, $v0, 0x134C
    ctx->pc = 0x2d1080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d1084: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d1084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1088: 0xac4001c8  sw          $zero, 0x1C8($v0)
    ctx->pc = 0x2d1088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 0));
    // 0x2d108c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1090: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d1090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d1094: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d1094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1098: 0x8ca401c8  lw          $a0, 0x1C8($a1)
    ctx->pc = 0x2d1098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 456)));
    // 0x2d109c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d10a0: 0x2462134c  addiu       $v0, $v1, 0x134C
    ctx->pc = 0x2d10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d10a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d10a8: 0xac4401cc  sw          $a0, 0x1CC($v0)
    ctx->pc = 0x2d10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 460), GPR_U32(ctx, 4));
    // 0x2d10ac: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2d10acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d10b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d10b4: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d10b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d10bc: 0xac4301c4  sw          $v1, 0x1C4($v0)
    ctx->pc = 0x2d10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 452), GPR_U32(ctx, 3));
    // 0x2d10c0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2d10c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x2d10c4: 0x84248208  lh          $a0, -0x7DF8($at)
    ctx->pc = 0x2d10c4u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x398208u));
    // 0x2d10c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d10cc: 0xa44410a6  sh          $a0, 0x10A6($v0)
    ctx->pc = 0x2d10ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d10d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d10d4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2d10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2d10d8: 0x245114d0  addiu       $s1, $v0, 0x14D0
    ctx->pc = 0x2d10d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2d10dc: 0x8e340034  lw          $s4, 0x34($s1)
    ctx->pc = 0x2d10dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2d10e0: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x2d10e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2d10e4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d10e8: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x2d10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2d10ec: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x2d10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2d10f0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2d10f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d10f4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2d10f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x2d10f8: 0xa42282e4  sh          $v0, -0x7D1C($at)
    ctx->pc = 0x2d10f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3982E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3982E4u, _value); } while (0);
    // 0x2d10fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1100: 0x24440234  addiu       $a0, $v0, 0x234
    ctx->pc = 0x2d1100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
    // 0x2d1104: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d1104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d1108: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2D1108u;
    SET_GPR_U32(ctx, 31, 0x2D1110u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2D1108u, 0x2D1110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1110u;
label_2d1110:
    // 0x2d1110: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1114: 0x24440244  addiu       $a0, $v0, 0x244
    ctx->pc = 0x2d1114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 580));
    // 0x2d1118: 0x24020410  addiu       $v0, $zero, 0x410
    ctx->pc = 0x2d1118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2d111c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2d111cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d1120: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2d1120u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d1124: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2D1124u;
    SET_GPR_U32(ctx, 31, 0x2D112Cu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2D1124u, 0x2D112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D112Cu;
label_2d112c:
    // 0x2d112c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2d112cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1130: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d1130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d1138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d113c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d113cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1144: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2d1144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d1148: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1150u;
}
