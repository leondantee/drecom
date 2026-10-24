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

// Function: entry_00379420
// Address: 0x379420 - 0x37942c
void entry_00379420_0x379420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379420_0x379420");
#endif

    ctx->pc = 0x379420u;

    // 0x379420: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x379420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x379424: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x379424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x379428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x379428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x37942cu;
}
