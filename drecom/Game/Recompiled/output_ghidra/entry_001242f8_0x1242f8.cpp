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

// Function: entry_001242f8
// Address: 0x1242f8 - 0x12434c
void entry_001242f8_0x1242f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001242f8_0x1242f8");
#endif

    ctx->pc = 0x1242f8u;

    // 0x1242f8: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x1242f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1242fc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1242fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x124300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x124304: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x124304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x124308: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x124308u;
    {
        const bool branch_taken_0x124308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124308) {
            ctx->pc = 0x12434Cu;
            return;
        }
    }
    ctx->pc = 0x124310u;
    // 0x124310: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124314: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x124314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124318: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x124318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12431c: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x12431cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x124320: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x124320u;
    {
        const bool branch_taken_0x124320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124320) {
            ctx->pc = 0x12434Cu;
            return;
        }
    }
    ctx->pc = 0x124328u;
    // 0x124328: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12432c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x12432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x124330: 0xa08010e0  sb          $zero, 0x10E0($a0)
    ctx->pc = 0x124330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4320), (uint8_t)GPR_U32(ctx, 0));
    // 0x124334: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124338: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x124338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x12433c: 0xa0601050  sb          $zero, 0x1050($v1)
    ctx->pc = 0x12433cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4176), (uint8_t)GPR_U32(ctx, 0));
    // 0x124340: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124344: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x124344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x124348: 0xa0401170  sb          $zero, 0x1170($v0)
    ctx->pc = 0x124348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4464), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12434cu;
}
