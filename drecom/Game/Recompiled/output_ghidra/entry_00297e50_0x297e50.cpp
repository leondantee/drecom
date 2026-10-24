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

// Function: entry_00297e50
// Address: 0x297e50 - 0x297ec0
void entry_00297e50_0x297e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297e50_0x297e50");
#endif

    ctx->pc = 0x297e50u;

    // 0x297e50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297e54: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x297e58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297e5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297e60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x297e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297e68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x297e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x297e6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x297e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297e70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297e74: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x297e78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297e7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297e80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x297e80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x297e84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297e88: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x297e8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297e90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297e94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x297e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297e98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297e9c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x297e9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x297ea0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x297EA0u;
    {
        const bool branch_taken_0x297ea0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x297ea0) {
            ctx->pc = 0x297EC0u;
            return;
        }
    }
    ctx->pc = 0x297EA8u;
    // 0x297ea8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297eac: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x297eb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297eb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297eb8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x297eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x297ebc: 0x0  nop
    ctx->pc = 0x297ebcu;
    // NOP
    ctx->pc = 0x297ec0u;
}
