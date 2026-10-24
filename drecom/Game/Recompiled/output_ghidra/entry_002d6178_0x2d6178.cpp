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

// Function: entry_002d6178
// Address: 0x2d6178 - 0x2d61e4
void entry_002d6178_0x2d6178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6178_0x2d6178");
#endif

    ctx->pc = 0x2d6178u;

    // 0x2d6178: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d617c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6180: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6184: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6188: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2d6188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2d618c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d618cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6190: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6194: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6198: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d619c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d61a0: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d61a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d61a4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d61a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d61a8: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d61a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d61ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61b0: 0xac601334  sw          $zero, 0x1334($v1)
    ctx->pc = 0x2d61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 0));
    // 0x2d61b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d61b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d61bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d61c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d61c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d61c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d61cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d61d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d61d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d61d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d61dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d61e4u;
}
