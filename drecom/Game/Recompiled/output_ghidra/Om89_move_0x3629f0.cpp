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

// Function: Om89_move
// Address: 0x3629f0 - 0x362a48
void Om89_move_0x3629f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om89_move_0x3629f0");
#endif

    switch (ctx->pc) {
        case 0x3629f0u: goto label_3629f0;
        case 0x3629f4u: goto label_3629f4;
        case 0x3629f8u: goto label_3629f8;
        case 0x3629fcu: goto label_3629fc;
        case 0x362a00u: goto label_362a00;
        case 0x362a04u: goto label_362a04;
        case 0x362a08u: goto label_362a08;
        case 0x362a0cu: goto label_362a0c;
        case 0x362a10u: goto label_362a10;
        case 0x362a14u: goto label_362a14;
        case 0x362a18u: goto label_362a18;
        case 0x362a1cu: goto label_362a1c;
        case 0x362a20u: goto label_362a20;
        case 0x362a24u: goto label_362a24;
        case 0x362a28u: goto label_362a28;
        case 0x362a2cu: goto label_362a2c;
        case 0x362a30u: goto label_362a30;
        case 0x362a34u: goto label_362a34;
        case 0x362a38u: goto label_362a38;
        case 0x362a3cu: goto label_362a3c;
        case 0x362a40u: goto label_362a40;
        case 0x362a44u: goto label_362a44;
        default: break;
    }

    ctx->pc = 0x3629f0u;

label_3629f0:
    // 0x3629f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3629f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3629f4:
    // 0x3629f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3629f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_3629f8:
    // 0x3629f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3629f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3629fc:
    // 0x3629fc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3629fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_362a00:
    // 0x362a00: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x362a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_362a04:
    // 0x362a04: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x362a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_362a08:
    // 0x362a08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x362a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_362a0c:
    // 0x362a0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x362a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_362a10:
    // 0x362a10: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x362a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_362a14:
    // 0x362a14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x362a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_362a18:
    // 0x362a18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x362a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_362a1c:
    // 0x362a1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x362a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_362a20:
    // 0x362a20: 0x2442ad20  addiu       $v0, $v0, -0x52E0
    ctx->pc = 0x362a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946080));
label_362a24:
    // 0x362a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x362a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_362a28:
    // 0x362a28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x362a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_362a2c:
    // 0x362a2c: 0x40f809  jalr        $v0
label_362a30:
    if (ctx->pc == 0x362A30u) {
        ctx->pc = 0x362A34u;
        goto label_362a34;
    }
    ctx->pc = 0x362A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362A34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362A2Cu, 0x362A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362A34u;
label_362a34:
    // 0x362a34: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x362a34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_362a38:
    // 0x362a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_362a3c:
    // 0x362a3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x362a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_362a40:
    // 0x362a40: 0x3e00008  jr          $ra
label_362a44:
    if (ctx->pc == 0x362A44u) {
        ctx->pc = 0x362A48u;
        goto label_fallthrough_0x362a40;
    }
    ctx->pc = 0x362A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362a40:
    ctx->pc = 0x362A48u;
}
