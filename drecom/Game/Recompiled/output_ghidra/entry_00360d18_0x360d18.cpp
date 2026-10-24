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

// Function: entry_00360d18
// Address: 0x360d18 - 0x360d28
void entry_00360d18_0x360d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360d18_0x360d18");
#endif

    ctx->pc = 0x360d18u;

    // 0x360d18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d1c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x360d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x360d20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x360d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x360d24: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x360d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x360d28u;
}
