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

// Function: entry_0010fa60
// Address: 0x10fa60 - 0x10fa6c
void entry_0010fa60_0x10fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fa60_0x10fa60");
#endif

    ctx->pc = 0x10fa60u;

    // 0x10fa60: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x10fa60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x10fa64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fa68: 0xac4045f0  sw          $zero, 0x45F0($v0)
    ctx->pc = 0x10fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17904), GPR_U32(ctx, 0));
    ctx->pc = 0x10fa6cu;
}
