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

// Function: Sce_game_loop_init_after
// Address: 0x212070 - 0x2120ac
void Sce_game_loop_init_after_0x212070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_game_loop_init_after_0x212070");
#endif

    switch (ctx->pc) {
        case 0x21209cu: goto label_21209c;
        default: break;
    }

    ctx->pc = 0x212070u;

    // 0x212070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212074: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x212074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x212078: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x212078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21207c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x21207cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x212080: 0xac221a8c  sw          $v0, 0x1A8C($at)
    ctx->pc = 0x212080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A8Cu, _value); } while (0);
    // 0x212084: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x212084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x212088: 0x24441a6c  addiu       $a0, $v0, 0x1A6C
    ctx->pc = 0x212088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6764));
    // 0x21208c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21208cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212090: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x212090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x212094: 0xc046314  jal         func_118C50
    ctx->pc = 0x212094u;
    SET_GPR_U32(ctx, 31, 0x21209Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x21209Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21209Cu) { return; }
    ctx->pc = 0x21209Cu;
label_21209c:
    // 0x21209c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21209cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2120a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2120a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2120a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2120A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2120ACu;
}
