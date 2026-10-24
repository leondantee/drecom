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

// Function: entry_00272b80
// Address: 0x272b80 - 0x272ba8
void entry_00272b80_0x272b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272b80_0x272b80");
#endif

    switch (ctx->pc) {
        case 0x272ba4u: goto label_272ba4;
        default: break;
    }

    ctx->pc = 0x272b80u;

    // 0x272b80: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272b84: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x272b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x272b88: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272B88u;
    {
        const bool branch_taken_0x272b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272b88) {
            ctx->pc = 0x272BA8u;
            return;
        }
    }
    ctx->pc = 0x272B90u;
    // 0x272b90: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x272b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x272b94: 0x344464c8  ori         $a0, $v0, 0x64C8
    ctx->pc = 0x272b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25800);
    // 0x272b98: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x272b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
    // 0x272b9c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B9Cu;
    SET_GPR_U32(ctx, 31, 0x272BA4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B9Cu, 0x272BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BA4u;
label_272ba4:
    // 0x272ba4: 0x0  nop
    ctx->pc = 0x272ba4u;
    // NOP
    ctx->pc = 0x272ba8u;
}
