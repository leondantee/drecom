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

// Function: entry_002988e4
// Address: 0x2988e4 - 0x2988ec
void entry_002988e4_0x2988e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002988e4_0x2988e4");
#endif

    ctx->pc = 0x2988e4u;

    // 0x2988e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2988e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2988e8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x2988e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2988ecu;
}
