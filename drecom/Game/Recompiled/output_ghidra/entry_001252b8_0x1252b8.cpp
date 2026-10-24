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

// Function: entry_001252b8
// Address: 0x1252b8 - 0x1252fc
void entry_001252b8_0x1252b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001252b8_0x1252b8");
#endif

    ctx->pc = 0x1252b8u;

    // 0x1252b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1252b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1252bc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1252bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1252c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1252c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1252c4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1252c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1252c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1252c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1252cc: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1252CCu;
    {
        const bool branch_taken_0x1252cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1252cc) {
            ctx->pc = 0x12538Cu;
            return;
        }
    }
    ctx->pc = 0x1252D4u;
    // 0x1252d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1252d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1252d8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1252D8u;
    {
        const bool branch_taken_0x1252d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1252d8) {
            ctx->pc = 0x12535Cu;
            return;
        }
    }
    ctx->pc = 0x1252E0u;
    // 0x1252e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1252e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1252e4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1252E4u;
    {
        const bool branch_taken_0x1252e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1252e4) {
            ctx->pc = 0x12532Cu;
            return;
        }
    }
    ctx->pc = 0x1252ECu;
    // 0x1252ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1252ECu;
    {
        const bool branch_taken_0x1252ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1252ec) {
            ctx->pc = 0x1252FCu;
            return;
        }
    }
    ctx->pc = 0x1252F4u;
    // 0x1252f4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1252F4u;
    {
        const bool branch_taken_0x1252f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1252f4) {
            ctx->pc = 0x1252FCu;
            return;
        }
    }
    ctx->pc = 0x1252FCu;
}
