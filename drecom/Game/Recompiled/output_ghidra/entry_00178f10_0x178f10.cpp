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

// Function: entry_00178f10
// Address: 0x178f10 - 0x178f48
void entry_00178f10_0x178f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178f10_0x178f10");
#endif

    ctx->pc = 0x178f10u;

    // 0x178f10: 0x96830006  lhu         $v1, 0x6($s4)
    ctx->pc = 0x178f10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x178f14: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x178f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x178f18: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x178f18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x178f1c: 0x1460ff48  bnez        $v1, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x178F1Cu;
    {
        const bool branch_taken_0x178f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178f1c) {
            ctx->pc = 0x178C40u;
            return;
        }
    }
    ctx->pc = 0x178F24u;
    // 0x178f24: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x178f24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178f28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x178f28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178f2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178f30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f3c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x178f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x178f40: 0x3e00008  jr          $ra
    ctx->pc = 0x178F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178F48u;
}
