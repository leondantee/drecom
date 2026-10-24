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

// Function: entry_002fa1b4
// Address: 0x2fa1b4 - 0x2fa1dc
void entry_002fa1b4_0x2fa1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fa1b4_0x2fa1b4");
#endif

    ctx->pc = 0x2fa1b4u;

    // 0x2fa1b4: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2fa1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa1b8: 0x8ce700d4  lw          $a3, 0xD4($a3)
    ctx->pc = 0x2fa1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2fa1bc: 0x28e7001e  slti        $a3, $a3, 0x1E
    ctx->pc = 0x2fa1bcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2fa1c0: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA1C0u;
    {
        const bool branch_taken_0x2fa1c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa1c0) {
            ctx->pc = 0x2FA1DCu;
            return;
        }
    }
    ctx->pc = 0x2FA1C8u;
    // 0x2fa1c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fa1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa1cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fa1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa1d0: 0x38680010  xori        $t0, $v1, 0x10
    ctx->pc = 0x2fa1d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2fa1d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa1d8: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2fa1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x2fa1dcu;
}
