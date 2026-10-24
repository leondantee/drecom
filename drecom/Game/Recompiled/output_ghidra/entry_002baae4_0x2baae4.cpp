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

// Function: entry_002baae4
// Address: 0x2baae4 - 0x2baaf0
void entry_002baae4_0x2baae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002baae4_0x2baae4");
#endif

    ctx->pc = 0x2baae4u;

    // 0x2baae4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2baae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2baae8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baaec: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2baaecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2baaf0u;
}
