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

// Function: entry_0013d48c
// Address: 0x13d48c - 0x13d4a4
void entry_0013d48c_0x13d48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d48c_0x13d48c");
#endif

    ctx->pc = 0x13d48cu;

    // 0x13d48c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x13d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x13d490: 0x3443180f  ori         $v1, $v0, 0x180F
    ctx->pc = 0x13d490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6159);
    // 0x13d494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d498: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x13d498u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x13d49c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D49Cu;
    {
        const bool branch_taken_0x13d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d49c) {
            ctx->pc = 0x13D4B4u;
            return;
        }
    }
    ctx->pc = 0x13D4A4u;
}
