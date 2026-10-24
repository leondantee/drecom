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

// Function: entry_00300b24
// Address: 0x300b24 - 0x300b50
void entry_00300b24_0x300b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300b24_0x300b24");
#endif

    switch (ctx->pc) {
        case 0x300b30u: goto label_300b30;
        default: break;
    }

    ctx->pc = 0x300b24u;

    // 0x300b24: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300b28: 0xc0c2a54  jal         func_30A950
    ctx->pc = 0x300B28u;
    SET_GPR_U32(ctx, 31, 0x300B30u);
    ctx->pc = 0x30A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A950u, 0x300B28u, 0x300B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B30u;
label_300b30:
    // 0x300b30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x300b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300b34: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x300b34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x300b38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x300b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x300b3c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x300B3Cu;
    {
        const bool branch_taken_0x300b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300b3c) {
            ctx->pc = 0x300B50u;
            return;
        }
    }
    ctx->pc = 0x300B44u;
    // 0x300b44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300b48: 0xc0c0400  jal         func_301000
    ctx->pc = 0x300B48u;
    SET_GPR_U32(ctx, 31, 0x300B50u);
    ctx->pc = 0x301000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301000u, 0x300B48u, 0x300B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B50u;
}
