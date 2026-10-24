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

// Function: Om94_R0_move
// Address: 0x361140 - 0x361188
void Om94_R0_move_0x361140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om94_R0_move_0x361140");
#endif

    switch (ctx->pc) {
        case 0x361140u: goto label_361140;
        case 0x361144u: goto label_361144;
        case 0x361148u: goto label_361148;
        case 0x36114cu: goto label_36114c;
        case 0x361150u: goto label_361150;
        case 0x361154u: goto label_361154;
        case 0x361158u: goto label_361158;
        case 0x36115cu: goto label_36115c;
        case 0x361160u: goto label_361160;
        case 0x361164u: goto label_361164;
        case 0x361168u: goto label_361168;
        case 0x36116cu: goto label_36116c;
        case 0x361170u: goto label_361170;
        case 0x361174u: goto label_361174;
        case 0x361178u: goto label_361178;
        case 0x36117cu: goto label_36117c;
        case 0x361180u: goto label_361180;
        case 0x361184u: goto label_361184;
        default: break;
    }

    ctx->pc = 0x361140u;

label_361140:
    // 0x361140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x361140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_361144:
    // 0x361144: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x361144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_361148:
    // 0x361148: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x361148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36114c:
    // 0x36114c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36114cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_361150:
    // 0x361150: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x361150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_361154:
    // 0x361154: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x361154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_361158:
    // 0x361158: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36115c:
    // 0x36115c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36115cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_361160:
    // 0x361160: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x361160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_361164:
    // 0x361164: 0x2442ac70  addiu       $v0, $v0, -0x5390
    ctx->pc = 0x361164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945904));
label_361168:
    // 0x361168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x361168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36116c:
    // 0x36116c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_361170:
    // 0x361170: 0x40f809  jalr        $v0
label_361174:
    if (ctx->pc == 0x361174u) {
        ctx->pc = 0x361178u;
        goto label_361178;
    }
    ctx->pc = 0x361170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x361178u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361170u, 0x361178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x361178u;
label_361178:
    // 0x361178: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x361178u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36117c:
    // 0x36117c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36117cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_361180:
    // 0x361180: 0x3e00008  jr          $ra
label_361184:
    if (ctx->pc == 0x361184u) {
        ctx->pc = 0x361188u;
        goto label_fallthrough_0x361180;
    }
    ctx->pc = 0x361180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x361180:
    ctx->pc = 0x361188u;
}
