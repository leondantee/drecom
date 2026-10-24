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

// Function: entry_00206bbc
// Address: 0x206bbc - 0x206bcc
void entry_00206bbc_0x206bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206bbc_0x206bbc");
#endif

    ctx->pc = 0x206bbcu;

    // 0x206bbc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206bc0: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x206bc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x206bc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206bc8: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x206bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x206bccu;
}
