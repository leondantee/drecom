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

// Function: entry_0029c628
// Address: 0x29c628 - 0x29c674
void entry_0029c628_0x29c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c628_0x29c628");
#endif

    ctx->pc = 0x29c628u;

    // 0x29c628: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c62c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c634: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x29c634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29c638: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x29C638u;
    {
        const bool branch_taken_0x29c638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c638) {
            ctx->pc = 0x29C4FCu;
            return;
        }
    }
    ctx->pc = 0x29C640u;
    // 0x29c640: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x29c640u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29c644: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29c644u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29c648: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29c648u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29c64c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29c64cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29c650: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29c650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c654: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29c654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c658: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29c658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c668: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x29c668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29c66c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C674u;
}
