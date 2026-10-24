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

// Function: Draw_Sg_ot1
// Address: 0x1ac150 - 0x1ac1b0
void Draw_Sg_ot1_0x1ac150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw_Sg_ot1_0x1ac150");
#endif

    switch (ctx->pc) {
        case 0x1ac170u: goto label_1ac170;
        case 0x1ac188u: goto label_1ac188;
        case 0x1ac1a0u: goto label_1ac1a0;
        default: break;
    }

    ctx->pc = 0x1ac150u;

    // 0x1ac150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac154: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ac154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ac158: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ac158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac15c: 0x34449000  ori         $a0, $v0, 0x9000
    ctx->pc = 0x1ac15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ac160: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ac160u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac164: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ac164u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac168: 0xc0409c6  jal         func_102718
    ctx->pc = 0x1AC168u;
    SET_GPR_U32(ctx, 31, 0x1AC170u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x1AC170u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC170u) { return; }
    ctx->pc = 0x1AC170u;
label_1ac170:
    // 0x1ac170: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ac170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac174: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x1ac174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1ac178: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ac178u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac17c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ac17cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac180: 0xc0409c6  jal         func_102718
    ctx->pc = 0x1AC180u;
    SET_GPR_U32(ctx, 31, 0x1AC188u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x1AC188u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC188u) { return; }
    ctx->pc = 0x1AC188u;
label_1ac188:
    // 0x1ac188: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ac188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac18c: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x1ac18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1ac190: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ac194: 0x24453f40  addiu       $a1, $v0, 0x3F40
    ctx->pc = 0x1ac194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
    // 0x1ac198: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x1AC198u;
    SET_GPR_U32(ctx, 31, 0x1AC1A0u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x1AC1A0u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC1A0u) { return; }
    ctx->pc = 0x1AC1A0u;
label_1ac1a0:
    // 0x1ac1a0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ac1a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac1a4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ac1a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ac1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC1B0u;
}
