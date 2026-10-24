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

// Function: entry_001fce80
// Address: 0x1fce80 - 0x1fcebc
void entry_001fce80_0x1fce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fce80_0x1fce80");
#endif

    ctx->pc = 0x1fce80u;

    // 0x1fce80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fce84: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fce84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fce88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fce88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fce8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fce90: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fce90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fce94: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FCE94u;
    {
        const bool branch_taken_0x1fce94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce94) {
            ctx->pc = 0x1FCE1Cu;
            return;
        }
    }
    ctx->pc = 0x1FCE9Cu;
    // 0x1fce9c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1fce9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcea0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fcea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fcea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fceac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fceacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fceb0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1fceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fceb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCEBCu;
}
