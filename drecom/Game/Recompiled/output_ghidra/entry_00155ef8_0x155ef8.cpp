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

// Function: entry_00155ef8
// Address: 0x155ef8 - 0x155f08
void entry_00155ef8_0x155ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ef8_0x155ef8");
#endif

    ctx->pc = 0x155ef8u;

    // 0x155ef8: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x155ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x155efc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155f00: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x155f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x155f04: 0x0  nop
    ctx->pc = 0x155f04u;
    // NOP
    ctx->pc = 0x155f08u;
}
