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

// Function: Om83_R0_damage
// Address: 0x35ad30 - 0x35ad8c
void Om83_R0_damage_0x35ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om83_R0_damage_0x35ad30");
#endif

    switch (ctx->pc) {
        case 0x35ad30u: goto label_35ad30;
        case 0x35ad34u: goto label_35ad34;
        case 0x35ad38u: goto label_35ad38;
        case 0x35ad3cu: goto label_35ad3c;
        case 0x35ad40u: goto label_35ad40;
        case 0x35ad44u: goto label_35ad44;
        case 0x35ad48u: goto label_35ad48;
        case 0x35ad4cu: goto label_35ad4c;
        case 0x35ad50u: goto label_35ad50;
        case 0x35ad54u: goto label_35ad54;
        case 0x35ad58u: goto label_35ad58;
        case 0x35ad5cu: goto label_35ad5c;
        case 0x35ad60u: goto label_35ad60;
        case 0x35ad64u: goto label_35ad64;
        case 0x35ad68u: goto label_35ad68;
        case 0x35ad6cu: goto label_35ad6c;
        case 0x35ad70u: goto label_35ad70;
        case 0x35ad74u: goto label_35ad74;
        case 0x35ad78u: goto label_35ad78;
        case 0x35ad7cu: goto label_35ad7c;
        case 0x35ad80u: goto label_35ad80;
        case 0x35ad84u: goto label_35ad84;
        case 0x35ad88u: goto label_35ad88;
        default: break;
    }

    ctx->pc = 0x35ad30u;

label_35ad30:
    // 0x35ad30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35ad34:
    // 0x35ad34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35ad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35ad38:
    // 0x35ad38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35ad3c:
    // 0x35ad3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35ad40:
    // 0x35ad40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35ad44:
    // 0x35ad44: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35ad44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35ad48:
    // 0x35ad48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35ad4c:
    // 0x35ad4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35ad50:
    // 0x35ad50: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35ad54:
    // 0x35ad54: 0x2442a958  addiu       $v0, $v0, -0x56A8
    ctx->pc = 0x35ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945112));
label_35ad58:
    // 0x35ad58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35ad5c:
    // 0x35ad5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35ad60:
    // 0x35ad60: 0x40f809  jalr        $v0
label_35ad64:
    if (ctx->pc == 0x35AD64u) {
        ctx->pc = 0x35AD68u;
        goto label_35ad68;
    }
    ctx->pc = 0x35AD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35AD68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AD60u, 0x35AD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35AD68u;
label_35ad68:
    // 0x35ad68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35ad6c:
    // 0x35ad6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35ad70:
    // 0x35ad70: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x35ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_35ad74:
    // 0x35ad74: 0xc079140  jal         func_1E4500
label_35ad78:
    if (ctx->pc == 0x35AD78u) {
        ctx->pc = 0x35AD7Cu;
        goto label_35ad7c;
    }
    ctx->pc = 0x35AD74u;
    SET_GPR_U32(ctx, 31, 0x35AD7Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x35AD74u, 0x35AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD7Cu;
label_35ad7c:
    // 0x35ad7c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35ad7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35ad80:
    // 0x35ad80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35ad84:
    // 0x35ad84: 0x3e00008  jr          $ra
label_35ad88:
    if (ctx->pc == 0x35AD88u) {
        ctx->pc = 0x35AD8Cu;
        goto label_fallthrough_0x35ad84;
    }
    ctx->pc = 0x35AD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35ad84:
    ctx->pc = 0x35AD8Cu;
}
