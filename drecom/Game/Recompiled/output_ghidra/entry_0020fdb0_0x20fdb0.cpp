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

// Function: entry_0020fdb0
// Address: 0x20fdb0 - 0x20fde8
void entry_0020fdb0_0x20fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fdb0_0x20fdb0");
#endif

    ctx->pc = 0x20fdb0u;

    // 0x20fdb0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fdb4: 0x84c41278  lh          $a0, 0x1278($a2)
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x20fdb8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x20fdb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x20fdbc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20fdbcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x20fdc0: 0x28a6027b  slti        $a2, $a1, 0x27B
    ctx->pc = 0x20fdc0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)635) ? 1 : 0);
    // 0x20fdc4: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FDC4u;
    {
        const bool branch_taken_0x20fdc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fdc4) {
            ctx->pc = 0x20FDE8u;
            return;
        }
    }
    ctx->pc = 0x20FDCCu;
    // 0x20fdcc: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fdd0: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x20fdd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20fdd4: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x20fdd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
    // 0x20fdd8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20fdd8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x20fddc: 0x28e1027d  slti        $at, $a3, 0x27D
    ctx->pc = 0x20fddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)637) ? 1 : 0);
    // 0x20fde0: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x20FDE0u;
    {
        const bool branch_taken_0x20fde0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fde0) {
            ctx->pc = 0x20FE58u;
            return;
        }
    }
    ctx->pc = 0x20FDE8u;
}
