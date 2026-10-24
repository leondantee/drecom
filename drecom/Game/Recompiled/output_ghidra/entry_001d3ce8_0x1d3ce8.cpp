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

// Function: entry_001d3ce8
// Address: 0x1d3ce8 - 0x1d3d24
void entry_001d3ce8_0x1d3ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3ce8_0x1d3ce8");
#endif

    ctx->pc = 0x1d3ce8u;

    // 0x1d3ce8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3cec: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x1d3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x1d3cf0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d3cf4: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d3cf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d3cf8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3cfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d3cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d3d00: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3d04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3d08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d3d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3d0c: 0xa7a2015e  sh          $v0, 0x15E($sp)
    ctx->pc = 0x1d3d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3d10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d3d14: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3d18: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3d1c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3d20: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1d3d20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d3d24u;
}
