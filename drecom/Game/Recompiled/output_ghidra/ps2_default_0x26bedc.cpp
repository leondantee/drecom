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

// Function: default
// Address: 0x26bedc - 0x26bf00
void ps2_default_0x26bedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x26bedc");
#endif

    ctx->pc = 0x26bedcu;

    // 0x26bedc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bee0: 0x8464127c  lh          $a0, 0x127C($v1)
    ctx->pc = 0x26bee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x26bee4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x26bee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x26bee8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26bee8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26beec: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x26beecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x26bef0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BEF0u;
    {
        const bool branch_taken_0x26bef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bef0) {
            ctx->pc = 0x26BF00u;
            return;
        }
    }
    ctx->pc = 0x26BEF8u;
    // 0x26bef8: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x26BEF8u;
    SET_GPR_U32(ctx, 31, 0x26BF00u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x26BEF8u, 0x26BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF00u;
}
