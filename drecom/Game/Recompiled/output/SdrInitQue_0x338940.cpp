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

// Function: SdrInitQue
// Address: 0x338940 - 0x3389a0
void SdrInitQue_0x338940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrInitQue_0x338940");
#endif

    switch (ctx->pc) {
        case 0x338968u: goto label_338968;
        case 0x338970u: goto label_338970;
        case 0x338990u: goto label_338990;
        default: break;
    }

    ctx->pc = 0x338940u;

    // 0x338940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338944: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x338944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x338948: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33894c: 0x8c229a10  lw          $v0, -0x65F0($at)
    ctx->pc = 0x33894cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x338950: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x338950u;
    {
        const bool branch_taken_0x338950 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338950) {
            ctx->pc = 0x338968u;
            goto label_338968;
        }
    }
    ctx->pc = 0x338958u;
    // 0x338958: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33895c: 0x8c249a10  lw          $a0, -0x65F0($at)
    ctx->pc = 0x33895cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x338960: 0xc084a98  jal         func_212A60
    ctx->pc = 0x338960u;
    SET_GPR_U32(ctx, 31, 0x338968u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x338968u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338968u) { return; }
    ctx->pc = 0x338968u;
label_338968:
    // 0x338968: 0xc0ce268  jal         func_3389A0
    ctx->pc = 0x338968u;
    SET_GPR_U32(ctx, 31, 0x338970u);
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x338968u, 0x338970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338970u;
label_338970:
    // 0x338970: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338974: 0x8c239a10  lw          $v1, -0x65F0($at)
    ctx->pc = 0x338974u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x338978: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x338978u;
    {
        const bool branch_taken_0x338978 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x338978) {
            ctx->pc = 0x338990u;
            goto label_338990;
        }
    }
    ctx->pc = 0x338980u;
    // 0x338980: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338984: 0x8c249a10  lw          $a0, -0x65F0($at)
    ctx->pc = 0x338984u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x338988: 0xc084a90  jal         func_212A40
    ctx->pc = 0x338988u;
    SET_GPR_U32(ctx, 31, 0x338990u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x338990u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338990u) { return; }
    ctx->pc = 0x338990u;
label_338990:
    // 0x338990: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x338990u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338994: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x338994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x338998: 0x3e00008  jr          $ra
    ctx->pc = 0x338998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3389A0u;
}
