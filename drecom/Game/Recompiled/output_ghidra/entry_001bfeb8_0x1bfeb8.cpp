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

// Function: entry_001bfeb8
// Address: 0x1bfeb8 - 0x1bfee8
void entry_001bfeb8_0x1bfeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfeb8_0x1bfeb8");
#endif

    ctx->pc = 0x1bfeb8u;

    // 0x1bfeb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bfeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfebc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfec0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bfec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bfec4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfec8: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1bfec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1bfecc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bfeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bfed0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFED0u;
    {
        const bool branch_taken_0x1bfed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfed0) {
            ctx->pc = 0x1BFEE8u;
            return;
        }
    }
    ctx->pc = 0x1BFED8u;
    // 0x1bfed8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfedc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bfedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFEE0u;
    {
        const bool branch_taken_0x1bfee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfee0) {
            ctx->pc = 0x1BFEF4u;
            return;
        }
    }
    ctx->pc = 0x1BFEE8u;
}
