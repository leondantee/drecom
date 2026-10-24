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

// Function: entry_00263fe8
// Address: 0x263fe8 - 0x264034
void entry_00263fe8_0x263fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263fe8_0x263fe8");
#endif

    ctx->pc = 0x263fe8u;

    // 0x263fe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x263fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x263fec: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x263fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
    // 0x263ff0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x263ff0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x263ff4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x263ff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263ff8: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x263FF8u;
    {
        const bool branch_taken_0x263ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ff8) {
            ctx->pc = 0x263E8Cu;
            return;
        }
    }
    ctx->pc = 0x264000u;
    // 0x264000: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x264000u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264004: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x264004u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x264008: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x264008u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26400c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26400cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264010: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x264010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264014: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x264014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26401c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26401cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264028: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x264028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x26402c: 0x3e00008  jr          $ra
    ctx->pc = 0x26402Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26402Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264034u;
}
