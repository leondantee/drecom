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

// Function: entry_00361778
// Address: 0x361778 - 0x361788
void entry_00361778_0x361778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361778_0x361778");
#endif

    ctx->pc = 0x361778u;

    // 0x361778: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x361778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x36177c: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x36177cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x361780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x361780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x361784: 0x0  nop
    ctx->pc = 0x361784u;
    // NOP
    ctx->pc = 0x361788u;
}
