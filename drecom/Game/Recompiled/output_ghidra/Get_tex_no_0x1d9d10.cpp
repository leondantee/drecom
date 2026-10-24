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

// Function: Get_tex_no
// Address: 0x1d9d10 - 0x1d9d6c
void Get_tex_no_0x1d9d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_tex_no_0x1d9d10");
#endif

    ctx->pc = 0x1d9d10u;

    // 0x1d9d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9d14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9d18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1d9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1d9d1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9d20: 0x8c221a94  lw          $v0, 0x1A94($at)
    ctx->pc = 0x1d9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x1d9d24: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1d9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1d9d28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9D28u;
    {
        const bool branch_taken_0x1d9d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d28) {
            ctx->pc = 0x1D9D3Cu;
            goto label_1d9d3c;
        }
    }
    ctx->pc = 0x1D9D30u;
    // 0x1d9d30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9d34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D9D34u;
    {
        const bool branch_taken_0x1d9d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d34) {
            ctx->pc = 0x1D9D5Cu;
            goto label_1d9d5c;
        }
    }
    ctx->pc = 0x1D9D3Cu;
label_1d9d3c:
    // 0x1d9d3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9d40: 0x8c221a94  lw          $v0, 0x1A94($at)
    ctx->pc = 0x1d9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x1d9d44: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1d9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1d9d48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9d4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9d50: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d9d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9d54: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1d9d54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d9d58: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1d9d58u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1d9d5c:
    // 0x1d9d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d9d64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D6Cu;
}
