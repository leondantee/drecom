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

// Function: entry_0020fd78
// Address: 0x20fd78 - 0x20fdb0
void entry_0020fd78_0x20fd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fd78_0x20fd78");
#endif

    ctx->pc = 0x20fd78u;

    // 0x20fd78: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fd7c: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x20fd7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20fd80: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x20fd80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20fd84: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20fd84u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x20fd88: 0x28e80226  slti        $t0, $a3, 0x226
    ctx->pc = 0x20fd88u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)550) ? 1 : 0);
    // 0x20fd8c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FD8Cu;
    {
        const bool branch_taken_0x20fd8c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd8c) {
            ctx->pc = 0x20FDB0u;
            return;
        }
    }
    ctx->pc = 0x20FD94u;
    // 0x20fd94: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fd98: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x20fd98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20fd9c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20fd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20fda0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fda0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20fda4: 0x2861022b  slti        $at, $v1, 0x22B
    ctx->pc = 0x20fda4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)555) ? 1 : 0);
    // 0x20fda8: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x20FDA8u;
    {
        const bool branch_taken_0x20fda8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fda8) {
            ctx->pc = 0x20FE58u;
            return;
        }
    }
    ctx->pc = 0x20FDB0u;
}
