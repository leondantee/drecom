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

// Function: entry_00347960
// Address: 0x347960 - 0x347978
void entry_00347960_0x347960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347960_0x347960");
#endif

    ctx->pc = 0x347960u;

    // 0x347960: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x347960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x347964: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x347964u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347968: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x347968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34796c: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x34796Cu;
    {
        const bool branch_taken_0x34796c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34796c) {
            ctx->pc = 0x34784Cu;
            return;
        }
    }
    ctx->pc = 0x347974u;
    // 0x347974: 0x0  nop
    ctx->pc = 0x347974u;
    // NOP
    ctx->pc = 0x347978u;
}
