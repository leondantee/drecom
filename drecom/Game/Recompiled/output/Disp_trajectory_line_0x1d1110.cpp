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

// Function: Disp_trajectory_line
// Address: 0x1d1110 - 0x1d11e0
void Disp_trajectory_line_0x1d1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Disp_trajectory_line_0x1d1110");
#endif

    switch (ctx->pc) {
        case 0x1d1110u: goto label_1d1110;
        case 0x1d1114u: goto label_1d1114;
        case 0x1d1118u: goto label_1d1118;
        case 0x1d111cu: goto label_1d111c;
        case 0x1d1120u: goto label_1d1120;
        case 0x1d1124u: goto label_1d1124;
        case 0x1d1128u: goto label_1d1128;
        case 0x1d112cu: goto label_1d112c;
        case 0x1d1130u: goto label_1d1130;
        case 0x1d1134u: goto label_1d1134;
        case 0x1d1138u: goto label_1d1138;
        case 0x1d113cu: goto label_1d113c;
        case 0x1d1140u: goto label_1d1140;
        case 0x1d1144u: goto label_1d1144;
        case 0x1d1148u: goto label_1d1148;
        case 0x1d114cu: goto label_1d114c;
        case 0x1d1150u: goto label_1d1150;
        case 0x1d1154u: goto label_1d1154;
        case 0x1d1158u: goto label_1d1158;
        case 0x1d115cu: goto label_1d115c;
        case 0x1d1160u: goto label_1d1160;
        case 0x1d1164u: goto label_1d1164;
        case 0x1d1168u: goto label_1d1168;
        case 0x1d116cu: goto label_1d116c;
        case 0x1d1170u: goto label_1d1170;
        case 0x1d1174u: goto label_1d1174;
        case 0x1d1178u: goto label_1d1178;
        case 0x1d117cu: goto label_1d117c;
        case 0x1d1180u: goto label_1d1180;
        case 0x1d1184u: goto label_1d1184;
        case 0x1d1188u: goto label_1d1188;
        case 0x1d118cu: goto label_1d118c;
        case 0x1d1190u: goto label_1d1190;
        case 0x1d1194u: goto label_1d1194;
        case 0x1d1198u: goto label_1d1198;
        case 0x1d119cu: goto label_1d119c;
        case 0x1d11a0u: goto label_1d11a0;
        case 0x1d11a4u: goto label_1d11a4;
        case 0x1d11a8u: goto label_1d11a8;
        case 0x1d11acu: goto label_1d11ac;
        case 0x1d11b0u: goto label_1d11b0;
        case 0x1d11b4u: goto label_1d11b4;
        case 0x1d11b8u: goto label_1d11b8;
        case 0x1d11bcu: goto label_1d11bc;
        case 0x1d11c0u: goto label_1d11c0;
        case 0x1d11c4u: goto label_1d11c4;
        case 0x1d11c8u: goto label_1d11c8;
        case 0x1d11ccu: goto label_1d11cc;
        case 0x1d11d0u: goto label_1d11d0;
        case 0x1d11d4u: goto label_1d11d4;
        case 0x1d11d8u: goto label_1d11d8;
        case 0x1d11dcu: goto label_1d11dc;
        default: break;
    }

    ctx->pc = 0x1d1110u;

label_1d1110:
    // 0x1d1110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d1114:
    // 0x1d1114: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1d1114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1d1118:
    // 0x1d1118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d111c:
    // 0x1d111c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d1120:
    // 0x1d1120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d1124:
    // 0x1d1124: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d1124u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d1128:
    // 0x1d1128: 0x10000017  b           . + 4 + (0x17 << 2)
label_1d112c:
    if (ctx->pc == 0x1D112Cu) {
        ctx->pc = 0x1D1130u;
        goto label_1d1130;
    }
    ctx->pc = 0x1D1128u;
    {
        const bool branch_taken_0x1d1128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1128) {
            ctx->pc = 0x1D1188u;
            goto label_1d1188;
        }
    }
    ctx->pc = 0x1D1130u;
