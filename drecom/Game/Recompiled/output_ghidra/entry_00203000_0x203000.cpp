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

// Function: entry_00203000
// Address: 0x203000 - 0x203010
void entry_00203000_0x203000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203000_0x203000");
#endif

    ctx->pc = 0x203000u;

    // 0x203000: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x203000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203004: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x203004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x203008: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x203008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x20300c: 0x0  nop
    ctx->pc = 0x20300cu;
    // NOP
    ctx->pc = 0x203010u;
}
