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

// Function: entry_0015af00
// Address: 0x15af00 - 0x15af34
void entry_0015af00_0x15af00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af00_0x15af00");
#endif

    switch (ctx->pc) {
        case 0x15af2cu: goto label_15af2c;
        default: break;
    }

    ctx->pc = 0x15af00u;

    // 0x15af00: 0x960210a4  lhu         $v0, 0x10A4($s0)
    ctx->pc = 0x15af00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
    // 0x15af04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15af04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15af08: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x15af08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x15af0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15af0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15af10: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x15af10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x15af14: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x15af18: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15AF18u;
    {
        const bool branch_taken_0x15af18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15af18) {
            ctx->pc = 0x15AF40u;
            return;
        }
    }
    ctx->pc = 0x15AF20u;
    // 0x15af20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15af20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15af24: 0xc0656e4  jal         func_195B90
    ctx->pc = 0x15AF24u;
    SET_GPR_U32(ctx, 31, 0x15AF2Cu);
    ctx->pc = 0x195B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B90u, 0x15AF24u, 0x15AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF2Cu;
label_15af2c:
    // 0x15af2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15AF2Cu;
    {
        const bool branch_taken_0x15af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af2c) {
            ctx->pc = 0x15AF40u;
            return;
        }
    }
    ctx->pc = 0x15AF34u;
}
