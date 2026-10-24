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

// Function: entry_00272b08
// Address: 0x272b08 - 0x272b48
void entry_00272b08_0x272b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272b08_0x272b08");
#endif

    switch (ctx->pc) {
        case 0x272b10u: goto label_272b10;
        case 0x272b30u: goto label_272b30;
        case 0x272b44u: goto label_272b44;
        default: break;
    }

    ctx->pc = 0x272b08u;

    // 0x272b08: 0xc09d484  jal         func_275210
    ctx->pc = 0x272B08u;
    SET_GPR_U32(ctx, 31, 0x272B10u);
    ctx->pc = 0x275210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275210u, 0x272B08u, 0x272B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B10u;
label_272b10:
    // 0x272b10: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272b14: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x272b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x272b18: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x272B18u;
    {
        const bool branch_taken_0x272b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272b18) {
            ctx->pc = 0x272B48u;
            return;
        }
    }
    ctx->pc = 0x272B20u;
    // 0x272b20: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x272b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x272b24: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x272b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x272b28: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B28u;
    SET_GPR_U32(ctx, 31, 0x272B30u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B28u, 0x272B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B30u;
label_272b30:
    // 0x272b30: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x272b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x272b34: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x272b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x272b38: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x272b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x272b3c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B3Cu;
    SET_GPR_U32(ctx, 31, 0x272B44u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B3Cu, 0x272B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B44u;
label_272b44:
    // 0x272b44: 0x0  nop
    ctx->pc = 0x272b44u;
    // NOP
    ctx->pc = 0x272b48u;
}
