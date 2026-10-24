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

// Function: entry_001c8724
// Address: 0x1c8724 - 0x1c873c
void entry_001c8724_0x1c8724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8724_0x1c8724");
#endif

    ctx->pc = 0x1c8724u;

    // 0x1c8724: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8728: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1c8728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1c872c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c872cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8730: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8734: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c8734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c8738: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x1c8738u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c873cu;
}
