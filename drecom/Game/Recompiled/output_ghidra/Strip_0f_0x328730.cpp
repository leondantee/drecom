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

// Function: Strip_0f
// Address: 0x328730 - 0x328774
void Strip_0f_0x328730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_0f_0x328730");
#endif

    switch (ctx->pc) {
        case 0x328730u: goto label_328730;
        case 0x328734u: goto label_328734;
        case 0x328738u: goto label_328738;
        case 0x32873cu: goto label_32873c;
        case 0x328740u: goto label_328740;
        case 0x328744u: goto label_328744;
        case 0x328748u: goto label_328748;
        case 0x32874cu: goto label_32874c;
        case 0x328750u: goto label_328750;
        case 0x328754u: goto label_328754;
        case 0x328758u: goto label_328758;
        case 0x32875cu: goto label_32875c;
        case 0x328760u: goto label_328760;
        case 0x328764u: goto label_328764;
        case 0x328768u: goto label_328768;
        case 0x32876cu: goto label_32876c;
        case 0x328770u: goto label_328770;
        default: break;
    }

    ctx->pc = 0x328730u;

label_328730:
    // 0x328730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_328734:
    // 0x328734: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x328734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_328738:
    // 0x328738: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x328738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_32873c:
    // 0x32873c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_328740:
    // 0x328740: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x328740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_328744:
    // 0x328744: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x328744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_328748:
    // 0x328748: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x328748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32874c:
    // 0x32874c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32874cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_328750:
    // 0x328750: 0x2442a210  addiu       $v0, $v0, -0x5DF0
    ctx->pc = 0x328750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943248));
label_328754:
    // 0x328754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_328758:
    // 0x328758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x328758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32875c:
    // 0x32875c: 0x40f809  jalr        $v0
label_328760:
    if (ctx->pc == 0x328760u) {
        ctx->pc = 0x328764u;
        goto label_328764;
    }
    ctx->pc = 0x32875Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328764u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32875Cu, 0x328764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328764u;
label_328764:
    // 0x328764: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x328764u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_328768:
    // 0x328768: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x328768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32876c:
    // 0x32876c: 0x3e00008  jr          $ra
label_328770:
    if (ctx->pc == 0x328770u) {
        ctx->pc = 0x328774u;
        goto label_fallthrough_0x32876c;
    }
    ctx->pc = 0x32876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32876Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32876c:
    ctx->pc = 0x328774u;
}
