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

// Function: entry_002549e0
// Address: 0x2549e0 - 0x254a2c
void entry_002549e0_0x2549e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002549e0_0x2549e0");
#endif

    ctx->pc = 0x2549e0u;

    // 0x2549e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2549e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2549e4: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x2549e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2549e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2549e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2549ec: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2549ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2549f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2549F0u;
    {
        const bool branch_taken_0x2549f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2549f0) {
            ctx->pc = 0x2549C0u;
            return;
        }
    }
    ctx->pc = 0x2549F8u;
    // 0x2549f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2549f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2549fc: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x2549fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x254a00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x254a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254a04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x254a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x254a08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x254a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254a10: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x254a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x254a14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x254a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254a18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254a20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254a24: 0x3e00008  jr          $ra
    ctx->pc = 0x254A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254A2Cu;
}
