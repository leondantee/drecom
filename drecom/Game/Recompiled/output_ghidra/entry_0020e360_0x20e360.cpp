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

// Function: entry_0020e360
// Address: 0x20e360 - 0x20e3b0
void entry_0020e360_0x20e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e360_0x20e360");
#endif

    switch (ctx->pc) {
        case 0x20e388u: goto label_20e388;
        default: break;
    }

    ctx->pc = 0x20e360u;

    // 0x20e360: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e364: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20e364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20e368: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e36c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20e36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20e370: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20E370u;
    {
        const bool branch_taken_0x20e370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e370) {
            ctx->pc = 0x20E3E8u;
            return;
        }
    }
    ctx->pc = 0x20E378u;
    // 0x20e378: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e37c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20e37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20e380: 0xc0ba6b8  jal         func_2E9AE0
    ctx->pc = 0x20E380u;
    SET_GPR_U32(ctx, 31, 0x20E388u);
    ctx->pc = 0x2E9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9AE0u, 0x20E380u, 0x20E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E388u;
label_20e388:
    // 0x20e388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e38c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20e390: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20e394: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20e398: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E398u;
    {
        const bool branch_taken_0x20e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e398) {
            ctx->pc = 0x20E3B0u;
            return;
        }
    }
    ctx->pc = 0x20E3A0u;
    // 0x20e3a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e3a4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20e3a8: 0xc0bad88  jal         func_2EB620
    ctx->pc = 0x20E3A8u;
    SET_GPR_U32(ctx, 31, 0x20E3B0u);
    ctx->pc = 0x2EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB620u, 0x20E3A8u, 0x20E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3B0u;
}
