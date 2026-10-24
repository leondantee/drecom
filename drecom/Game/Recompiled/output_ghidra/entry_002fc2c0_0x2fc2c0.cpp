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

// Function: entry_002fc2c0
// Address: 0x2fc2c0 - 0x2fc2f8
void entry_002fc2c0_0x2fc2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc2c0_0x2fc2c0");
#endif

    ctx->pc = 0x2fc2c0u;

    // 0x2fc2c0: 0x8fb20178  lw          $s2, 0x178($sp)
    ctx->pc = 0x2fc2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc2c4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2fc2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2fc2c8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC2C8u;
    {
        const bool branch_taken_0x2fc2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc2c8) {
            ctx->pc = 0x2FC2F8u;
            return;
        }
    }
    ctx->pc = 0x2FC2D0u;
    // 0x2fc2d0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc2d4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fc2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc2d8: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x2fc2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2fc2dc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC2DCu;
    {
        const bool branch_taken_0x2fc2dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc2dc) {
            ctx->pc = 0x2FC2F8u;
            return;
        }
    }
    ctx->pc = 0x2FC2E4u;
    // 0x2fc2e4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc2e8: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x2fc2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fc2ec: 0x28a30012  slti        $v1, $a1, 0x12
    ctx->pc = 0x2fc2ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2fc2f0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FC2F0u;
    {
        const bool branch_taken_0x2fc2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc2f0) {
            ctx->pc = 0x2FC370u;
            return;
        }
    }
    ctx->pc = 0x2FC2F8u;
}
