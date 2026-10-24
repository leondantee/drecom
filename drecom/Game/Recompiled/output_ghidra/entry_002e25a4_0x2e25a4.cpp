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

// Function: entry_002e25a4
// Address: 0x2e25a4 - 0x2e25c8
void entry_002e25a4_0x2e25a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e25a4_0x2e25a4");
#endif

    ctx->pc = 0x2e25a4u;

    // 0x2e25a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e25a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e25a8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2e25a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2e25ac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e25acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e25b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e25b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e25b4: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2e25b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2e25b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E25B8u;
    {
        const bool branch_taken_0x2e25b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25b8) {
            ctx->pc = 0x2E25C8u;
            return;
        }
    }
    ctx->pc = 0x2E25C0u;
    // 0x2e25c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e25c4: 0xa20300db  sb          $v1, 0xDB($s0)
    ctx->pc = 0x2e25c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2e25c8u;
}
