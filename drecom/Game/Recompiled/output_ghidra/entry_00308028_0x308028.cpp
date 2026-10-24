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

// Function: entry_00308028
// Address: 0x308028 - 0x308060
void entry_00308028_0x308028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308028_0x308028");
#endif

    ctx->pc = 0x308028u;

    // 0x308028: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x308028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30802c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x30802cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308030: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x308030u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x308034: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x308034u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308038: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30803c: 0xa0750001  sb          $s5, 0x1($v1)
    ctx->pc = 0x30803cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 21));
    // 0x308040: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308044: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308048: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x308048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30804c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x30804cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308050: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308054: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x308058: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x308058u;
    {
        const bool branch_taken_0x308058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308058) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x308060u;
}
