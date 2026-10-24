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

// Function: entry_00362d6c
// Address: 0x362d6c - 0x362dd0
void entry_00362d6c_0x362d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362d6c_0x362d6c");
#endif

    ctx->pc = 0x362d6cu;

    // 0x362d6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d70: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x362d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x362d74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x362d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x362d78: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x362d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x362d7c: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x362d7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x362d80: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x362D80u;
    {
        const bool branch_taken_0x362d80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x362d80) {
            ctx->pc = 0x362DD0u;
            return;
        }
    }
    ctx->pc = 0x362D88u;
    // 0x362d88: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x362d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d8c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x362d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x362d90: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x362d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x362d94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x362d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x362d98: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x362d98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x362d9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x362d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362da0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362da4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x362da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x362da8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362dac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x362dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x362db0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362db4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x362db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362db8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362dbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x362dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x362dc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362dc4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x362dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x362dc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362dcc: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x362dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    ctx->pc = 0x362dd0u;
}
