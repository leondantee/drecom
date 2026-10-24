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

// Function: entry_00214050
// Address: 0x214050 - 0x214060
void entry_00214050_0x214050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214050_0x214050");
#endif

    ctx->pc = 0x214050u;

    // 0x214050: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x214050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x214054: 0x8c449e68  lw          $a0, -0x6198($v0)
    ctx->pc = 0x214054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942312)));
    // 0x214058: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x214058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x21405c: 0x0  nop
    ctx->pc = 0x21405cu;
    // NOP
    ctx->pc = 0x214060u;
}
