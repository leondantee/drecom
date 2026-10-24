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

// Function: Strip_0d
// Address: 0x328120 - 0x328164
void Strip_0d_0x328120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_0d_0x328120");
#endif

    switch (ctx->pc) {
        case 0x328120u: goto label_328120;
        case 0x328124u: goto label_328124;
        case 0x328128u: goto label_328128;
        case 0x32812cu: goto label_32812c;
        case 0x328130u: goto label_328130;
        case 0x328134u: goto label_328134;
        case 0x328138u: goto label_328138;
        case 0x32813cu: goto label_32813c;
        case 0x328140u: goto label_328140;
        case 0x328144u: goto label_328144;
        case 0x328148u: goto label_328148;
        case 0x32814cu: goto label_32814c;
        case 0x328150u: goto label_328150;
        case 0x328154u: goto label_328154;
        case 0x328158u: goto label_328158;
        case 0x32815cu: goto label_32815c;
        case 0x328160u: goto label_328160;
        default: break;
    }

    ctx->pc = 0x328120u;

label_328120:
    // 0x328120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_328124:
    // 0x328124: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x328124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_328128:
    // 0x328128: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x328128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_32812c:
    // 0x32812c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32812cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_328130:
    // 0x328130: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x328130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_328134:
    // 0x328134: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x328134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_328138:
    // 0x328138: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x328138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32813c:
    // 0x32813c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_328140:
    // 0x328140: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x328140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
label_328144:
    // 0x328144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_328148:
    // 0x328148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x328148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32814c:
    // 0x32814c: 0x40f809  jalr        $v0
label_328150:
    if (ctx->pc == 0x328150u) {
        ctx->pc = 0x328154u;
        goto label_328154;
    }
    ctx->pc = 0x32814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328154u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32814Cu, 0x328154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328154u;
label_328154:
    // 0x328154: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x328154u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_328158:
    // 0x328158: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x328158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32815c:
    // 0x32815c: 0x3e00008  jr          $ra
label_328160:
    if (ctx->pc == 0x328160u) {
        ctx->pc = 0x328164u;
        goto label_fallthrough_0x32815c;
    }
    ctx->pc = 0x32815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32815c:
    ctx->pc = 0x328164u;
}
