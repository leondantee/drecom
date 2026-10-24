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

// Function: entry_00289a00
// Address: 0x289a00 - 0x289a1c
void entry_00289a00_0x289a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289a00_0x289a00");
#endif

    ctx->pc = 0x289a00u;

    // 0x289a00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289a04: 0x12e3000f  beq         $s7, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x289A04u;
    {
        const bool branch_taken_0x289a04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x289a04) {
            ctx->pc = 0x289A44u;
            return;
        }
    }
    ctx->pc = 0x289A0Cu;
    // 0x289a0c: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x289A0Cu;
    {
        const bool branch_taken_0x289a0c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a0c) {
            ctx->pc = 0x289A1Cu;
            return;
        }
    }
    ctx->pc = 0x289A14u;
    // 0x289a14: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x289A14u;
    {
        const bool branch_taken_0x289a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a14) {
            ctx->pc = 0x289A68u;
            return;
        }
    }
    ctx->pc = 0x289A1Cu;
}
