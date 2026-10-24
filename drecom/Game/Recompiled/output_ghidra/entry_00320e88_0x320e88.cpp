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

// Function: entry_00320e88
// Address: 0x320e88 - 0x320eb8
void entry_00320e88_0x320e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320e88_0x320e88");
#endif

    ctx->pc = 0x320e88u;

    // 0x320e88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e8c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320e90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320e94: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x320e94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x320e98: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x320E98u;
    {
        const bool branch_taken_0x320e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320e98) {
            ctx->pc = 0x320DCCu;
            return;
        }
    }
    ctx->pc = 0x320EA0u;
    // 0x320ea0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x320ea0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320eac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x320eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x320eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x320EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320EB8u;
}
