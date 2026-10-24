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

// Function: entry_002137e4
// Address: 0x2137e4 - 0x2137ec
void entry_002137e4_0x2137e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002137e4_0x2137e4");
#endif

    ctx->pc = 0x2137e4u;

    // 0x2137e4: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x2137e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x2137e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2137e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x2137ecu;
}
