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

// Function: entry_002e0dd0
// Address: 0x2e0dd0 - 0x2e0e0c
void entry_002e0dd0_0x2e0dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0dd0_0x2e0dd0");
#endif

    ctx->pc = 0x2e0dd0u;

    // 0x2e0dd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0dd4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e0dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e0dd8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0DD8u;
    {
        const bool branch_taken_0x2e0dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0dd8) {
            ctx->pc = 0x2E0E0Cu;
            return;
        }
    }
    ctx->pc = 0x2E0DE0u;
    // 0x2e0de0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e0de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0de4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0de8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e0de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0dec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0df0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e0df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0df4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0df8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e0df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0dfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0e00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0e04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0e08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2e0e0cu;
}
