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

// Function: entry_002db200
// Address: 0x2db200 - 0x2db250
void entry_002db200_0x2db200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db200_0x2db200");
#endif

    switch (ctx->pc) {
        case 0x2db208u: goto label_2db208;
        default: break;
    }

    ctx->pc = 0x2db200u;

    // 0x2db200: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB200u;
    SET_GPR_U32(ctx, 31, 0x2DB208u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB200u, 0x2DB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB208u;
label_2db208:
    // 0x2db208: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db20c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2db20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2db210: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB210u;
    {
        const bool branch_taken_0x2db210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db210) {
            ctx->pc = 0x2DB250u;
            return;
        }
    }
    ctx->pc = 0x2DB218u;
    // 0x2db218: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db21c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db220: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db224: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db228: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db22c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db22cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db230: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db234: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db238: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db23c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db240: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db244: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db248: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DB248u;
    {
        const bool branch_taken_0x2db248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db248) {
            ctx->pc = 0x2DB294u;
            return;
        }
    }
    ctx->pc = 0x2DB250u;
}
