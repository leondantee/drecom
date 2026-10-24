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
// Address: 0x1b5088 - 0x1b50ac
void ps2_default_0x1b5088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1b5088");
#endif

    ctx->pc = 0x1b5088u;

    // 0x1b5088: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1b5088u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b508c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b5090: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1b5090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
    // 0x1b5094: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b5098: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b5098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b509c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b509cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b50a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b50a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B50A4u;
    {
        const bool branch_taken_0x1b50a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50a4) {
            ctx->pc = 0x1B50CCu;
            return;
        }
    }
    ctx->pc = 0x1B50ACu;
}
