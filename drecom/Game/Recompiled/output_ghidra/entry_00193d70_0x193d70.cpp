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

// Function: entry_00193d70
// Address: 0x193d70 - 0x193d8c
void entry_00193d70_0x193d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193d70_0x193d70");
#endif

    ctx->pc = 0x193d70u;

    // 0x193d70: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x193d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193d74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x193d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x193d78: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x193d78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x193d7c: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x193D7Cu;
    {
        const bool branch_taken_0x193d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193d7c) {
            ctx->pc = 0x193C28u;
            return;
        }
    }
    ctx->pc = 0x193D84u;
    // 0x193d84: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x193D84u;
    {
        const bool branch_taken_0x193d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d84) {
            ctx->pc = 0x194378u;
            return;
        }
    }
    ctx->pc = 0x193D8Cu;
}
