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

// Function: entry_001c1780
// Address: 0x1c1780 - 0x1c1800
void entry_001c1780_0x1c1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1780_0x1c1780");
#endif

    ctx->pc = 0x1c1780u;

    // 0x1c1780: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1784: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c1784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c1788: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1c1788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
    // 0x1c178c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c1790: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c1790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c1794: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c1794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1c1798: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c179c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c17a0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1c17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1c17a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c17a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c17a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c17a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c17ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c17acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1c17b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c17b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c17b8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c17bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c17bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c17c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C17C0u;
    {
        const bool branch_taken_0x1c17c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c17c0) {
            ctx->pc = 0x1C1800u;
            return;
        }
    }
    ctx->pc = 0x1C17C8u;
    // 0x1c17c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c17cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c17d0: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1c17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1c17d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c17d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c17d8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1c17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1c17dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c17dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c17e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c17e4: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1c17e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c17e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c17ec: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1c17ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c17f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c17f4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c17f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c17f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C17F8u;
    {
        const bool branch_taken_0x1c17f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c17f8) {
            ctx->pc = 0x1C1840u;
            return;
        }
    }
    ctx->pc = 0x1C1800u;
}
