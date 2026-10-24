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

// Function: entry_00329828
// Address: 0x329828 - 0x329838
void entry_00329828_0x329828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329828_0x329828");
#endif

    ctx->pc = 0x329828u;

    // 0x329828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32982c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x32982cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x329830: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x329830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x329834: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x329834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x329838u;
}
