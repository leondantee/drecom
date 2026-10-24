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

// Function: entry_001c3270
// Address: 0x1c3270 - 0x1c32b0
void entry_001c3270_0x1c3270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3270_0x1c3270");
#endif

    ctx->pc = 0x1c3270u;

    // 0x1c3270: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3274: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c3274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c3278: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3278u;
    {
        const bool branch_taken_0x1c3278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3278) {
            ctx->pc = 0x1C32C4u;
            return;
        }
    }
    ctx->pc = 0x1C3280u;
    // 0x1c3280: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3284: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3288: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c328c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c328cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3290: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c3290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c3294: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c3294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3298: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3298u;
    {
        const bool branch_taken_0x1c3298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3298) {
            ctx->pc = 0x1C32B0u;
            return;
        }
    }
    ctx->pc = 0x1C32A0u;
    // 0x1c32a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c32a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c32a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c32a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C32A8u;
    {
        const bool branch_taken_0x1c32a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c32a8) {
            ctx->pc = 0x1C32BCu;
            return;
        }
    }
    ctx->pc = 0x1C32B0u;
}
