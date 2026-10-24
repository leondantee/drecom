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

// Function: entry_00302380
// Address: 0x302380 - 0x302398
void entry_00302380_0x302380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302380_0x302380");
#endif

    ctx->pc = 0x302380u;

    // 0x302380: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302384: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x302384u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x302388: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x302388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30238c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30238cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302394: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x302394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x302398u;
}
