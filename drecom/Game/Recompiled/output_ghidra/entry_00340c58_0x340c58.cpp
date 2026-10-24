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

// Function: entry_00340c58
// Address: 0x340c58 - 0x340c7c
void entry_00340c58_0x340c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340c58_0x340c58");
#endif

    ctx->pc = 0x340c58u;

    // 0x340c58: 0x922213a6  lbu         $v0, 0x13A6($s1)
    ctx->pc = 0x340c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5030)));
    // 0x340c5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x340c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x340c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340c64: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x340C64u;
    {
        const bool branch_taken_0x340c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340c64) {
            ctx->pc = 0x340C9Cu;
            return;
        }
    }
    ctx->pc = 0x340C6Cu;
    // 0x340c6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x340C6Cu;
    {
        const bool branch_taken_0x340c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c6c) {
            ctx->pc = 0x340C7Cu;
            return;
        }
    }
    ctx->pc = 0x340C74u;
    // 0x340c74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x340C74u;
    {
        const bool branch_taken_0x340c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c74) {
            ctx->pc = 0x340CB8u;
            return;
        }
    }
    ctx->pc = 0x340C7Cu;
}
