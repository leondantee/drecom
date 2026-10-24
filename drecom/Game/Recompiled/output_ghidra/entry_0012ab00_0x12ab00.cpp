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

// Function: entry_0012ab00
// Address: 0x12ab00 - 0x12ab14
void entry_0012ab00_0x12ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ab00_0x12ab00");
#endif

    ctx->pc = 0x12ab00u;

    // 0x12ab00: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12ab00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12ab04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab08: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12ab08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12ab0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ab10: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12ab10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12ab14u;
}
