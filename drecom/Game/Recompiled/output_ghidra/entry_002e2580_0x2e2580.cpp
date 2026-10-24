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

// Function: entry_002e2580
// Address: 0x2e2580 - 0x2e25a4
void entry_002e2580_0x2e2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2580_0x2e2580");
#endif

    ctx->pc = 0x2e2580u;

    // 0x2e2580: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e2580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2584: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2e2584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2e2588: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e2588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e258c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e258cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e2590: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x2e2590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x2e2594: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2594u;
    {
        const bool branch_taken_0x2e2594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2594) {
            ctx->pc = 0x2E25A4u;
            return;
        }
    }
    ctx->pc = 0x2E259Cu;
    // 0x2e259c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e25a0: 0xa20300db  sb          $v1, 0xDB($s0)
    ctx->pc = 0x2e25a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2e25a4u;
}
