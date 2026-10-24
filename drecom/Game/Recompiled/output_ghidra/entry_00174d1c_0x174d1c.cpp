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

// Function: entry_00174d1c
// Address: 0x174d1c - 0x174d38
void entry_00174d1c_0x174d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d1c_0x174d1c");
#endif

    ctx->pc = 0x174d1cu;

    // 0x174d1c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x174d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174d20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x174d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x174d24: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x174D24u;
    {
        const bool branch_taken_0x174d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174d24) {
            ctx->pc = 0x174DE4u;
            return;
        }
    }
    ctx->pc = 0x174D2Cu;
    // 0x174d2c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x174d2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174d30: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x174D30u;
    {
        const bool branch_taken_0x174d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174d30) {
            ctx->pc = 0x174DC8u;
            return;
        }
    }
    ctx->pc = 0x174D38u;
}
