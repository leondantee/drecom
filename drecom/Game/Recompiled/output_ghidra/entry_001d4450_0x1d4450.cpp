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

// Function: entry_001d4450
// Address: 0x1d4450 - 0x1d44a4
void entry_001d4450_0x1d4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4450_0x1d4450");
#endif

    ctx->pc = 0x1d4450u;

    // 0x1d4450: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1d4450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1d4454: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1d4458: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D4458u;
    {
        const bool branch_taken_0x1d4458 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4458) {
            ctx->pc = 0x1D44A4u;
            return;
        }
    }
    ctx->pc = 0x1D4460u;
    // 0x1d4460: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x1d4460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d4464: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x1d4464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x1d4468: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d4468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d446c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d446cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d4470: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d4470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4474: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4478: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d4478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d447c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d447cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4480: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d4480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4484: 0xa7a2015e  sh          $v0, 0x15E($sp)
    ctx->pc = 0x1d4484u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d4488: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d448c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d448cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d4490: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1d4490u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4494: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d4494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d4498: 0xa4530006  sh          $s3, 0x6($v0)
    ctx->pc = 0x1d4498u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 19));
    // 0x1d449c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D449Cu;
    {
        const bool branch_taken_0x1d449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d449c) {
            ctx->pc = 0x1D44E0u;
            return;
        }
    }
    ctx->pc = 0x1D44A4u;
}
