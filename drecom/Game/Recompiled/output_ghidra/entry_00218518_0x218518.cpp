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

// Function: entry_00218518
// Address: 0x218518 - 0x218558
void entry_00218518_0x218518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218518_0x218518");
#endif

    ctx->pc = 0x218518u;

    // 0x218518: 0x2e23000e  sltiu       $v1, $s1, 0xE
    ctx->pc = 0x218518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x21851c: 0x1460ff13  bnez        $v1, . + 4 + (-0xED << 2)
    ctx->pc = 0x21851Cu;
    {
        const bool branch_taken_0x21851c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21851c) {
            ctx->pc = 0x21816Cu;
            return;
        }
    }
    ctx->pc = 0x218524u;
    // 0x218524: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x218524u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218528: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x218528u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21852c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21852cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218530: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x218530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x218534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x218538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21853c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21853cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x218540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21854c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x21854cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x218550: 0x3e00008  jr          $ra
    ctx->pc = 0x218550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218558u;
}
