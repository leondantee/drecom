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

// Function: entry_001b49bc
// Address: 0x1b49bc - 0x1b49ec
void entry_001b49bc_0x1b49bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b49bc_0x1b49bc");
#endif

    ctx->pc = 0x1b49bcu;

    // 0x1b49bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b49c0: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b49c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
    // 0x1b49c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b49c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b49c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b49c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b49cc: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x1b49ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x1b49d0: 0x14200045  bnez        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x1B49D0u;
    {
        const bool branch_taken_0x1b49d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b49d0) {
            ctx->pc = 0x1B4AE8u;
            return;
        }
    }
    ctx->pc = 0x1B49D8u;
    // 0x1b49d8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1b49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1b49dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b49e0: 0xa4431416  sh          $v1, 0x1416($v0)
    ctx->pc = 0x1b49e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5142), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b49e4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1B49E4u;
    {
        const bool branch_taken_0x1b49e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49e4) {
            ctx->pc = 0x1B4AE8u;
            return;
        }
    }
    ctx->pc = 0x1B49ECu;
}
