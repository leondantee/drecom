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

// Function: Em1c_R0_move
// Address: 0x36df90 - 0x36dfd8
void Em1c_R0_move_0x36df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R0_move_0x36df90");
#endif

    switch (ctx->pc) {
        case 0x36df90u: goto label_36df90;
        case 0x36df94u: goto label_36df94;
        case 0x36df98u: goto label_36df98;
        case 0x36df9cu: goto label_36df9c;
        case 0x36dfa0u: goto label_36dfa0;
        case 0x36dfa4u: goto label_36dfa4;
        case 0x36dfa8u: goto label_36dfa8;
        case 0x36dfacu: goto label_36dfac;
        case 0x36dfb0u: goto label_36dfb0;
        case 0x36dfb4u: goto label_36dfb4;
        case 0x36dfb8u: goto label_36dfb8;
        case 0x36dfbcu: goto label_36dfbc;
        case 0x36dfc0u: goto label_36dfc0;
        case 0x36dfc4u: goto label_36dfc4;
        case 0x36dfc8u: goto label_36dfc8;
        case 0x36dfccu: goto label_36dfcc;
        case 0x36dfd0u: goto label_36dfd0;
        case 0x36dfd4u: goto label_36dfd4;
        default: break;
    }

    ctx->pc = 0x36df90u;

label_36df90:
    // 0x36df90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36df94:
    // 0x36df94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36df98:
    // 0x36df98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36df98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36df9c:
    // 0x36df9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36dfa0:
    // 0x36dfa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36dfa4:
    // 0x36dfa4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36dfa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_36dfa8:
    // 0x36dfa8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_36dfac:
    // 0x36dfac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36dfb0:
    // 0x36dfb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36dfb4:
    // 0x36dfb4: 0x2442b320  addiu       $v0, $v0, -0x4CE0
    ctx->pc = 0x36dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947616));
label_36dfb8:
    // 0x36dfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36dfbc:
    // 0x36dfbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36dfc0:
    // 0x36dfc0: 0x40f809  jalr        $v0
label_36dfc4:
    if (ctx->pc == 0x36DFC4u) {
        ctx->pc = 0x36DFC8u;
        goto label_36dfc8;
    }
    ctx->pc = 0x36DFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36DFC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFC0u, 0x36DFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36DFC8u;
label_36dfc8:
    // 0x36dfc8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36dfc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36dfcc:
    // 0x36dfcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36dfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36dfd0:
    // 0x36dfd0: 0x3e00008  jr          $ra
label_36dfd4:
    if (ctx->pc == 0x36DFD4u) {
        ctx->pc = 0x36DFD8u;
        goto label_fallthrough_0x36dfd0;
    }
    ctx->pc = 0x36DFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36dfd0:
    ctx->pc = 0x36DFD8u;
}
