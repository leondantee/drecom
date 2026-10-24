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

// Function: entry_00187430
// Address: 0x187430 - 0x187460
void entry_00187430_0x187430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187430_0x187430");
#endif

    ctx->pc = 0x187430u;

label_187430:
    // 0x187430: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187434:
    // 0x187434: 0x8c250350  lw          $a1, 0x350($at)
    ctx->pc = 0x187434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 848)));
label_187438:
    // 0x187438: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x187438u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_18743c:
    // 0x18743c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_187440:
    if (ctx->pc == 0x187440u) {
        ctx->pc = 0x187444u;
        goto label_187444;
    }
    ctx->pc = 0x18743Cu;
    {
        const bool branch_taken_0x18743c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18743c) {
            ctx->pc = 0x187460u;
            return;
        }
    }
    ctx->pc = 0x187444u;
label_187444:
    // 0x187444: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_187448:
    // 0x187448: 0x2464ed80  addiu       $a0, $v1, -0x1280
    ctx->pc = 0x187448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
label_18744c:
    // 0x18744c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18744cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_187450:
    // 0x187450: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187454:
    // 0x187454: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187458:
    // 0x187458: 0x600008  jr          $v1
label_18745c:
    if (ctx->pc == 0x18745Cu) {
        ctx->pc = 0x187460u;
        goto label_fallthrough_0x187458;
    }
    ctx->pc = 0x187458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187458u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x187458:
    ctx->pc = 0x187460u;
}
