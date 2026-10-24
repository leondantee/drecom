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

// Function: entry_001c0e38
// Address: 0x1c0e38 - 0x1c0e68
void entry_001c0e38_0x1c0e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0e38_0x1c0e38");
#endif

    ctx->pc = 0x1c0e38u;

    // 0x1c0e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0e3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e40: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0e44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e48: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c0e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c0e4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c0e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0e50: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0E50u;
    {
        const bool branch_taken_0x1c0e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e50) {
            ctx->pc = 0x1C0E68u;
            return;
        }
    }
    ctx->pc = 0x1C0E58u;
    // 0x1c0e58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0e5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c0e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0e60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0E60u;
    {
        const bool branch_taken_0x1c0e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e60) {
            ctx->pc = 0x1C0E74u;
            return;
        }
    }
    ctx->pc = 0x1C0E68u;
}
