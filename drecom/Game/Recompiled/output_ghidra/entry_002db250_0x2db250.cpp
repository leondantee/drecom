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

// Function: entry_002db250
// Address: 0x2db250 - 0x2db294
void entry_002db250_0x2db250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db250_0x2db250");
#endif

    ctx->pc = 0x2db250u;

    // 0x2db250: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2db250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2db254: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB254u;
    {
        const bool branch_taken_0x2db254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db254) {
            ctx->pc = 0x2DB294u;
            return;
        }
    }
    ctx->pc = 0x2DB25Cu;
    // 0x2db25c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db260: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db264: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db268: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2db268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db26c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db270: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db278: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db280: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db284: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db288: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db28c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DB28Cu;
    {
        const bool branch_taken_0x2db28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db28c) {
            ctx->pc = 0x2DB294u;
            return;
        }
    }
    ctx->pc = 0x2DB294u;
}
