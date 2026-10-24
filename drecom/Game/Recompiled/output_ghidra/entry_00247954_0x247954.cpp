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

// Function: entry_00247954
// Address: 0x247954 - 0x247964
void entry_00247954_0x247954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247954_0x247954");
#endif

    ctx->pc = 0x247954u;

    // 0x247954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247958: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x247958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x24795c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x247960: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x247960u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x247964u;
}
