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

// Function: entry_00251bc4
// Address: 0x251bc4 - 0x251bd8
void entry_00251bc4_0x251bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251bc4_0x251bc4");
#endif

    ctx->pc = 0x251bc4u;

    // 0x251bc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251bcc: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x251bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x251bd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x251bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x251bd8u;
}
