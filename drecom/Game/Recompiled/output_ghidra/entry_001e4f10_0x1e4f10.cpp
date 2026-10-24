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

// Function: entry_001e4f10
// Address: 0x1e4f10 - 0x1e4f60
void entry_001e4f10_0x1e4f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4f10_0x1e4f10");
#endif

    ctx->pc = 0x1e4f10u;

    // 0x1e4f10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4f14: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1e4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4f18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e4f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e4f1c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1e4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4f20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4f24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4f28: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x1e4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x1e4f2c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1e4f2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4f30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e4f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e4f34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E4F34u;
    {
        const bool branch_taken_0x1e4f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f34) {
            ctx->pc = 0x1E4F60u;
            return;
        }
    }
    ctx->pc = 0x1E4F3Cu;
    // 0x1e4f3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4f40: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4f44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4f48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4f4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4f54: 0x8c4401f0  lw          $a0, 0x1F0($v0)
    ctx->pc = 0x1e4f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e4f58: 0xc0792dc  jal         func_1E4B70
    ctx->pc = 0x1E4F58u;
    SET_GPR_U32(ctx, 31, 0x1E4F60u);
    ctx->pc = 0x1E4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4B70u, 0x1E4F58u, 0x1E4F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F60u;
}
