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

// Function: entry_001cc0fc
// Address: 0x1cc0fc - 0x1cc12c
void entry_001cc0fc_0x1cc0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc0fc_0x1cc0fc");
#endif

    ctx->pc = 0x1cc0fcu;

label_1cc0fc:
    // 0x1cc0fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc100:
    // 0x1cc100: 0x8c651b64  lw          $a1, 0x1B64($v1)
    ctx->pc = 0x1cc100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_1cc104:
    // 0x1cc104: 0x2ca1000b  sltiu       $at, $a1, 0xB
    ctx->pc = 0x1cc104u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1cc108:
    // 0x1cc108: 0x10200182  beqz        $at, . + 4 + (0x182 << 2)
label_1cc10c:
    if (ctx->pc == 0x1CC10Cu) {
        ctx->pc = 0x1CC110u;
        goto label_1cc110;
    }
    ctx->pc = 0x1CC108u;
    {
        const bool branch_taken_0x1cc108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc108) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC110u;
label_1cc110:
    // 0x1cc110: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1cc110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1cc114:
    // 0x1cc114: 0x2464f4b0  addiu       $a0, $v1, -0xB50
    ctx->pc = 0x1cc114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964400));
label_1cc118:
    // 0x1cc118: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cc118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cc11c:
    // 0x1cc11c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cc120:
    // 0x1cc120: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cc120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc124:
    // 0x1cc124: 0x600008  jr          $v1
label_1cc128:
    if (ctx->pc == 0x1CC128u) {
        ctx->pc = 0x1CC12Cu;
        goto label_fallthrough_0x1cc124;
    }
    ctx->pc = 0x1CC124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC124u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1cc124:
    ctx->pc = 0x1CC12Cu;
}
