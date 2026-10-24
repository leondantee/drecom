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

// Function: Draw_Sg_ot
// Address: 0x1ac0f0 - 0x1ac150
void Draw_Sg_ot_0x1ac0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw_Sg_ot_0x1ac0f0");
#endif

    switch (ctx->pc) {
        case 0x1ac110u: goto label_1ac110;
        case 0x1ac128u: goto label_1ac128;
        case 0x1ac140u: goto label_1ac140;
        default: break;
    }

    ctx->pc = 0x1ac0f0u;

    // 0x1ac0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac0f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ac0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ac0f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac0fc: 0x34449000  ori         $a0, $v0, 0x9000
    ctx->pc = 0x1ac0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ac100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ac100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac104: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ac104u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac108: 0xc0409c6  jal         func_102718
    ctx->pc = 0x1AC108u;
    SET_GPR_U32(ctx, 31, 0x1AC110u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x1AC110u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC110u) { return; }
    ctx->pc = 0x1AC110u;
label_1ac110:
    // 0x1ac110: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ac110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac114: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x1ac114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1ac118: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ac118u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac11c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ac11cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac120: 0xc0409c6  jal         func_102718
    ctx->pc = 0x1AC120u;
    SET_GPR_U32(ctx, 31, 0x1AC128u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x1AC128u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC128u) { return; }
    ctx->pc = 0x1AC128u;
label_1ac128:
    // 0x1ac128: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ac128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac12c: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x1ac12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1ac130: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ac130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ac134: 0x24454f50  addiu       $a1, $v0, 0x4F50
    ctx->pc = 0x1ac134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20304));
    // 0x1ac138: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x1AC138u;
    SET_GPR_U32(ctx, 31, 0x1AC140u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x1AC140u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC140u) { return; }
    ctx->pc = 0x1AC140u;
label_1ac140:
    // 0x1ac140: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ac140u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac144: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ac144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ac148: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC150u;
}
