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

// Function: entry_002e255c
// Address: 0x2e255c - 0x2e2580
void entry_002e255c_0x2e255c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e255c_0x2e255c");
#endif

    ctx->pc = 0x2e255cu;

    // 0x2e255c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2560: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2e2560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2e2564: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e2564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e2568: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e2568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e256c: 0x286101f5  slti        $at, $v1, 0x1F5
    ctx->pc = 0x2e256cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x2e2570: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2570u;
    {
        const bool branch_taken_0x2e2570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2570) {
            ctx->pc = 0x2E2580u;
            return;
        }
    }
    ctx->pc = 0x2E2578u;
    // 0x2e2578: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e257c: 0xa20300db  sb          $v1, 0xDB($s0)
    ctx->pc = 0x2e257cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2e2580u;
}
