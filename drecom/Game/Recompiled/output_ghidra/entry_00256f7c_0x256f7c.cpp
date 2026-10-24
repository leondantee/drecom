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

// Function: entry_00256f7c
// Address: 0x256f7c - 0x256f94
void entry_00256f7c_0x256f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256f7c_0x256f7c");
#endif

    ctx->pc = 0x256f7cu;

    // 0x256f7c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x256f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x256f80: 0x3443180f  ori         $v1, $v0, 0x180F
    ctx->pc = 0x256f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6159);
    // 0x256f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256f88: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x256f88u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x256f8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x256F8Cu;
    {
        const bool branch_taken_0x256f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f8c) {
            ctx->pc = 0x256FD0u;
            return;
        }
    }
    ctx->pc = 0x256F94u;
}
