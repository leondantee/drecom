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

// Function: Oma4_R0_damage
// Address: 0x379900 - 0x379948
void Oma4_R0_damage_0x379900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma4_R0_damage_0x379900");
#endif

    switch (ctx->pc) {
        case 0x379900u: goto label_379900;
        case 0x379904u: goto label_379904;
        case 0x379908u: goto label_379908;
        case 0x37990cu: goto label_37990c;
        case 0x379910u: goto label_379910;
        case 0x379914u: goto label_379914;
        case 0x379918u: goto label_379918;
        case 0x37991cu: goto label_37991c;
        case 0x379920u: goto label_379920;
        case 0x379924u: goto label_379924;
        case 0x379928u: goto label_379928;
        case 0x37992cu: goto label_37992c;
        case 0x379930u: goto label_379930;
        case 0x379934u: goto label_379934;
        case 0x379938u: goto label_379938;
        case 0x37993cu: goto label_37993c;
        case 0x379940u: goto label_379940;
        case 0x379944u: goto label_379944;
        default: break;
    }

    ctx->pc = 0x379900u;

label_379900:
    // 0x379900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_379904:
    // 0x379904: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x379904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_379908:
    // 0x379908: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x379908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37990c:
    // 0x37990c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37990cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_379910:
    // 0x379910: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x379910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_379914:
    // 0x379914: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x379914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_379918:
    // 0x379918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x379918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37991c:
    // 0x37991c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37991cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_379920:
    // 0x379920: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x379920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_379924:
    // 0x379924: 0x2442b7b8  addiu       $v0, $v0, -0x4848
    ctx->pc = 0x379924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948792));
label_379928:
    // 0x379928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x379928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37992c:
    // 0x37992c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_379930:
    // 0x379930: 0x40f809  jalr        $v0
label_379934:
    if (ctx->pc == 0x379934u) {
        ctx->pc = 0x379938u;
        goto label_379938;
    }
    ctx->pc = 0x379930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x379938u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379930u, 0x379938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379938u;
label_379938:
    // 0x379938: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x379938u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37993c:
    // 0x37993c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37993cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_379940:
    // 0x379940: 0x3e00008  jr          $ra
label_379944:
    if (ctx->pc == 0x379944u) {
        ctx->pc = 0x379948u;
        goto label_fallthrough_0x379940;
    }
    ctx->pc = 0x379940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x379940:
    ctx->pc = 0x379948u;
}
