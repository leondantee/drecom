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

// Function: entry_001d4e94
// Address: 0x1d4e94 - 0x1d4ecc
void entry_001d4e94_0x1d4e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e94_0x1d4e94");
#endif

    ctx->pc = 0x1d4e94u;

    // 0x1d4e94: 0x8fbe0160  lw          $fp, 0x160($sp)
    ctx->pc = 0x1d4e94u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d4e98: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d4e9c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1d4e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1d4ea0: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x1d4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1d4ea4: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d4ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d4ea8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d4ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4eac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4eb0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d4eb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4eb8: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1d4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1d4ebc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4ec0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d4ec4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d4ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4ec8: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x1d4ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d4eccu;
}
