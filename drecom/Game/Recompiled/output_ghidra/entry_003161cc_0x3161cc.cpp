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

// Function: entry_003161cc
// Address: 0x3161cc - 0x3161e0
void entry_003161cc_0x3161cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003161cc_0x3161cc");
#endif

    ctx->pc = 0x3161ccu;

    // 0x3161cc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x3161ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3161d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3161d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3161d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3161d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3161d8: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x3161d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
    // 0x3161dc: 0x0  nop
    ctx->pc = 0x3161dcu;
    // NOP
    ctx->pc = 0x3161e0u;
}
