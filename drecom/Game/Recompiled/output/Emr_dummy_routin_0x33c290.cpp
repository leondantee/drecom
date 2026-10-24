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

// Function: Emr_dummy_routin
// Address: 0x33c290 - 0x33c2fc
void Emr_dummy_routin_0x33c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Emr_dummy_routin_0x33c290");
#endif

    ctx->pc = 0x33c290u;

    // 0x33c290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33c294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c29c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x33c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x33c2a0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33c2a4: 0x24505450  addiu       $s0, $v0, 0x5450
    ctx->pc = 0x33c2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33c2a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33c2ac: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x33c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x33c2b0: 0x8e1100b0  lw          $s1, 0xB0($s0)
    ctx->pc = 0x33c2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x895500u));
    // 0x33c2b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33c2b8: 0xa62210a6  sh          $v0, 0x10A6($s1)
    ctx->pc = 0x33c2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x33c2bc: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33c2bcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x89545Eu));
    // 0x33c2c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c2c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c2c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c2c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33c2cc: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c2d4: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33c2d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c2d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c2dc: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x33c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x33c2e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c2e4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33c2e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c2e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c2ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c2f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33c2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x33C2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C2FCu;
}
