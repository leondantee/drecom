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

// Function: entry_001e9dc4
// Address: 0x1e9dc4 - 0x1e9de0
void entry_001e9dc4_0x1e9dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9dc4_0x1e9dc4");
#endif

    ctx->pc = 0x1e9dc4u;

    // 0x1e9dc4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e9dc8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e9dcc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e9dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9dd0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9dd4: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x1e9dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1e9dd8: 0xacc50064  sw          $a1, 0x64($a2)
    ctx->pc = 0x1e9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 5));
    // 0x1e9ddc: 0x0  nop
    ctx->pc = 0x1e9ddcu;
    // NOP
    ctx->pc = 0x1e9de0u;
}
