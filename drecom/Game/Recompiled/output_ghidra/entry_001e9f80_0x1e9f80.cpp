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

// Function: entry_001e9f80
// Address: 0x1e9f80 - 0x1e9fa0
void entry_001e9f80_0x1e9f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9f80_0x1e9f80");
#endif

    ctx->pc = 0x1e9f80u;

    // 0x1e9f80: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9f84: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1e9f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1e9f88: 0xa4800094  sh          $zero, 0x94($a0)
    ctx->pc = 0x1e9f88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e9f8c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9f90: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1e9f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9f94: 0x84a40096  lh          $a0, 0x96($a1)
    ctx->pc = 0x1e9f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x1e9f98: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1e9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e9f9c: 0xa4a30096  sh          $v1, 0x96($a1)
    ctx->pc = 0x1e9f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 150), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1e9fa0u;
}
