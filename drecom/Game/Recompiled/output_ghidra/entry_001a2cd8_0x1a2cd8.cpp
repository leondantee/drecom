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

// Function: entry_001a2cd8
// Address: 0x1a2cd8 - 0x1a2d04
void entry_001a2cd8_0x1a2cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2cd8_0x1a2cd8");
#endif

    switch (ctx->pc) {
        case 0x1a2ce4u: goto label_1a2ce4;
        default: break;
    }

    ctx->pc = 0x1a2cd8u;

    // 0x1a2cd8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2cdc: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2CDCu;
    SET_GPR_U32(ctx, 31, 0x1A2CE4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2CDCu, 0x1A2CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CE4u;
label_1a2ce4:
    // 0x1a2ce4: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1a2ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a2ce8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2CE8u;
    {
        const bool branch_taken_0x1a2ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ce8) {
            ctx->pc = 0x1A2D04u;
            return;
        }
    }
    ctx->pc = 0x1A2CF0u;
    // 0x1a2cf0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a2cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a2cf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2cf8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a2cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a2cfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2CFCu;
    {
        const bool branch_taken_0x1a2cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cfc) {
            ctx->pc = 0x1A2D10u;
            return;
        }
    }
    ctx->pc = 0x1A2D04u;
}
