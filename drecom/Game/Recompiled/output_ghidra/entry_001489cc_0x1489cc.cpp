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

// Function: entry_001489cc
// Address: 0x1489cc - 0x1489e8
void entry_001489cc_0x1489cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001489cc_0x1489cc");
#endif

    ctx->pc = 0x1489ccu;

    // 0x1489cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1489ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1489d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1489d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1489d4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1489d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1489d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1489d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1489dc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1489dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1489e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1489e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1489e4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1489e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1489e8u;
}
