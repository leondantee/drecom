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

// Function: entry_00307e78
// Address: 0x307e78 - 0x307eac
void entry_00307e78_0x307e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307e78_0x307e78");
#endif

    ctx->pc = 0x307e78u;

    // 0x307e78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307e7c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307e80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307e84: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e88: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x307e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e8c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e94: 0x8fb600b8  lw          $s6, 0xB8($sp)
    ctx->pc = 0x307e94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e98: 0xa2c00003  sb          $zero, 0x3($s6)
    ctx->pc = 0x307e98u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e9c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ea0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307ea4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x307EA4u;
    {
        const bool branch_taken_0x307ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ea4) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307EACu;
}
