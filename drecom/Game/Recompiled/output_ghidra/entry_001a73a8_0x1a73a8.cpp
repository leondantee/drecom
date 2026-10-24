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

// Function: entry_001a73a8
// Address: 0x1a73a8 - 0x1a73e0
void entry_001a73a8_0x1a73a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a73a8_0x1a73a8");
#endif

    ctx->pc = 0x1a73a8u;

    // 0x1a73a8: 0x922702f8  lbu         $a3, 0x2F8($s1)
    ctx->pc = 0x1a73a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x1a73ac: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1a73acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1a73b0: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1a73b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1a73b4: 0x1020fe9d  beqz        $at, . + 4 + (-0x163 << 2)
    ctx->pc = 0x1A73B4u;
    {
        const bool branch_taken_0x1a73b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a73b4) {
            ctx->pc = 0x1A6E2Cu;
            return;
        }
    }
    ctx->pc = 0x1A73BCu;
    // 0x1a73bc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1a73bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a73c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a73c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a73c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a73c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a73c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a73c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a73cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a73ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a73d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a73d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a73d4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1a73d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a73d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A73D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A73D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A73E0u;
}
