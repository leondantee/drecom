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

// Function: entry_001df8e4
// Address: 0x1df8e4 - 0x1df904
void entry_001df8e4_0x1df8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8e4_0x1df8e4");
#endif

    ctx->pc = 0x1df8e4u;

    // 0x1df8e4: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1df8e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df8e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df8ec: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1df8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1df8f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF8F0u;
    {
        const bool branch_taken_0x1df8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8f0) {
            ctx->pc = 0x1DF904u;
            return;
        }
    }
    ctx->pc = 0x1DF8F8u;
    // 0x1df8f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df8fc: 0xc077d34  jal         func_1DF4D0
    ctx->pc = 0x1DF8FCu;
    SET_GPR_U32(ctx, 31, 0x1DF904u);
    ctx->pc = 0x1DF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF4D0u, 0x1DF8FCu, 0x1DF904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF904u;
}
