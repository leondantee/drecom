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

// Function: entry_0016f460
// Address: 0x16f460 - 0x16f478
void entry_0016f460_0x16f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f460_0x16f460");
#endif

    ctx->pc = 0x16f460u;

    // 0x16f460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f464: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x16f464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x16f468: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x16f468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f46c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x16f46cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f470: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x16f470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x16f474: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16f478u;
}
