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

// Function: entry_0036938c
// Address: 0x36938c - 0x3693a8
void entry_0036938c_0x36938c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036938c_0x36938c");
#endif

    ctx->pc = 0x36938cu;

    // 0x36938c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x36938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x369390: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x369390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x369394: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x369394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x369398: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x369398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36939c: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x36939cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3693a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3693a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3693a4: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x3693a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3693a8u;
}
