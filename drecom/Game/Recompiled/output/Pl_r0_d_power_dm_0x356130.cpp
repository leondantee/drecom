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

// Function: Pl_r0_d_power_dm
// Address: 0x356130 - 0x356190
void Pl_r0_d_power_dm_0x356130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_d_power_dm_0x356130");
#endif

    switch (ctx->pc) {
        case 0x356130u: goto label_356130;
        case 0x356134u: goto label_356134;
        case 0x356138u: goto label_356138;
        case 0x35613cu: goto label_35613c;
        case 0x356140u: goto label_356140;
        case 0x356144u: goto label_356144;
        case 0x356148u: goto label_356148;
        case 0x35614cu: goto label_35614c;
        case 0x356150u: goto label_356150;
        case 0x356154u: goto label_356154;
        case 0x356158u: goto label_356158;
        case 0x35615cu: goto label_35615c;
        case 0x356160u: goto label_356160;
        case 0x356164u: goto label_356164;
        case 0x356168u: goto label_356168;
        case 0x35616cu: goto label_35616c;
        case 0x356170u: goto label_356170;
        case 0x356174u: goto label_356174;
        case 0x356178u: goto label_356178;
        case 0x35617cu: goto label_35617c;
        case 0x356180u: goto label_356180;
        case 0x356184u: goto label_356184;
        case 0x356188u: goto label_356188;
        case 0x35618cu: goto label_35618c;
        default: break;
    }

    ctx->pc = 0x356130u;

label_356130:
    // 0x356130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_356134:
    // 0x356134: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x356134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_356138:
    // 0x356138: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x356138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35613c:
    // 0x35613c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35613cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_356140:
    // 0x356140: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x356140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_356144:
    // 0x356144: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x356144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_356148:
    // 0x356148: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x356148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35614c:
    // 0x35614c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35614cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_356150:
    // 0x356150: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x356150u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_356154:
    // 0x356154: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x356154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_356158:
    // 0x356158: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x356158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35615c:
    // 0x35615c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35615cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_356160:
    // 0x356160: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x356160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_356164:
    // 0x356164: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x356164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_356168:
    // 0x356168: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x356168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35616c:
    // 0x35616c: 0x2442a5e8  addiu       $v0, $v0, -0x5A18
    ctx->pc = 0x35616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944232));
label_356170:
    // 0x356170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_356174:
    // 0x356174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x356174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_356178:
    // 0x356178: 0x40f809  jalr        $v0
label_35617c:
    if (ctx->pc == 0x35617Cu) {
        ctx->pc = 0x356180u;
        goto label_356180;
    }
    ctx->pc = 0x356178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356180u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356178u, 0x356180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356180u;
label_356180:
    // 0x356180: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x356180u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_356184:
    // 0x356184: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x356184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_356188:
    // 0x356188: 0x3e00008  jr          $ra
label_35618c:
    if (ctx->pc == 0x35618Cu) {
        ctx->pc = 0x356190u;
        goto label_fallthrough_0x356188;
    }
    ctx->pc = 0x356188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x356188:
    ctx->pc = 0x356190u;
}
