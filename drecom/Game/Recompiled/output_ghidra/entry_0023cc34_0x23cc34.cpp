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

// Function: entry_0023cc34
// Address: 0x23cc34 - 0x23cc44
void entry_0023cc34_0x23cc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cc34_0x23cc34");
#endif

    ctx->pc = 0x23cc34u;

    // 0x23cc34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc38: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x23cc38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x23cc3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23cc40: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x23cc40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23cc44u;
}
