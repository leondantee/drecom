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

// Function: entry_00141d64
// Address: 0x141d64 - 0x141d98
void entry_00141d64_0x141d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d64_0x141d64");
#endif

    ctx->pc = 0x141d64u;

    // 0x141d64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d68: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141d68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141d6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x141d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x141d70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141d74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x141D74u;
    {
        const bool branch_taken_0x141d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d74) {
            ctx->pc = 0x141D98u;
            return;
        }
    }
    ctx->pc = 0x141D7Cu;
    // 0x141d7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d80: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x141d80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x141d84: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x141d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x141d88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141D88u;
    {
        const bool branch_taken_0x141d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d88) {
            ctx->pc = 0x141D98u;
            return;
        }
    }
    ctx->pc = 0x141D90u;
    // 0x141d90: 0xc06babc  jal         func_1AEAF0
    ctx->pc = 0x141D90u;
    SET_GPR_U32(ctx, 31, 0x141D98u);
    ctx->pc = 0x1AEAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEAF0u, 0x141D90u, 0x141D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D98u;
}
