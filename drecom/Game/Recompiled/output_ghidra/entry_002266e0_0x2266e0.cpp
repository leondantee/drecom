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

// Function: entry_002266e0
// Address: 0x2266e0 - 0x2266f0
void entry_002266e0_0x2266e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002266e0_0x2266e0");
#endif

    ctx->pc = 0x2266e0u;

    // 0x2266e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2266e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2266e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2266e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2266ec: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x2266ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2266f0u;
}
