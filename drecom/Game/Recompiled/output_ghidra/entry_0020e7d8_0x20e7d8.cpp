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

// Function: entry_0020e7d8
// Address: 0x20e7d8 - 0x20e818
void entry_0020e7d8_0x20e7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e7d8_0x20e7d8");
#endif

    ctx->pc = 0x20e7d8u;

    // 0x20e7d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e7dc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20e7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20e7e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e7e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20e7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20e7e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20E7E8u;
    {
        const bool branch_taken_0x20e7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e7e8) {
            ctx->pc = 0x20E828u;
            return;
        }
    }
    ctx->pc = 0x20E7F0u;
    // 0x20e7f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e7f4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20e7f8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20e7fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20e7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20e800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E800u;
    {
        const bool branch_taken_0x20e800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e800) {
            ctx->pc = 0x20E818u;
            return;
        }
    }
    ctx->pc = 0x20E808u;
    // 0x20e808: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e80c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20e80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20e810: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20E810u;
    SET_GPR_U32(ctx, 31, 0x20E818u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20E810u, 0x20E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E818u;
}
