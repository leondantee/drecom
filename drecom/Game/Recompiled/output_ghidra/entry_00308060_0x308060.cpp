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

// Function: entry_00308060
// Address: 0x308060 - 0x3080a8
void entry_00308060_0x308060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308060_0x308060");
#endif

    ctx->pc = 0x308060u;

    // 0x308060: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308064: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x308064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x308068: 0x2c610065  sltiu       $at, $v1, 0x65
    ctx->pc = 0x308068u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x30806c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x30806Cu;
    {
        const bool branch_taken_0x30806c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30806c) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x308074u;
    // 0x308074: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308078: 0xac601348  sw          $zero, 0x1348($v1)
    ctx->pc = 0x308078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 0));
    // 0x30807c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x308080: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308084: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308088: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30808c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x30808cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x308090: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308094: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308098: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30809c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30809cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3080a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3080a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3080a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3080a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3080a8u;
}
