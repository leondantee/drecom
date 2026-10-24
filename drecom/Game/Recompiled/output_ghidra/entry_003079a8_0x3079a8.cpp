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

// Function: entry_003079a8
// Address: 0x3079a8 - 0x307a10
void entry_003079a8_0x3079a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003079a8_0x3079a8");
#endif

    ctx->pc = 0x3079a8u;

    // 0x3079a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3079a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079ac: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x3079acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x3079b0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x3079b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3079b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3079b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3079b8: 0x28610320  slti        $at, $v1, 0x320
    ctx->pc = 0x3079b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)800) ? 1 : 0);
    // 0x3079bc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x3079BCu;
    {
        const bool branch_taken_0x3079bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3079bc) {
            ctx->pc = 0x307A10u;
            return;
        }
    }
    ctx->pc = 0x3079C4u;
    // 0x3079c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3079c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079c8: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3079c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3079cc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3079ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3079d0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3079D0u;
    {
        const bool branch_taken_0x3079d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3079d0) {
            ctx->pc = 0x307A10u;
            return;
        }
    }
    ctx->pc = 0x3079D8u;
    // 0x3079d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3079d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079dc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3079dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3079e0: 0x247307e0  addiu       $s3, $v1, 0x7E0
    ctx->pc = 0x3079e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x3079e4: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x3079e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3079e8: 0x8e750034  lw          $s5, 0x34($s3)
    ctx->pc = 0x3079e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3079ec: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x3079ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x3079f0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3079f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3079f4: 0xaea30024  sw          $v1, 0x24($s5)
    ctx->pc = 0x3079f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 3));
    // 0x3079f8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3079f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079fc: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x3079fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x307a00: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x307a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x307a04: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x307a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x307a08: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a0c: 0xa46011f2  sh          $zero, 0x11F2($v1)
    ctx->pc = 0x307a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4594), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x307a10u;
}