label_1d1130:
    // 0x1d1130: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d1130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d1134:
    // 0x1d1134: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d1134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d1138:
    // 0x1d1138: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1d1138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d113c:
    // 0x1d113c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d113cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1d1140:
    // 0x1d1140: 0x2463b990  addiu       $v1, $v1, -0x4670
    ctx->pc = 0x1d1140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949264));
label_1d1144:
    // 0x1d1144: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1d1144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d1148:
    // 0x1d1148: 0x92230060  lbu         $v1, 0x60($s1)
    ctx->pc = 0x1d1148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
label_1d114c:
    // 0x1d114c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1d1150:
    if (ctx->pc == 0x1D1150u) {
        ctx->pc = 0x1D1154u;
        goto label_1d1154;
    }
    ctx->pc = 0x1D114Cu;
    {
        const bool branch_taken_0x1d114c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d114c) {
            ctx->pc = 0x1D1180u;
            goto label_1d1180;
        }
    }
    ctx->pc = 0x1D1154u;
label_1d1154:
    // 0x1d1154: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1d1154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1d1158:
    // 0x1d1158: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1d1158u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1d115c:
    // 0x1d115c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1d115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_1d1160:
    // 0x1d1160: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d1164:
    // 0x1d1164: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d1164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d1168:
    // 0x1d1168: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d1168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d116c:
    // 0x1d116c: 0x244291e0  addiu       $v0, $v0, -0x6E20
    ctx->pc = 0x1d116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
label_1d1170:
    // 0x1d1170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d1170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d1174:
    // 0x1d1174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1178:
    // 0x1d1178: 0x40f809  jalr        $v0
label_1d117c:
    if (ctx->pc == 0x1D117Cu) {
        ctx->pc = 0x1D1180u;
        goto label_1d1180;
    }
    ctx->pc = 0x1D1178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1180u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1178u, 0x1D1180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1180u;
label_1d1180:
    // 0x1d1180: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d1184:
    // 0x1d1184: 0x0  nop
    ctx->pc = 0x1d1184u;
    // NOP
label_1d1188:
    // 0x1d1188: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1d1188u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d118c:
    // 0x1d118c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_1d1190:
    if (ctx->pc == 0x1D1190u) {
        ctx->pc = 0x1D1194u;
        goto label_1d1194;
    }
    ctx->pc = 0x1D118Cu;
    {
        const bool branch_taken_0x1d118c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d118c) {
            ctx->pc = 0x1D1130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1130;
        }
    }
    ctx->pc = 0x1D1194u;
label_1d1194:
    // 0x1d1194: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d1194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1d1198:
    // 0x1d1198: 0x2472b978  addiu       $s2, $v1, -0x4688
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949240));
label_1d119c:
    // 0x1d119c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d119cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1d11a0:
    // 0x1d11a0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1d11a4:
    // 0x1d11a4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1d11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1d11a8:
    // 0x1d11a8: 0x34631043  ori         $v1, $v1, 0x1043
    ctx->pc = 0x1d11a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
label_1d11ac:
    // 0x1d11ac: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1d11acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1d11b0:
    // 0x1d11b0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1d11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d11b4:
    // 0x1d11b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d11b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1d11b8:
    // 0x1d11b8: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1d11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1d11bc:
    // 0x1d11bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d11bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1d11c0:
    // 0x1d11c0: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x1d11c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
label_1d11c4:
    // 0x1d11c4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1d11c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d11c8:
    // 0x1d11c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d11c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d11cc:
    // 0x1d11cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d11ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d11d0:
    // 0x1d11d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d11d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d11d4:
    // 0x1d11d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d11d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d11d8:
    // 0x1d11d8: 0x3e00008  jr          $ra
label_1d11dc:
    if (ctx->pc == 0x1D11DCu) {
        ctx->pc = 0x1D11E0u;
        goto label_fallthrough_0x1d11d8;
    }
    ctx->pc = 0x1D11D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D11D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d11d8:
    ctx->pc = 0x1D11E0u;
}
