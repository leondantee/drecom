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

// Function: entry_00239334
// Address: 0x239334 - 0x239344
void entry_00239334_0x239334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239334_0x239334");
#endif

    ctx->pc = 0x239334u;

    // 0x239334: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239338: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x239338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x23933c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239340: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x239340u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x239344u;
}
