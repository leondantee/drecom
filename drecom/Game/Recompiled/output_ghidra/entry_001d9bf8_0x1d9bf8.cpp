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

// Function: entry_001d9bf8
// Address: 0x1d9bf8 - 0x1d9c04
void entry_001d9bf8_0x1d9bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9bf8_0x1d9bf8");
#endif

    ctx->pc = 0x1d9bf8u;

    // 0x1d9bf8: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x1d9bf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1d9bfc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d9bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d9c00: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9C00u;
    {
        const bool branch_taken_0x1d9c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c00) {
            ctx->pc = 0x1D9C10u;
            return;
        }
    }
    ctx->pc = 0x1D9C08u;
}
