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

// Function: entry_001df8a0
// Address: 0x1df8a0 - 0x1df8c4
void entry_001df8a0_0x1df8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8a0_0x1df8a0");
#endif

    ctx->pc = 0x1df8a0u;

    // 0x1df8a0: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1df8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df8a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df8a8: 0x30630012  andi        $v1, $v1, 0x12
    ctx->pc = 0x1df8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18);
    // 0x1df8ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF8ACu;
    {
        const bool branch_taken_0x1df8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8ac) {
            ctx->pc = 0x1DF8C4u;
            return;
        }
    }
    ctx->pc = 0x1DF8B4u;
    // 0x1df8b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df8b8: 0x93a50018  lbu         $a1, 0x18($sp)
    ctx->pc = 0x1df8b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df8bc: 0xc077c44  jal         func_1DF110
    ctx->pc = 0x1DF8BCu;
    SET_GPR_U32(ctx, 31, 0x1DF8C4u);
    ctx->pc = 0x1DF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF110u, 0x1DF8BCu, 0x1DF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8C4u;
}
