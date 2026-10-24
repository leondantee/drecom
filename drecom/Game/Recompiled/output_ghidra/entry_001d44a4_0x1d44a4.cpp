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

// Function: entry_001d44a4
// Address: 0x1d44a4 - 0x1d44e0
void entry_001d44a4_0x1d44a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d44a4_0x1d44a4");
#endif

    ctx->pc = 0x1d44a4u;

    // 0x1d44a4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1d44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d44a8: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x1d44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x1d44ac: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d44b0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d44b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d44b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d44b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d44b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d44b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d44bc: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d44c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d44c4: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x1d44c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d44c8: 0xa7b4015e  sh          $s4, 0x15E($sp)
    ctx->pc = 0x1d44c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 20));
    // 0x1d44cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d44ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d44d0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d44d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d44d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d44d8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d44dc: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1d44dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d44e0u;
}
