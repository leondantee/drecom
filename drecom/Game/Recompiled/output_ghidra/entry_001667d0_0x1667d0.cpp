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

// Function: entry_001667d0
// Address: 0x1667d0 - 0x166804
void entry_001667d0_0x1667d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001667d0_0x1667d0");
#endif

    switch (ctx->pc) {
        case 0x1667ecu: goto label_1667ec;
        default: break;
    }

    ctx->pc = 0x1667d0u;

    // 0x1667d0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1667d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1667d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1667d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1667d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1667d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1667dc: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x1667dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1667e0: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x1667e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x1667e4: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x1667E4u;
    SET_GPR_U32(ctx, 31, 0x1667ECu);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x1667ECu;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1667ECu) { return; }
    ctx->pc = 0x1667ECu;
label_1667ec:
    // 0x1667ec: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1667ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1667f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1667f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1667f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1667f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1667f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1667f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1667fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1667FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1667FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166804u;
}
