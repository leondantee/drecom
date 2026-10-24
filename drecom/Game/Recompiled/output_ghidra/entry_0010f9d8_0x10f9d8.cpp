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

// Function: entry_0010f9d8
// Address: 0x10f9d8 - 0x10f9e0
void entry_0010f9d8_0x10f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f9d8_0x10f9d8");
#endif

    ctx->pc = 0x10f9d8u;

    // 0x10f9d8: 0xac6245f0  sw          $v0, 0x45F0($v1)
    ctx->pc = 0x10f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17904), GPR_U32(ctx, 2));
    // 0x10f9dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10f9e0u;
}
