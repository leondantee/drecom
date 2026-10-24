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

// Function: entry_0032a260
// Address: 0x32a260 - 0x32a26c
void entry_0032a260_0x32a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a260_0x32a260");
#endif

    ctx->pc = 0x32a260u;

    // 0x32a260: 0x86032914  lh          $v1, 0x2914($s0)
    ctx->pc = 0x32a260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10516)));
    // 0x32a264: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32a268: 0xa6032914  sh          $v1, 0x2914($s0)
    ctx->pc = 0x32a268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10516), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x32a26cu;
}
