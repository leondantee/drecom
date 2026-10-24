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

// Function: entry_0013c600
// Address: 0x13c600 - 0x13c658
void entry_0013c600_0x13c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c600_0x13c600");
#endif

    switch (ctx->pc) {
        case 0x13c618u: goto label_13c618;
        default: break;
    }

    ctx->pc = 0x13c600u;

    // 0x13c600: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x13c600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c604: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c608: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x13c608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x13c60c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x13c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c610: 0xc04f3f8  jal         func_13CFE0
    ctx->pc = 0x13C610u;
    SET_GPR_U32(ctx, 31, 0x13C618u);
    ctx->pc = 0x13CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CFE0u, 0x13C610u, 0x13C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C618u;
label_13c618:
    // 0x13c618: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c61c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x13c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x13c620: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c624: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13c628: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c62c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13c62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13c630: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13c630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13c634: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13c638: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C638u;
    {
        const bool branch_taken_0x13c638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c638) {
            ctx->pc = 0x13C658u;
            return;
        }
    }
    ctx->pc = 0x13C640u;
    // 0x13c640: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13c640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13c644: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13c648: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13c648u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c64c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c654: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    ctx->pc = 0x13c658u;
}
