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

// Function: entry_0019cea4
// Address: 0x19cea4 - 0x19ceb4
void entry_0019cea4_0x19cea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cea4_0x19cea4");
#endif

    ctx->pc = 0x19cea4u;

    // 0x19cea4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19cea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19cea8: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B4u));
    // 0x19ceac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19ceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19ceb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x19ceb4u;
}
