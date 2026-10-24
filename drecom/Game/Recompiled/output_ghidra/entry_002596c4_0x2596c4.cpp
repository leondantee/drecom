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

// Function: entry_002596c4
// Address: 0x2596c4 - 0x2596d0
void entry_002596c4_0x2596c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002596c4_0x2596c4");
#endif

    ctx->pc = 0x2596c4u;

    // 0x2596c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2596c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2596c8: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x2596c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2596cc: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2596ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x2596d0u;
}
