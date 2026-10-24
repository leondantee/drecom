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

// Function: entry_001c23b0
// Address: 0x1c23b0 - 0x1c23f0
void entry_001c23b0_0x1c23b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c23b0_0x1c23b0");
#endif

    ctx->pc = 0x1c23b0u;

    // 0x1c23b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23b4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c23b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c23b8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C23B8u;
    {
        const bool branch_taken_0x1c23b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23b8) {
            ctx->pc = 0x1C2404u;
            return;
        }
    }
    ctx->pc = 0x1C23C0u;
    // 0x1c23c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c23c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23c8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c23c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c23cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23d0: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c23d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c23d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c23d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c23d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C23D8u;
    {
        const bool branch_taken_0x1c23d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c23d8) {
            ctx->pc = 0x1C23F0u;
            return;
        }
    }
    ctx->pc = 0x1C23E0u;
    // 0x1c23e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c23e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c23e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C23E8u;
    {
        const bool branch_taken_0x1c23e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23e8) {
            ctx->pc = 0x1C23FCu;
            return;
        }
    }
    ctx->pc = 0x1C23F0u;
}
