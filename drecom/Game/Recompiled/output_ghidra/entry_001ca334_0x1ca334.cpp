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

// Function: entry_001ca334
// Address: 0x1ca334 - 0x1ca34c
void entry_001ca334_0x1ca334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca334_0x1ca334");
#endif

    ctx->pc = 0x1ca334u;

    // 0x1ca334: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca338: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ca338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca33c: 0x3c027fbf  lui         $v0, 0x7FBF
    ctx->pc = 0x1ca33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32703 << 16));
    // 0x1ca340: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ca340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca344: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ca344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ca348: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ca348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1ca34cu;
}
