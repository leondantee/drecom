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

// Function: entry_00377928
// Address: 0x377928 - 0x377960
void entry_00377928_0x377928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377928_0x377928");
#endif

    ctx->pc = 0x377928u;

    // 0x377928: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37792c: 0x90230396  lbu         $v1, 0x396($at)
    ctx->pc = 0x37792cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x377930: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x377934: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x377934u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x377938: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x377938u;
    {
        const bool branch_taken_0x377938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377938) {
            ctx->pc = 0x377814u;
            return;
        }
    }
    ctx->pc = 0x377940u;
    // 0x377940: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x377940u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37794c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37794cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377954: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x377954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x377958: 0x3e00008  jr          $ra
    ctx->pc = 0x377958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377960u;
}
