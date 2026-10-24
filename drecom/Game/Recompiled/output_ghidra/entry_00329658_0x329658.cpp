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

// Function: entry_00329658
// Address: 0x329658 - 0x3296a0
void entry_00329658_0x329658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329658_0x329658");
#endif

    ctx->pc = 0x329658u;

    // 0x329658: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x329658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x32965c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x32965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x329660: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x329660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x329664: 0x1460fe80  bnez        $v1, . + 4 + (-0x180 << 2)
    ctx->pc = 0x329664u;
    {
        const bool branch_taken_0x329664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329664) {
            ctx->pc = 0x329068u;
            return;
        }
    }
    ctx->pc = 0x32966Cu;
    // 0x32966c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x32966cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x329670: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x329670u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x329674: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x329674u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x329678: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x329678u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32967c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32967cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x329680: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x329680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329684: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x329684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32968c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32968cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329694: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x329694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x329698: 0x3e00008  jr          $ra
    ctx->pc = 0x329698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3296A0u;
}
