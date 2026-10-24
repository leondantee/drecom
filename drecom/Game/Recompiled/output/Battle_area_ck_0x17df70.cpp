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

// Function: Battle_area_ck
// Address: 0x17df70 - 0x17df8c
void Battle_area_ck_0x17df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Battle_area_ck_0x17df70");
#endif

    ctx->pc = 0x17df70u;

    // 0x17df70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17df70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17df74: 0x8c220af8  lw          $v0, 0xAF8($at)
    ctx->pc = 0x17df74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF8u));
    // 0x17df78: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x17df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x17df7c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x17df7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x17df80: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17df80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x17df84: 0x3e00008  jr          $ra
    ctx->pc = 0x17DF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DF8Cu;
}
