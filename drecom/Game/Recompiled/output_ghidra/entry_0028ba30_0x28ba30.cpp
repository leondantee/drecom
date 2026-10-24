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

// Function: entry_0028ba30
// Address: 0x28ba30 - 0x28ba60
void entry_0028ba30_0x28ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ba30_0x28ba30");
#endif

    ctx->pc = 0x28ba30u;

    // 0x28ba30: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28ba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28ba34: 0x9022c774  lbu         $v0, -0x388C($at)
    ctx->pc = 0x28ba34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C774u));
    // 0x28ba38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ba3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BA3Cu;
    {
        const bool branch_taken_0x28ba3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ba3c) {
            ctx->pc = 0x28BA60u;
            return;
        }
    }
    ctx->pc = 0x28BA44u;
    // 0x28ba44: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x28ba44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x28ba48: 0x8c22c294  lw          $v0, -0x3D6C($at)
    ctx->pc = 0x28ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28ba4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BA4Cu;
    {
        const bool branch_taken_0x28ba4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba4c) {
            ctx->pc = 0x28BA60u;
            return;
        }
    }
    ctx->pc = 0x28BA54u;
    // 0x28ba54: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x28ba54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28ba58: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x28BA58u;
    SET_GPR_U32(ctx, 31, 0x28BA60u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x28BA58u, 0x28BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA60u;
}
