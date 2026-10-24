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

// Function: entry_001d3c94
// Address: 0x1d3c94 - 0x1d3ce8
void entry_001d3c94_0x1d3c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3c94_0x1d3c94");
#endif

    ctx->pc = 0x1d3c94u;

    // 0x1d3c94: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1d3c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1d3c98: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1d3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1d3c9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3C9Cu;
    {
        const bool branch_taken_0x1d3c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c9c) {
            ctx->pc = 0x1D3CE8u;
            return;
        }
    }
    ctx->pc = 0x1D3CA4u;
    // 0x1d3ca4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d3ca8: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x1d3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x1d3cac: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3cb0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d3cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d3cb4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3cb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d3cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d3cbc: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3cc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3cc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d3cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3cc8: 0xa7a2015e  sh          $v0, 0x15E($sp)
    ctx->pc = 0x1d3cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3ccc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d3cd0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3cd4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3cd8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d3cdc: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1d3cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d3ce0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3CE0u;
    {
        const bool branch_taken_0x1d3ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ce0) {
            ctx->pc = 0x1D3D24u;
            return;
        }
    }
    ctx->pc = 0x1D3CE8u;
}
