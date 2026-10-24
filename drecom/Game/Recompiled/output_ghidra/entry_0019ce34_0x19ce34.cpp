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

// Function: entry_0019ce34
// Address: 0x19ce34 - 0x19ce44
void entry_0019ce34_0x19ce34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ce34_0x19ce34");
#endif

    ctx->pc = 0x19ce34u;

    // 0x19ce34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ce34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19ce38: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x19ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B4u));
    // 0x19ce3c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19ce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19ce40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x19ce44u;
}
