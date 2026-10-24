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

// Function: entry_0032e668
// Address: 0x32e668 - 0x32e690
void entry_0032e668_0x32e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e668_0x32e668");
#endif

    ctx->pc = 0x32e668u;

label_32e668:
    // 0x32e668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e66c:
    // 0x32e66c: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x32e66cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
label_32e670:
    // 0x32e670: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x32e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_32e674:
    // 0x32e674: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32e674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32e678:
    // 0x32e678: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_32e67c:
    // 0x32e67c: 0x24429650  addiu       $v0, $v0, -0x69B0
    ctx->pc = 0x32e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940240));
label_32e680:
    // 0x32e680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32e684:
    // 0x32e684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32e688:
    // 0x32e688: 0x40f809  jalr        $v0
label_32e68c:
    if (ctx->pc == 0x32E68Cu) {
        ctx->pc = 0x32E690u;
        goto label_fallthrough_0x32e688;
    }
    ctx->pc = 0x32E688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32E690u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E688u, 0x32E690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x32e688:
    ctx->pc = 0x32E690u;
}
