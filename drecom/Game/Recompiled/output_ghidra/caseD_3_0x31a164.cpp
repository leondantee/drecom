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

// Function: caseD_3
// Address: 0x31a164 - 0x31a19c
void caseD_3_0x31a164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x31a164");
#endif

    switch (ctx->pc) {
        case 0x31a164u: goto label_31a164;
        case 0x31a168u: goto label_31a168;
        case 0x31a16cu: goto label_31a16c;
        case 0x31a170u: goto label_31a170;
        case 0x31a174u: goto label_31a174;
        case 0x31a178u: goto label_31a178;
        case 0x31a17cu: goto label_31a17c;
        case 0x31a180u: goto label_31a180;
        case 0x31a184u: goto label_31a184;
        case 0x31a188u: goto label_31a188;
        case 0x31a18cu: goto label_31a18c;
        case 0x31a190u: goto label_31a190;
        case 0x31a194u: goto label_31a194;
        case 0x31a198u: goto label_31a198;
        default: break;
    }

    ctx->pc = 0x31a164u;

label_31a164:
    // 0x31a164: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a168:
    // 0x31a168: 0x8c851290  lw          $a1, 0x1290($a0)
    ctx->pc = 0x31a168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
label_31a16c:
    // 0x31a16c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_31a170:
    // 0x31a170: 0xac851290  sw          $a1, 0x1290($a0)
    ctx->pc = 0x31a170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 5));
label_31a174:
    // 0x31a174: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x31a174u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_31a178:
    // 0x31a178: 0x102001b7  beqz        $at, . + 4 + (0x1B7 << 2)
label_31a17c:
    if (ctx->pc == 0x31A17Cu) {
        ctx->pc = 0x31A180u;
        goto label_31a180;
    }
    ctx->pc = 0x31A178u;
    {
        const bool branch_taken_0x31a178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a178) {
            ctx->pc = 0x31A858u;
            return;
        }
    }
    ctx->pc = 0x31A180u;
label_31a180:
    // 0x31a180: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x31a180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_31a184:
    // 0x31a184: 0x24641d70  addiu       $a0, $v1, 0x1D70
    ctx->pc = 0x31a184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7536));
label_31a188:
    // 0x31a188: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x31a188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_31a18c:
    // 0x31a18c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_31a190:
    // 0x31a190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31a194:
    // 0x31a194: 0x600008  jr          $v1
label_31a198:
    if (ctx->pc == 0x31A198u) {
        ctx->pc = 0x31A19Cu;
        goto label_fallthrough_0x31a194;
    }
    ctx->pc = 0x31A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A194u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x31a194:
    ctx->pc = 0x31A19Cu;
}
