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

// Function: entry_00272b48
// Address: 0x272b48 - 0x272b80
void entry_00272b48_0x272b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272b48_0x272b48");
#endif

    switch (ctx->pc) {
        case 0x272b68u: goto label_272b68;
        case 0x272b7cu: goto label_272b7c;
        default: break;
    }

    ctx->pc = 0x272b48u;

    // 0x272b48: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272b4c: 0x2402015e  addiu       $v0, $zero, 0x15E
    ctx->pc = 0x272b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x272b50: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x272B50u;
    {
        const bool branch_taken_0x272b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272b50) {
            ctx->pc = 0x272B80u;
            return;
        }
    }
    ctx->pc = 0x272B58u;
    // 0x272b58: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x272b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x272b5c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x272b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x272b60: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B60u;
    SET_GPR_U32(ctx, 31, 0x272B68u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B60u, 0x272B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B68u;
label_272b68:
    // 0x272b68: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x272b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x272b6c: 0x3444c864  ori         $a0, $v0, 0xC864
    ctx->pc = 0x272b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51300);
    // 0x272b70: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x272b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x272b74: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B74u;
    SET_GPR_U32(ctx, 31, 0x272B7Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B74u, 0x272B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B7Cu;
label_272b7c:
    // 0x272b7c: 0x0  nop
    ctx->pc = 0x272b7cu;
    // NOP
    ctx->pc = 0x272b80u;
}
