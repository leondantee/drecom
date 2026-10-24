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

// Function: Om88_R0_move
// Address: 0x35e8a0 - 0x35e8e8
void Om88_R0_move_0x35e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om88_R0_move_0x35e8a0");
#endif

    switch (ctx->pc) {
        case 0x35e8a0u: goto label_35e8a0;
        case 0x35e8a4u: goto label_35e8a4;
        case 0x35e8a8u: goto label_35e8a8;
        case 0x35e8acu: goto label_35e8ac;
        case 0x35e8b0u: goto label_35e8b0;
        case 0x35e8b4u: goto label_35e8b4;
        case 0x35e8b8u: goto label_35e8b8;
        case 0x35e8bcu: goto label_35e8bc;
        case 0x35e8c0u: goto label_35e8c0;
        case 0x35e8c4u: goto label_35e8c4;
        case 0x35e8c8u: goto label_35e8c8;
        case 0x35e8ccu: goto label_35e8cc;
        case 0x35e8d0u: goto label_35e8d0;
        case 0x35e8d4u: goto label_35e8d4;
        case 0x35e8d8u: goto label_35e8d8;
        case 0x35e8dcu: goto label_35e8dc;
        case 0x35e8e0u: goto label_35e8e0;
        case 0x35e8e4u: goto label_35e8e4;
        default: break;
    }

    ctx->pc = 0x35e8a0u;

label_35e8a0:
    // 0x35e8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35e8a4:
    // 0x35e8a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35e8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35e8a8:
    // 0x35e8a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35e8ac:
    // 0x35e8ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35e8b0:
    // 0x35e8b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35e8b4:
    // 0x35e8b4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35e8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35e8b8:
    // 0x35e8b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35e8bc:
    // 0x35e8bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35e8c0:
    // 0x35e8c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35e8c4:
    // 0x35e8c4: 0x2442aab0  addiu       $v0, $v0, -0x5550
    ctx->pc = 0x35e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945456));
label_35e8c8:
    // 0x35e8c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35e8cc:
    // 0x35e8cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35e8d0:
    // 0x35e8d0: 0x40f809  jalr        $v0
label_35e8d4:
    if (ctx->pc == 0x35E8D4u) {
        ctx->pc = 0x35E8D8u;
        goto label_35e8d8;
    }
    ctx->pc = 0x35E8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35E8D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E8D0u, 0x35E8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35E8D8u;
label_35e8d8:
    // 0x35e8d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35e8d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35e8dc:
    // 0x35e8dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35e8dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35e8e0:
    // 0x35e8e0: 0x3e00008  jr          $ra
label_35e8e4:
    if (ctx->pc == 0x35E8E4u) {
        ctx->pc = 0x35E8E8u;
        goto label_fallthrough_0x35e8e0;
    }
    ctx->pc = 0x35E8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35e8e0:
    ctx->pc = 0x35E8E8u;
}
