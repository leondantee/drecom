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

// Function: entry_001de934
// Address: 0x1de934 - 0x1de940
void entry_001de934_0x1de934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de934_0x1de934");
#endif

    ctx->pc = 0x1de934u;

    // 0x1de934: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1de934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1de938: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x1de938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x1de93c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1de93cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    ctx->pc = 0x1de940u;
}
