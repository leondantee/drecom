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

// Function: entry_0015b39c
// Address: 0x15b39c - 0x15b3a8
void entry_0015b39c_0x15b39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b39c_0x15b39c");
#endif

    ctx->pc = 0x15b39cu;

    // 0x15b39c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
    // 0x15b3a0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b3a4: 0x906511ec  lbu         $a1, 0x11EC($v1)
    ctx->pc = 0x15b3a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    ctx->pc = 0x15b3a8u;
}
