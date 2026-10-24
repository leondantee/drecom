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

// Function: entry_001fc968
// Address: 0x1fc968 - 0x1fc998
void entry_001fc968_0x1fc968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc968_0x1fc968");
#endif

    ctx->pc = 0x1fc968u;

    // 0x1fc968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc96c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fc96cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fc970: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc974: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fc974u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fc978: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FC978u;
    {
        const bool branch_taken_0x1fc978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc978) {
            ctx->pc = 0x1FC930u;
            return;
        }
    }
    ctx->pc = 0x1FC980u;
    // 0x1fc980: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1fc980u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc98c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fc98cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fc990: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC998u;
}
