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

// Function: Om89_R0_damage
// Address: 0x362c00 - 0x362c5c
void Om89_R0_damage_0x362c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om89_R0_damage_0x362c00");
#endif

    switch (ctx->pc) {
        case 0x362c00u: goto label_362c00;
        case 0x362c04u: goto label_362c04;
        case 0x362c08u: goto label_362c08;
        case 0x362c0cu: goto label_362c0c;
        case 0x362c10u: goto label_362c10;
        case 0x362c14u: goto label_362c14;
        case 0x362c18u: goto label_362c18;
        case 0x362c1cu: goto label_362c1c;
        case 0x362c20u: goto label_362c20;
        case 0x362c24u: goto label_362c24;
        case 0x362c28u: goto label_362c28;
        case 0x362c2cu: goto label_362c2c;
        case 0x362c30u: goto label_362c30;
        case 0x362c34u: goto label_362c34;
        case 0x362c38u: goto label_362c38;
        case 0x362c3cu: goto label_362c3c;
        case 0x362c40u: goto label_362c40;
        case 0x362c44u: goto label_362c44;
        case 0x362c48u: goto label_362c48;
        case 0x362c4cu: goto label_362c4c;
        case 0x362c50u: goto label_362c50;
        case 0x362c54u: goto label_362c54;
        case 0x362c58u: goto label_362c58;
        default: break;
    }

    ctx->pc = 0x362c00u;

label_362c00:
    // 0x362c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_362c04:
    // 0x362c04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x362c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_362c08:
    // 0x362c08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x362c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_362c0c:
    // 0x362c0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x362c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_362c10:
    // 0x362c10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x362c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_362c14:
    // 0x362c14: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x362c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_362c18:
    // 0x362c18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x362c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_362c1c:
    // 0x362c1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x362c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_362c20:
    // 0x362c20: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x362c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_362c24:
    // 0x362c24: 0x2442ad38  addiu       $v0, $v0, -0x52C8
    ctx->pc = 0x362c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946104));
label_362c28:
    // 0x362c28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x362c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_362c2c:
    // 0x362c2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x362c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_362c30:
    // 0x362c30: 0x40f809  jalr        $v0
label_362c34:
    if (ctx->pc == 0x362C34u) {
        ctx->pc = 0x362C38u;
        goto label_362c38;
    }
    ctx->pc = 0x362C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362C38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362C30u, 0x362C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362C38u;
label_362c38:
    // 0x362c38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x362c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_362c3c:
    // 0x362c3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x362c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_362c40:
    // 0x362c40: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x362c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_362c44:
    // 0x362c44: 0xc079140  jal         func_1E4500
label_362c48:
    if (ctx->pc == 0x362C48u) {
        ctx->pc = 0x362C4Cu;
        goto label_362c4c;
    }
    ctx->pc = 0x362C44u;
    SET_GPR_U32(ctx, 31, 0x362C4Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x362C44u, 0x362C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C4Cu;
label_362c4c:
    // 0x362c4c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x362c4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_362c50:
    // 0x362c50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x362c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_362c54:
    // 0x362c54: 0x3e00008  jr          $ra
label_362c58:
    if (ctx->pc == 0x362C58u) {
        ctx->pc = 0x362C5Cu;
        goto label_fallthrough_0x362c54;
    }
    ctx->pc = 0x362C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362c54:
    ctx->pc = 0x362C5Cu;
}
