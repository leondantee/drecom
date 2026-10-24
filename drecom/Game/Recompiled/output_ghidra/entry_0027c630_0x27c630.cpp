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

// Function: entry_0027c630
// Address: 0x27c630 - 0x27c674
void entry_0027c630_0x27c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c630_0x27c630");
#endif

    ctx->pc = 0x27c630u;

    // 0x27c630: 0x2e220173  sltiu       $v0, $s1, 0x173
    ctx->pc = 0x27c630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)371) ? 1 : 0);
    // 0x27c634: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27C634u;
    {
        const bool branch_taken_0x27c634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c634) {
            ctx->pc = 0x27C608u;
            return;
        }
    }
    ctx->pc = 0x27C63Cu;
    // 0x27c63c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c640: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27c640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27c644: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c648: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c64c: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27c64cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c650: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c654: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c654u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c658: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27c65c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27c660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C660u;
    {
        const bool branch_taken_0x27c660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c660) {
            ctx->pc = 0x27C674u;
            return;
        }
    }
    ctx->pc = 0x27C668u;
    // 0x27c668: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x27c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27c66c: 0xc062010  jal         func_188040
    ctx->pc = 0x27C66Cu;
    SET_GPR_U32(ctx, 31, 0x27C674u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x27C66Cu, 0x27C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C674u;
}
