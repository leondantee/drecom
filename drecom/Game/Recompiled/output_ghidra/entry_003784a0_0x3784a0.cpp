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

// Function: entry_003784a0
// Address: 0x3784a0 - 0x3784b0
void entry_003784a0_0x3784a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003784a0_0x3784a0");
#endif

    ctx->pc = 0x3784a0u;

    // 0x3784a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3784a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3784a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3784a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3784a8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3784a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3784ac: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3784acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x3784b0u;
}
