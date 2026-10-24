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

// Function: entry_001c4130
// Address: 0x1c4130 - 0x1c4170
void entry_001c4130_0x1c4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4130_0x1c4130");
#endif

    ctx->pc = 0x1c4130u;

    // 0x1c4130: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4134: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c4134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c4138: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4138u;
    {
        const bool branch_taken_0x1c4138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4138) {
            ctx->pc = 0x1C4184u;
            return;
        }
    }
    ctx->pc = 0x1C4140u;
    // 0x1c4140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4144: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4148: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c4148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c414c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4150: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c4150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c4154: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c4154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c4158: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4158u;
    {
        const bool branch_taken_0x1c4158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4158) {
            ctx->pc = 0x1C4170u;
            return;
        }
    }
    ctx->pc = 0x1C4160u;
    // 0x1c4160: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4164: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c4164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4168u;
    {
        const bool branch_taken_0x1c4168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4168) {
            ctx->pc = 0x1C417Cu;
            return;
        }
    }
    ctx->pc = 0x1C4170u;
}
