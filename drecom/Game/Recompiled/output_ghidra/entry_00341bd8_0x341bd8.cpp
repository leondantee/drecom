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

// Function: entry_00341bd8
// Address: 0x341bd8 - 0x341be0
void entry_00341bd8_0x341bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341bd8_0x341bd8");
#endif

    ctx->pc = 0x341bd8u;

    // 0x341bd8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341bdc: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x341bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x341be0u;
}
