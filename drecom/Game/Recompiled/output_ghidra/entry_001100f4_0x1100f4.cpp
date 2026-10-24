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

// Function: entry_001100f4
// Address: 0x1100f4 - 0x110100
void entry_001100f4_0x1100f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001100f4_0x1100f4");
#endif

    ctx->pc = 0x1100f4u;

    // 0x1100f4: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1100f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x1100f8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1100f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1100fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1100fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110100u;
}
