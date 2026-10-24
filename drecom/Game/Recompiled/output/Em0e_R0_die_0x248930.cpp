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

// Function: Em0e_R0_die
// Address: 0x248930 - 0x248978
void Em0e_R0_die_0x248930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R0_die_0x248930");
#endif

    switch (ctx->pc) {
        case 0x248930u: goto label_248930;
        case 0x248934u: goto label_248934;
        case 0x248938u: goto label_248938;
        case 0x24893cu: goto label_24893c;
        case 0x248940u: goto label_248940;
        case 0x248944u: goto label_248944;
        case 0x248948u: goto label_248948;
        case 0x24894cu: goto label_24894c;
        case 0x248950u: goto label_248950;
        case 0x248954u: goto label_248954;
        case 0x248958u: goto label_248958;
        case 0x24895cu: goto label_24895c;
        case 0x248960u: goto label_248960;
        case 0x248964u: goto label_248964;
        case 0x248968u: goto label_248968;
        case 0x24896cu: goto label_24896c;
        case 0x248970u: goto label_248970;
        case 0x248974u: goto label_248974;
        default: break;
    }

    ctx->pc = 0x248930u;

label_248930:
    // 0x248930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_248934:
    // 0x248934: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x248934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_248938:
    // 0x248938: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x248938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_24893c:
    // 0x24893c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_248940:
    // 0x248940: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x248940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_248944:
    // 0x248944: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x248944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_248948:
    // 0x248948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24894c:
    // 0x24894c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24894cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248950:
    // 0x248950: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x248950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_248954:
    // 0x248954: 0x2442b418  addiu       $v0, $v0, -0x4BE8
    ctx->pc = 0x248954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947864));
label_248958:
    // 0x248958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24895c:
    // 0x24895c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_248960:
    // 0x248960: 0x40f809  jalr        $v0
label_248964:
    if (ctx->pc == 0x248964u) {
        ctx->pc = 0x248968u;
        goto label_248968;
    }
    ctx->pc = 0x248960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248968u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248960u, 0x248968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248968u;
label_248968:
    // 0x248968: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x248968u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24896c:
    // 0x24896c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24896cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_248970:
    // 0x248970: 0x3e00008  jr          $ra
label_248974:
    if (ctx->pc == 0x248974u) {
        ctx->pc = 0x248978u;
        goto label_fallthrough_0x248970;
    }
    ctx->pc = 0x248970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248970:
    ctx->pc = 0x248978u;
}
