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

// Function: Em_cut
// Address: 0x174150 - 0x174198
void Em_cut_0x174150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_cut_0x174150");
#endif

    switch (ctx->pc) {
        case 0x174150u: goto label_174150;
        case 0x174154u: goto label_174154;
        case 0x174158u: goto label_174158;
        case 0x17415cu: goto label_17415c;
        case 0x174160u: goto label_174160;
        case 0x174164u: goto label_174164;
        case 0x174168u: goto label_174168;
        case 0x17416cu: goto label_17416c;
        case 0x174170u: goto label_174170;
        case 0x174174u: goto label_174174;
        case 0x174178u: goto label_174178;
        case 0x17417cu: goto label_17417c;
        case 0x174180u: goto label_174180;
        case 0x174184u: goto label_174184;
        case 0x174188u: goto label_174188;
        case 0x17418cu: goto label_17418c;
        case 0x174190u: goto label_174190;
        case 0x174194u: goto label_174194;
        default: break;
    }

    ctx->pc = 0x174150u;

label_174150:
    // 0x174150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_174154:
    // 0x174154: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x174154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_174158:
    // 0x174158: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x174158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_17415c:
    // 0x17415c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x17415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_174160:
    // 0x174160: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x174160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_174164:
    // 0x174164: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x174164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_174168:
    // 0x174168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x174168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17416c:
    // 0x17416c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17416cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_174170:
    // 0x174170: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x174170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_174174:
    // 0x174174: 0x244257f0  addiu       $v0, $v0, 0x57F0
    ctx->pc = 0x174174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22512));
label_174178:
    // 0x174178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17417c:
    // 0x17417c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174180:
    // 0x174180: 0x40f809  jalr        $v0
label_174184:
    if (ctx->pc == 0x174184u) {
        ctx->pc = 0x174188u;
        goto label_174188;
    }
    ctx->pc = 0x174180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174188u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174180u, 0x174188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x174188u;
label_174188:
    // 0x174188: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x174188u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17418c:
    // 0x17418c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17418cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_174190:
    // 0x174190: 0x3e00008  jr          $ra
label_174194:
    if (ctx->pc == 0x174194u) {
        ctx->pc = 0x174198u;
        goto label_fallthrough_0x174190;
    }
    ctx->pc = 0x174190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x174190:
    ctx->pc = 0x174198u;
}
