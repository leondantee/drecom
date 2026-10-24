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

// Function: entry_001bbad0
// Address: 0x1bbad0 - 0x1bbb10
void entry_001bbad0_0x1bbad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbad0_0x1bbad0");
#endif

    ctx->pc = 0x1bbad0u;

    // 0x1bbad0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bbad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbad4: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1bbad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1bbad8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1BBAD8u;
    {
        const bool branch_taken_0x1bbad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbad8) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BBAE0u;
    // 0x1bbae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbae4: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bbae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbae8: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x1bbae8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bbaec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbaf0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1bbaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bbaf4: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1bbaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbaf8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1bbaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bbafc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bbafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbb00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bbb00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bbb04: 0x2412003c  addiu       $s2, $zero, 0x3C
    ctx->pc = 0x1bbb04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bbb08: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bbb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbb0c: 0xacd20004  sw          $s2, 0x4($a2)
    ctx->pc = 0x1bbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 18));
    ctx->pc = 0x1bbb10u;
}
