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

// Function: entry_00271cf8
// Address: 0x271cf8 - 0x271d24
void entry_00271cf8_0x271cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271cf8_0x271cf8");
#endif

    ctx->pc = 0x271cf8u;

    // 0x271cf8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271cfc: 0x9023e651  lbu         $v1, -0x19AF($at)
    ctx->pc = 0x271cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E651u));
    // 0x271d00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x271d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x271d04: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x271d04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x271d08: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
    ctx->pc = 0x271D08u;
    {
        const bool branch_taken_0x271d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271d08) {
            ctx->pc = 0x271BD8u;
            return;
        }
    }
    ctx->pc = 0x271D10u;
    // 0x271d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271d18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x271d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x271d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x271D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271D24u;
}
