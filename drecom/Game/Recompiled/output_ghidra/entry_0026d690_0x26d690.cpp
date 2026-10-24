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

// Function: entry_0026d690
// Address: 0x26d690 - 0x26d6b4
void entry_0026d690_0x26d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d690_0x26d690");
#endif

    ctx->pc = 0x26d690u;

    // 0x26d690: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d694: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26d694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x26d698: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x26d698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26d69c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x26d69cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x26d6a0: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x26d6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x26d6a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D6A4u;
    {
        const bool branch_taken_0x26d6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d6a4) {
            ctx->pc = 0x26D6B4u;
            return;
        }
    }
    ctx->pc = 0x26D6ACu;
    // 0x26d6ac: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x26D6ACu;
    SET_GPR_U32(ctx, 31, 0x26D6B4u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x26D6ACu, 0x26D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6B4u;
}
