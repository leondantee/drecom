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

// Function: entry_001fc110
// Address: 0x1fc110 - 0x1fc148
void entry_001fc110_0x1fc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc110_0x1fc110");
#endif

    ctx->pc = 0x1fc110u;

    // 0x1fc110: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc114: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc118: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc11c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fc11cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fc120: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FC120u;
    {
        const bool branch_taken_0x1fc120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc120) {
            ctx->pc = 0x1FC0D4u;
            return;
        }
    }
    ctx->pc = 0x1FC128u;
    // 0x1fc128: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1fc128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc12c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc13c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1fc13cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fc140: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC148u;
}
