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

// Function: entry_002e3028
// Address: 0x2e3028 - 0x2e3064
void entry_002e3028_0x2e3028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3028_0x2e3028");
#endif

    ctx->pc = 0x2e3028u;

    // 0x2e3028: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e3028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e302c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3030: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e3030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e3034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3038: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e303c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e303cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3044: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e3044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3048: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e304c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e304cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3054: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e3054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e3058: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x2e3058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e305c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2E305Cu;
    {
        const bool branch_taken_0x2e305c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e305c) {
            ctx->pc = 0x2E3198u;
            return;
        }
    }
    ctx->pc = 0x2E3064u;
}
