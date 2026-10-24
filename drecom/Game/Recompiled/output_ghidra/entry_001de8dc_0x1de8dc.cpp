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

// Function: entry_001de8dc
// Address: 0x1de8dc - 0x1de908
void entry_001de8dc_0x1de8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de8dc_0x1de8dc");
#endif

    switch (ctx->pc) {
        case 0x1de900u: goto label_1de900;
        default: break;
    }

    ctx->pc = 0x1de8dcu;

    // 0x1de8dc: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1de8dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de8e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de8e4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1de8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1de8e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1de8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1de8ec: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1de8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de8f0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1de8f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1de8f4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1de8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1de8f8: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x1DE8F8u;
    SET_GPR_U32(ctx, 31, 0x1DE900u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x1DE8F8u, 0x1DE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE900u;
label_1de900:
    // 0x1de900: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DE900u;
    {
        const bool branch_taken_0x1de900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de900) {
            ctx->pc = 0x1DE950u;
            return;
        }
    }
    ctx->pc = 0x1DE908u;
}
