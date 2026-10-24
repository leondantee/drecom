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

// Function: Om15_move
// Address: 0x31b960 - 0x31b9b8
void Om15_move_0x31b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om15_move_0x31b960");
#endif

    switch (ctx->pc) {
        case 0x31b960u: goto label_31b960;
        case 0x31b964u: goto label_31b964;
        case 0x31b968u: goto label_31b968;
        case 0x31b96cu: goto label_31b96c;
        case 0x31b970u: goto label_31b970;
        case 0x31b974u: goto label_31b974;
        case 0x31b978u: goto label_31b978;
        case 0x31b97cu: goto label_31b97c;
        case 0x31b980u: goto label_31b980;
        case 0x31b984u: goto label_31b984;
        case 0x31b988u: goto label_31b988;
        case 0x31b98cu: goto label_31b98c;
        case 0x31b990u: goto label_31b990;
        case 0x31b994u: goto label_31b994;
        case 0x31b998u: goto label_31b998;
        case 0x31b99cu: goto label_31b99c;
        case 0x31b9a0u: goto label_31b9a0;
        case 0x31b9a4u: goto label_31b9a4;
        case 0x31b9a8u: goto label_31b9a8;
        case 0x31b9acu: goto label_31b9ac;
        case 0x31b9b0u: goto label_31b9b0;
        case 0x31b9b4u: goto label_31b9b4;
        default: break;
    }

    ctx->pc = 0x31b960u;

label_31b960:
    // 0x31b960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31b964:
    // 0x31b964: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31b964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_31b968:
    // 0x31b968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31b96c:
    // 0x31b96c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x31b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_31b970:
    // 0x31b970: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31b970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_31b974:
    // 0x31b974: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x31b974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_31b978:
    // 0x31b978: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31b978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_31b97c:
    // 0x31b97c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_31b980:
    // 0x31b980: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31b980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_31b984:
    // 0x31b984: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31b988:
    // 0x31b988: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31b988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31b98c:
    // 0x31b98c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_31b990:
    // 0x31b990: 0x24429cb0  addiu       $v0, $v0, -0x6350
    ctx->pc = 0x31b990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941872));
label_31b994:
    // 0x31b994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31b998:
    // 0x31b998: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31b99c:
    // 0x31b99c: 0x40f809  jalr        $v0
label_31b9a0:
    if (ctx->pc == 0x31B9A0u) {
        ctx->pc = 0x31B9A4u;
        goto label_31b9a4;
    }
    ctx->pc = 0x31B99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B9A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B99Cu, 0x31B9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B9A4u;
label_31b9a4:
    // 0x31b9a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31b9a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31b9a8:
    // 0x31b9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31b9ac:
    // 0x31b9ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31b9acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_31b9b0:
    // 0x31b9b0: 0x3e00008  jr          $ra
label_31b9b4:
    if (ctx->pc == 0x31B9B4u) {
        ctx->pc = 0x31B9B8u;
        goto label_fallthrough_0x31b9b0;
    }
    ctx->pc = 0x31B9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31b9b0:
    ctx->pc = 0x31B9B8u;
}
