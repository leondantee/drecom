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

// Function: entry_00270dd4
// Address: 0x270dd4 - 0x270df8
void entry_00270dd4_0x270dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270dd4_0x270dd4");
#endif

    ctx->pc = 0x270dd4u;

    // 0x270dd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270dd8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x270dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x270ddc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x270ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x270de0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x270de0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x270de4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x270de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x270de8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270DE8u;
    {
        const bool branch_taken_0x270de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270de8) {
            ctx->pc = 0x270DF8u;
            return;
        }
    }
    ctx->pc = 0x270DF0u;
    // 0x270df0: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x270DF0u;
    SET_GPR_U32(ctx, 31, 0x270DF8u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x270DF0u, 0x270DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DF8u;
}
