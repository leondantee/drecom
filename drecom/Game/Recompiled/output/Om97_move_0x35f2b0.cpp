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

// Function: Om97_move
// Address: 0x35f2b0 - 0x35f308
void Om97_move_0x35f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om97_move_0x35f2b0");
#endif

    switch (ctx->pc) {
        case 0x35f2b0u: goto label_35f2b0;
        case 0x35f2b4u: goto label_35f2b4;
        case 0x35f2b8u: goto label_35f2b8;
        case 0x35f2bcu: goto label_35f2bc;
        case 0x35f2c0u: goto label_35f2c0;
        case 0x35f2c4u: goto label_35f2c4;
        case 0x35f2c8u: goto label_35f2c8;
        case 0x35f2ccu: goto label_35f2cc;
        case 0x35f2d0u: goto label_35f2d0;
        case 0x35f2d4u: goto label_35f2d4;
        case 0x35f2d8u: goto label_35f2d8;
        case 0x35f2dcu: goto label_35f2dc;
        case 0x35f2e0u: goto label_35f2e0;
        case 0x35f2e4u: goto label_35f2e4;
        case 0x35f2e8u: goto label_35f2e8;
        case 0x35f2ecu: goto label_35f2ec;
        case 0x35f2f0u: goto label_35f2f0;
        case 0x35f2f4u: goto label_35f2f4;
        case 0x35f2f8u: goto label_35f2f8;
        case 0x35f2fcu: goto label_35f2fc;
        case 0x35f300u: goto label_35f300;
        case 0x35f304u: goto label_35f304;
        default: break;
    }

    ctx->pc = 0x35f2b0u;

label_35f2b0:
    // 0x35f2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35f2b4:
    // 0x35f2b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_35f2b8:
    // 0x35f2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35f2bc:
    // 0x35f2bc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_35f2c0:
    // 0x35f2c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x35f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_35f2c4:
    // 0x35f2c4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x35f2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_35f2c8:
    // 0x35f2c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35f2cc:
    // 0x35f2cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35f2d0:
    // 0x35f2d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35f2d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35f2d4:
    // 0x35f2d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35f2d8:
    // 0x35f2d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35f2dc:
    // 0x35f2dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35f2e0:
    // 0x35f2e0: 0x2442aaf0  addiu       $v0, $v0, -0x5510
    ctx->pc = 0x35f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
label_35f2e4:
    // 0x35f2e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35f2e8:
    // 0x35f2e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35f2ec:
    // 0x35f2ec: 0x40f809  jalr        $v0
label_35f2f0:
    if (ctx->pc == 0x35F2F0u) {
        ctx->pc = 0x35F2F4u;
        goto label_35f2f4;
    }
    ctx->pc = 0x35F2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35F2F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F2ECu, 0x35F2F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35F2F4u;
label_35f2f4:
    // 0x35f2f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35f2f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35f2f8:
    // 0x35f2f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35f2fc:
    // 0x35f2fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35f2fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35f300:
    // 0x35f300: 0x3e00008  jr          $ra
label_35f304:
    if (ctx->pc == 0x35F304u) {
        ctx->pc = 0x35F308u;
        goto label_fallthrough_0x35f300;
    }
    ctx->pc = 0x35F300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35f300:
    ctx->pc = 0x35F308u;
}
