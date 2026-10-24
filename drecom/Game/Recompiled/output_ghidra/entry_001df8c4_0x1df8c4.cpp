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

// Function: entry_001df8c4
// Address: 0x1df8c4 - 0x1df8e4
void entry_001df8c4_0x1df8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8c4_0x1df8c4");
#endif

    ctx->pc = 0x1df8c4u;

    // 0x1df8c4: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1df8c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df8c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df8cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1df8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1df8d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF8D0u;
    {
        const bool branch_taken_0x1df8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8d0) {
            ctx->pc = 0x1DF8E4u;
            return;
        }
    }
    ctx->pc = 0x1DF8D8u;
    // 0x1df8d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df8dc: 0xc077cc8  jal         func_1DF320
    ctx->pc = 0x1DF8DCu;
    SET_GPR_U32(ctx, 31, 0x1DF8E4u);
    ctx->pc = 0x1DF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF320u, 0x1DF8DCu, 0x1DF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8E4u;
}
