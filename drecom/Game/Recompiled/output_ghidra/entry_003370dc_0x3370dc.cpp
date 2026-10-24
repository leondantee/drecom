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

// Function: entry_003370dc
// Address: 0x3370dc - 0x337124
void entry_003370dc_0x3370dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003370dc_0x3370dc");
#endif

    switch (ctx->pc) {
        case 0x337100u: goto label_337100;
        default: break;
    }

    ctx->pc = 0x3370dcu;

    // 0x3370dc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x3370dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x3370e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3370e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3370e4: 0x3c021e04  lui         $v0, 0x1E04
    ctx->pc = 0x3370e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7684 << 16));
    // 0x3370e8: 0x34423214  ori         $v0, $v0, 0x3214
    ctx->pc = 0x3370e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12820);
    // 0x3370ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3370ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3370f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3370f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3370f4: 0x24452110  addiu       $a1, $v0, 0x2110
    ctx->pc = 0x3370f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8464));
    // 0x3370f8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x3370F8u;
    SET_GPR_U32(ctx, 31, 0x337100u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x3370F8u, 0x337100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337100u;
label_337100:
    // 0x337100: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x337100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x337104: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x337104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x337108: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x337108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x33710c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33710cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337110: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337110u;
    {
        const bool branch_taken_0x337110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337110) {
            ctx->pc = 0x337124u;
            return;
        }
    }
    ctx->pc = 0x337118u;
    // 0x337118: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33711c: 0xae225dc8  sw          $v0, 0x5DC8($s1)
    ctx->pc = 0x33711cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 2));
    // 0x337120: 0xae205dd4  sw          $zero, 0x5DD4($s1)
    ctx->pc = 0x337120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 0));
    ctx->pc = 0x337124u;
}
