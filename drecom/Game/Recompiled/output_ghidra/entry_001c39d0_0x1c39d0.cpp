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

// Function: entry_001c39d0
// Address: 0x1c39d0 - 0x1c3a10
void entry_001c39d0_0x1c39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c39d0_0x1c39d0");
#endif

    ctx->pc = 0x1c39d0u;

    // 0x1c39d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39d4: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c39d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c39d8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C39D8u;
    {
        const bool branch_taken_0x1c39d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39d8) {
            ctx->pc = 0x1C3A24u;
            return;
        }
    }
    ctx->pc = 0x1C39E0u;
    // 0x1c39e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c39e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c39e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39e8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c39e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c39ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c39f0: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c39f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c39f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c39f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c39f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C39F8u;
    {
        const bool branch_taken_0x1c39f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c39f8) {
            ctx->pc = 0x1C3A10u;
            return;
        }
    }
    ctx->pc = 0x1C3A00u;
    // 0x1c3a00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3a04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c3a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3a08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3A08u;
    {
        const bool branch_taken_0x1c3a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a08) {
            ctx->pc = 0x1C3A1Cu;
            return;
        }
    }
    ctx->pc = 0x1C3A10u;
}
