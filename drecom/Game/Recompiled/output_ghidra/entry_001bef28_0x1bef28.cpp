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

// Function: entry_001bef28
// Address: 0x1bef28 - 0x1bef58
void entry_001bef28_0x1bef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bef28_0x1bef28");
#endif

    ctx->pc = 0x1bef28u;

    // 0x1bef28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bef2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef30: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bef30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bef34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef38: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1bef38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1bef3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bef3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bef40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEF40u;
    {
        const bool branch_taken_0x1bef40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bef40) {
            ctx->pc = 0x1BEF58u;
            return;
        }
    }
    ctx->pc = 0x1BEF48u;
    // 0x1bef48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bef4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bef50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEF50u;
    {
        const bool branch_taken_0x1bef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef50) {
            ctx->pc = 0x1BEF64u;
            return;
        }
    }
    ctx->pc = 0x1BEF58u;
}
