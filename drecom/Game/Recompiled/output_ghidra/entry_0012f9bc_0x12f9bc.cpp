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

// Function: entry_0012f9bc
// Address: 0x12f9bc - 0x12f9c8
void entry_0012f9bc_0x12f9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f9bc_0x12f9bc");
#endif

    ctx->pc = 0x12f9bcu;

    // 0x12f9bc: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x12f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x12f9c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9c4: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x12f9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12f9c8u;
}
