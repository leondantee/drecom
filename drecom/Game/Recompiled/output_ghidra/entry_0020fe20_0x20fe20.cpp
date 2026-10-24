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

// Function: entry_0020fe20
// Address: 0x20fe20 - 0x20fe58
void entry_0020fe20_0x20fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fe20_0x20fe20");
#endif

    ctx->pc = 0x20fe20u;

    // 0x20fe20: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fe24: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x20fe24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20fe28: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x20fe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20fe2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fe2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20fe30: 0x28660311  slti        $a2, $v1, 0x311
    ctx->pc = 0x20fe30u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)785) ? 1 : 0);
    // 0x20fe34: 0x14c0007c  bnez        $a2, . + 4 + (0x7C << 2)
    ctx->pc = 0x20FE34u;
    {
        const bool branch_taken_0x20fe34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fe34) {
            ctx->pc = 0x210028u;
            return;
        }
    }
    ctx->pc = 0x20FE3Cu;
    // 0x20fe3c: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fe40: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20fe40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20fe44: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x20fe44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20fe48: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20fe48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x20fe4c: 0x28c10317  slti        $at, $a2, 0x317
    ctx->pc = 0x20fe4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)791) ? 1 : 0);
    // 0x20fe50: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
    ctx->pc = 0x20FE50u;
    {
        const bool branch_taken_0x20fe50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fe50) {
            ctx->pc = 0x210028u;
            return;
        }
    }
    ctx->pc = 0x20FE58u;
}
