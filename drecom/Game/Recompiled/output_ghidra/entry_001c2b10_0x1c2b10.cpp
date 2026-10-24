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

// Function: entry_001c2b10
// Address: 0x1c2b10 - 0x1c2b50
void entry_001c2b10_0x1c2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2b10_0x1c2b10");
#endif

    ctx->pc = 0x1c2b10u;

    // 0x1c2b10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b14: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c2b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c2b18: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2B18u;
    {
        const bool branch_taken_0x1c2b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b18) {
            ctx->pc = 0x1C2B64u;
            return;
        }
    }
    ctx->pc = 0x1C2B20u;
    // 0x1c2b20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2b24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b28: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2b2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b30: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c2b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c2b34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c2b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2b38: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2B38u;
    {
        const bool branch_taken_0x1c2b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b38) {
            ctx->pc = 0x1C2B50u;
            return;
        }
    }
    ctx->pc = 0x1C2B40u;
    // 0x1c2b40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c2b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2b48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2B48u;
    {
        const bool branch_taken_0x1c2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b48) {
            ctx->pc = 0x1C2B5Cu;
            return;
        }
    }
    ctx->pc = 0x1C2B50u;
}
