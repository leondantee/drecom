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

// Function: entry_001c0678
// Address: 0x1c0678 - 0x1c06a8
void entry_001c0678_0x1c0678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0678_0x1c0678");
#endif

    ctx->pc = 0x1c0678u;

    // 0x1c0678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c067c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0680: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0684: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0688: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c0688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c068c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c068cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0690: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0690u;
    {
        const bool branch_taken_0x1c0690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0690) {
            ctx->pc = 0x1C06A8u;
            return;
        }
    }
    ctx->pc = 0x1C0698u;
    // 0x1c0698: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c069c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c069cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c06a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C06A0u;
    {
        const bool branch_taken_0x1c06a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c06a0) {
            ctx->pc = 0x1C06B4u;
            return;
        }
    }
    ctx->pc = 0x1C06A8u;
}
