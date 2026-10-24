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

// Function: caseD_1
// Address: 0x20bab4 - 0x20bac4
void caseD_1_0x20bab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x20bab4");
#endif

    ctx->pc = 0x20bab4u;

    // 0x20bab4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bab8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20bab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20babc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20bac0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20bac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20bac4u;
}
