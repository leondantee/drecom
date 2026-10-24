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

// Function: caseD_4
// Address: 0x127a20 - 0x127a58
void caseD_4_0x127a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x127a20");
#endif

    ctx->pc = 0x127a20u;

    // 0x127a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127a24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127a28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127a2c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x127a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x127a30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127a34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127a38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127a3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127a40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127a44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127a48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127a4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x127a50: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x127A50u;
    {
        const bool branch_taken_0x127a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a50) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x127A58u;
}
