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

// Function: entry_001db628
// Address: 0x1db628 - 0x1db670
void entry_001db628_0x1db628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db628_0x1db628");
#endif

    ctx->pc = 0x1db628u;

    // 0x1db628: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db62c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1db62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1db630: 0x1440fd84  bnez        $v0, . + 4 + (-0x27C << 2)
    ctx->pc = 0x1DB630u;
    {
        const bool branch_taken_0x1db630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db630) {
            ctx->pc = 0x1DAC44u;
            return;
        }
    }
    ctx->pc = 0x1DB638u;
    // 0x1db638: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db63c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1db63cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1db640: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1db640u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1db644: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1db644u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1db648: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1db648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db64c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1db64cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1db650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1db654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db65c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db664: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1db664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1db668: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB670u;
}
