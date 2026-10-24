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

// Function: Em00_R0_move
// Address: 0x2d1150 - 0x2d1204
void Em00_R0_move_0x2d1150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R0_move_0x2d1150");
#endif

    switch (ctx->pc) {
        case 0x2d1150u: goto label_2d1150;
        case 0x2d1154u: goto label_2d1154;
        case 0x2d1158u: goto label_2d1158;
        case 0x2d115cu: goto label_2d115c;
        case 0x2d1160u: goto label_2d1160;
        case 0x2d1164u: goto label_2d1164;
        case 0x2d1168u: goto label_2d1168;
        case 0x2d116cu: goto label_2d116c;
        case 0x2d1170u: goto label_2d1170;
        case 0x2d1174u: goto label_2d1174;
        case 0x2d1178u: goto label_2d1178;
        case 0x2d117cu: goto label_2d117c;
        case 0x2d1180u: goto label_2d1180;
        case 0x2d1184u: goto label_2d1184;
        case 0x2d1188u: goto label_2d1188;
        case 0x2d118cu: goto label_2d118c;
        case 0x2d1190u: goto label_2d1190;
        case 0x2d1194u: goto label_2d1194;
        case 0x2d1198u: goto label_2d1198;
        case 0x2d119cu: goto label_2d119c;
        case 0x2d11a0u: goto label_2d11a0;
        case 0x2d11a4u: goto label_2d11a4;
        case 0x2d11a8u: goto label_2d11a8;
        case 0x2d11acu: goto label_2d11ac;
        case 0x2d11b0u: goto label_2d11b0;
        case 0x2d11b4u: goto label_2d11b4;
        case 0x2d11b8u: goto label_2d11b8;
        case 0x2d11bcu: goto label_2d11bc;
        case 0x2d11c0u: goto label_2d11c0;
        case 0x2d11c4u: goto label_2d11c4;
        case 0x2d11c8u: goto label_2d11c8;
        case 0x2d11ccu: goto label_2d11cc;
        case 0x2d11d0u: goto label_2d11d0;
        case 0x2d11d4u: goto label_2d11d4;
        case 0x2d11d8u: goto label_2d11d8;
        case 0x2d11dcu: goto label_2d11dc;
        case 0x2d11e0u: goto label_2d11e0;
        case 0x2d11e4u: goto label_2d11e4;
        case 0x2d11e8u: goto label_2d11e8;
        case 0x2d11ecu: goto label_2d11ec;
        case 0x2d11f0u: goto label_2d11f0;
        case 0x2d11f4u: goto label_2d11f4;
        case 0x2d11f8u: goto label_2d11f8;
        case 0x2d11fcu: goto label_2d11fc;
        case 0x2d1200u: goto label_2d1200;
        default: break;
    }

    ctx->pc = 0x2d1150u;

label_2d1150:
    // 0x2d1150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d1154:
    // 0x2d1154: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d1154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2d1158:
    // 0x2d1158: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d1158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2d115c:
    // 0x2d115c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d1160:
    // 0x2d1160: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d1164:
    // 0x2d1164: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2d1164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2d1168:
    // 0x2d1168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d1168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d116c:
    // 0x2d116c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d116cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d1170:
    // 0x2d1170: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d1170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d1174:
    // 0x2d1174: 0x244285d0  addiu       $v0, $v0, -0x7A30
    ctx->pc = 0x2d1174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936016));
label_2d1178:
    // 0x2d1178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d1178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d117c:
    // 0x2d117c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d1180:
    // 0x2d1180: 0x40f809  jalr        $v0
label_2d1184:
    if (ctx->pc == 0x2D1184u) {
        ctx->pc = 0x2D1188u;
        goto label_2d1188;
    }
    ctx->pc = 0x2D1180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D1188u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1180u, 0x2D1188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1188u;
label_2d1188:
    // 0x2d1188: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d118c:
    // 0x2d118c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d1190:
    // 0x2d1190: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2d1190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2d1194:
    // 0x2d1194: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d1194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d1198:
    // 0x2d1198: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d1198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d119c:
    // 0x2d119c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d11a0:
    // 0x2d11a0: 0x24428640  addiu       $v0, $v0, -0x79C0
    ctx->pc = 0x2d11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936128));
label_2d11a4:
    // 0x2d11a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d11a8:
    // 0x2d11a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d11ac:
    // 0x2d11ac: 0x40f809  jalr        $v0
label_2d11b0:
    if (ctx->pc == 0x2D11B0u) {
        ctx->pc = 0x2D11B4u;
        goto label_2d11b4;
    }
    ctx->pc = 0x2D11ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D11B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D11ACu, 0x2D11B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D11B4u;
label_2d11b4:
    // 0x2d11b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d11b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d11b8:
    // 0x2d11b8: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x2d11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_2d11bc:
    // 0x2d11bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2d11c0:
    if (ctx->pc == 0x2D11C0u) {
        ctx->pc = 0x2D11C4u;
        goto label_2d11c4;
    }
    ctx->pc = 0x2D11BCu;
    {
        const bool branch_taken_0x2d11bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d11bc) {
            ctx->pc = 0x2D11D4u;
            goto label_2d11d4;
        }
    }
    ctx->pc = 0x2D11C4u;
label_2d11c4:
    // 0x2d11c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d11c8:
    // 0x2d11c8: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x2d11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
label_2d11cc:
    // 0x2d11cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2d11d0:
    // 0x2d11d0: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x2d11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
label_2d11d4:
    // 0x2d11d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d11d8:
    // 0x2d11d8: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x2d11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
label_2d11dc:
    // 0x2d11dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2d11e0:
    if (ctx->pc == 0x2D11E0u) {
        ctx->pc = 0x2D11E4u;
        goto label_2d11e4;
    }
    ctx->pc = 0x2D11DCu;
    {
        const bool branch_taken_0x2d11dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d11dc) {
            ctx->pc = 0x2D11F4u;
            goto label_2d11f4;
        }
    }
    ctx->pc = 0x2D11E4u;
label_2d11e4:
    // 0x2d11e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d11e8:
    // 0x2d11e8: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x2d11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
label_2d11ec:
    // 0x2d11ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2d11f0:
    // 0x2d11f0: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x2d11f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
label_2d11f4:
    // 0x2d11f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d11f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d11f8:
    // 0x2d11f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d11f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d11fc:
    // 0x2d11fc: 0x3e00008  jr          $ra
label_2d1200:
    if (ctx->pc == 0x2D1200u) {
        ctx->pc = 0x2D1204u;
        goto label_fallthrough_0x2d11fc;
    }
    ctx->pc = 0x2D11FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D11FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d11fc:
    ctx->pc = 0x2D1204u;
}
