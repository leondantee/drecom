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

// Function: entry_0033da08
// Address: 0x33da08 - 0x33da64
void entry_0033da08_0x33da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033da08_0x33da08");
#endif

    ctx->pc = 0x33da08u;

    // 0x33da08: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x33da08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x33da0c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33da10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33da14: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33da18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33da18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33da1c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33da20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33da20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33da24: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33da24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33da28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33da28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33da2c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33da30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33da34: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33da34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33da38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33da38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33da3c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33da40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33da44: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33da44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33da48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33da48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33da4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33da4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33da50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33da50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33da54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33da54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33da58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33da58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33da5c: 0x3e00008  jr          $ra
    ctx->pc = 0x33DA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DA64u;
}
