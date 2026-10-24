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

// Function: Om83_move
// Address: 0x35a9a0 - 0x35a9f8
void Om83_move_0x35a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om83_move_0x35a9a0");
#endif

    switch (ctx->pc) {
        case 0x35a9a0u: goto label_35a9a0;
        case 0x35a9a4u: goto label_35a9a4;
        case 0x35a9a8u: goto label_35a9a8;
        case 0x35a9acu: goto label_35a9ac;
        case 0x35a9b0u: goto label_35a9b0;
        case 0x35a9b4u: goto label_35a9b4;
        case 0x35a9b8u: goto label_35a9b8;
        case 0x35a9bcu: goto label_35a9bc;
        case 0x35a9c0u: goto label_35a9c0;
        case 0x35a9c4u: goto label_35a9c4;
        case 0x35a9c8u: goto label_35a9c8;
        case 0x35a9ccu: goto label_35a9cc;
        case 0x35a9d0u: goto label_35a9d0;
        case 0x35a9d4u: goto label_35a9d4;
        case 0x35a9d8u: goto label_35a9d8;
        case 0x35a9dcu: goto label_35a9dc;
        case 0x35a9e0u: goto label_35a9e0;
        case 0x35a9e4u: goto label_35a9e4;
        case 0x35a9e8u: goto label_35a9e8;
        case 0x35a9ecu: goto label_35a9ec;
        case 0x35a9f0u: goto label_35a9f0;
        case 0x35a9f4u: goto label_35a9f4;
        default: break;
    }

    ctx->pc = 0x35a9a0u;

label_35a9a0:
    // 0x35a9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35a9a4:
    // 0x35a9a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_35a9a8:
    // 0x35a9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35a9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35a9ac:
    // 0x35a9ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_35a9b0:
    // 0x35a9b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x35a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_35a9b4:
    // 0x35a9b4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x35a9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_35a9b8:
    // 0x35a9b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35a9bc:
    // 0x35a9bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35a9c0:
    // 0x35a9c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35a9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35a9c4:
    // 0x35a9c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35a9c8:
    // 0x35a9c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35a9cc:
    // 0x35a9cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35a9d0:
    // 0x35a9d0: 0x2442a940  addiu       $v0, $v0, -0x56C0
    ctx->pc = 0x35a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945088));
label_35a9d4:
    // 0x35a9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35a9d8:
    // 0x35a9d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a9dc:
    // 0x35a9dc: 0x40f809  jalr        $v0
label_35a9e0:
    if (ctx->pc == 0x35A9E0u) {
        ctx->pc = 0x35A9E4u;
        goto label_35a9e4;
    }
    ctx->pc = 0x35A9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35A9E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A9DCu, 0x35A9E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35A9E4u;
label_35a9e4:
    // 0x35a9e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35a9e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35a9e8:
    // 0x35a9e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35a9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35a9ec:
    // 0x35a9ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35a9ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35a9f0:
    // 0x35a9f0: 0x3e00008  jr          $ra
label_35a9f4:
    if (ctx->pc == 0x35A9F4u) {
        ctx->pc = 0x35A9F8u;
        goto label_fallthrough_0x35a9f0;
    }
    ctx->pc = 0x35A9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35a9f0:
    ctx->pc = 0x35A9F8u;
}
