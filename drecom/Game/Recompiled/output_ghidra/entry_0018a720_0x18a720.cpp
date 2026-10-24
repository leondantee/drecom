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

// Function: entry_0018a720
// Address: 0x18a720 - 0x18a740
void entry_0018a720_0x18a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a720_0x18a720");
#endif

    ctx->pc = 0x18a720u;

    // 0x18a720: 0xae000b18  sw          $zero, 0xB18($s0)
    ctx->pc = 0x18a720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 0));
    // 0x18a724: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18a728: 0xae02036c  sw          $v0, 0x36C($s0)
    ctx->pc = 0x18a728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
    // 0x18a72c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x18a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x18a730: 0xae020370  sw          $v0, 0x370($s0)
    ctx->pc = 0x18a730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x18a734: 0x26100b30  addiu       $s0, $s0, 0xB30
    ctx->pc = 0x18a734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
    // 0x18a738: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18a738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18a73c: 0x0  nop
    ctx->pc = 0x18a73cu;
    // NOP
    ctx->pc = 0x18a740u;
}
