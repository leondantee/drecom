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

// Function: entry_0012b344
// Address: 0x12b344 - 0x12b354
void entry_0012b344_0x12b344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b344_0x12b344");
#endif

    ctx->pc = 0x12b344u;

    // 0x12b344: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b348: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12b34c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b350: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12b354u;
}
