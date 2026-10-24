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

// Function: Em0c_R0_die
// Address: 0x22ffc0 - 0x230008
void Em0c_R0_die_0x22ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R0_die_0x22ffc0");
#endif

    switch (ctx->pc) {
        case 0x22ffc0u: goto label_22ffc0;
        case 0x22ffc4u: goto label_22ffc4;
        case 0x22ffc8u: goto label_22ffc8;
        case 0x22ffccu: goto label_22ffcc;
        case 0x22ffd0u: goto label_22ffd0;
        case 0x22ffd4u: goto label_22ffd4;
        case 0x22ffd8u: goto label_22ffd8;
        case 0x22ffdcu: goto label_22ffdc;
        case 0x22ffe0u: goto label_22ffe0;
        case 0x22ffe4u: goto label_22ffe4;
        case 0x22ffe8u: goto label_22ffe8;
        case 0x22ffecu: goto label_22ffec;
        case 0x22fff0u: goto label_22fff0;
        case 0x22fff4u: goto label_22fff4;
        case 0x22fff8u: goto label_22fff8;
        case 0x22fffcu: goto label_22fffc;
        case 0x230000u: goto label_230000;
        case 0x230004u: goto label_230004;
        default: break;
    }

    ctx->pc = 0x22ffc0u;

label_22ffc0:
    // 0x22ffc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22ffc4:
    // 0x22ffc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x22ffc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_22ffc8:
    // 0x22ffc8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x22ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_22ffcc:
    // 0x22ffcc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_22ffd0:
    // 0x22ffd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_22ffd4:
    // 0x22ffd4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x22ffd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_22ffd8:
    // 0x22ffd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22ffd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_22ffdc:
    // 0x22ffdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x22ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22ffe0:
    // 0x22ffe0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x22ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_22ffe4:
    // 0x22ffe4: 0x2442aeb0  addiu       $v0, $v0, -0x5150
    ctx->pc = 0x22ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946480));
label_22ffe8:
    // 0x22ffe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22ffec:
    // 0x22ffec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22fff0:
    // 0x22fff0: 0x40f809  jalr        $v0
label_22fff4:
    if (ctx->pc == 0x22FFF4u) {
        ctx->pc = 0x22FFF8u;
        goto label_22fff8;
    }
    ctx->pc = 0x22FFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FFF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FFF0u, 0x22FFF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FFF8u;
label_22fff8:
    // 0x22fff8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x22fff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22fffc:
    // 0x22fffc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_230000:
    // 0x230000: 0x3e00008  jr          $ra
label_230004:
    if (ctx->pc == 0x230004u) {
        ctx->pc = 0x230008u;
        goto label_fallthrough_0x230000;
    }
    ctx->pc = 0x230000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x230000:
    ctx->pc = 0x230008u;
}
