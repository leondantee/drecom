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

// Function: entry_0020654c
// Address: 0x20654c - 0x206574
void entry_0020654c_0x20654c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020654c_0x20654c");
#endif

    ctx->pc = 0x20654cu;

    // 0x20654c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20654cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x206550: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x206550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x206554: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x206558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20655c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20655Cu;
    {
        const bool branch_taken_0x20655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20655c) {
            ctx->pc = 0x206574u;
            return;
        }
    }
    ctx->pc = 0x206564u;
    // 0x206564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206568: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x206568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20656c: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20656Cu;
    SET_GPR_U32(ctx, 31, 0x206574u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20656Cu, 0x206574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206574u;
}
