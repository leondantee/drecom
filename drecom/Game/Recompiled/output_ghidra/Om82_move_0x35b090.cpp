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

// Function: Om82_move
// Address: 0x35b090 - 0x35b0e8
void Om82_move_0x35b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om82_move_0x35b090");
#endif

    switch (ctx->pc) {
        case 0x35b090u: goto label_35b090;
        case 0x35b094u: goto label_35b094;
        case 0x35b098u: goto label_35b098;
        case 0x35b09cu: goto label_35b09c;
        case 0x35b0a0u: goto label_35b0a0;
        case 0x35b0a4u: goto label_35b0a4;
        case 0x35b0a8u: goto label_35b0a8;
        case 0x35b0acu: goto label_35b0ac;
        case 0x35b0b0u: goto label_35b0b0;
        case 0x35b0b4u: goto label_35b0b4;
        case 0x35b0b8u: goto label_35b0b8;
        case 0x35b0bcu: goto label_35b0bc;
        case 0x35b0c0u: goto label_35b0c0;
        case 0x35b0c4u: goto label_35b0c4;
        case 0x35b0c8u: goto label_35b0c8;
        case 0x35b0ccu: goto label_35b0cc;
        case 0x35b0d0u: goto label_35b0d0;
        case 0x35b0d4u: goto label_35b0d4;
        case 0x35b0d8u: goto label_35b0d8;
        case 0x35b0dcu: goto label_35b0dc;
        case 0x35b0e0u: goto label_35b0e0;
        case 0x35b0e4u: goto label_35b0e4;
        default: break;
    }

    ctx->pc = 0x35b090u;

label_35b090:
    // 0x35b090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35b094:
    // 0x35b094: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_35b098:
    // 0x35b098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35b09c:
    // 0x35b09c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_35b0a0:
    // 0x35b0a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x35b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_35b0a4:
    // 0x35b0a4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x35b0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_35b0a8:
    // 0x35b0a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35b0ac:
    // 0x35b0ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35b0b0:
    // 0x35b0b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35b0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35b0b4:
    // 0x35b0b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35b0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35b0b8:
    // 0x35b0b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35b0bc:
    // 0x35b0bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35b0c0:
    // 0x35b0c0: 0x2442a990  addiu       $v0, $v0, -0x5670
    ctx->pc = 0x35b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945168));
label_35b0c4:
    // 0x35b0c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35b0c8:
    // 0x35b0c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35b0cc:
    // 0x35b0cc: 0x40f809  jalr        $v0
label_35b0d0:
    if (ctx->pc == 0x35B0D0u) {
        ctx->pc = 0x35B0D4u;
        goto label_35b0d4;
    }
    ctx->pc = 0x35B0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35B0D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B0CCu, 0x35B0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35B0D4u;
label_35b0d4:
    // 0x35b0d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35b0d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35b0d8:
    // 0x35b0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b0dc:
    // 0x35b0dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35b0dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35b0e0:
    // 0x35b0e0: 0x3e00008  jr          $ra
label_35b0e4:
    if (ctx->pc == 0x35B0E4u) {
        ctx->pc = 0x35B0E8u;
        goto label_fallthrough_0x35b0e0;
    }
    ctx->pc = 0x35B0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35b0e0:
    ctx->pc = 0x35B0E8u;
}
