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

// Function: entry_001bbd1c
// Address: 0x1bbd1c - 0x1bbd50
void entry_001bbd1c_0x1bbd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbd1c_0x1bbd1c");
#endif

    ctx->pc = 0x1bbd1cu;

    // 0x1bbd1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbd20: 0x906313a5  lbu         $v1, 0x13A5($v1)
    ctx->pc = 0x1bbd20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5029)));
    // 0x1bbd24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bbd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bbd28: 0x28660003  slti        $a2, $v1, 0x3
    ctx->pc = 0x1bbd28u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bbd2c: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBD2Cu;
    {
        const bool branch_taken_0x1bbd2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd2c) {
            ctx->pc = 0x1BBD50u;
            return;
        }
    }
    ctx->pc = 0x1BBD34u;
    // 0x1bbd34: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bbd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbd38: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bbd3c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bbd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bbd40: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1bbd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bbd44: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1bbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1bbd48: 0xc0c51c4  jal         func_314710
    ctx->pc = 0x1BBD48u;
    SET_GPR_U32(ctx, 31, 0x1BBD50u);
    ctx->pc = 0x314710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314710u, 0x1BBD48u, 0x1BBD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD50u;
}
