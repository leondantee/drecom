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

// Function: entry_00210164
// Address: 0x210164 - 0x2101e4
void entry_00210164_0x210164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210164_0x210164");
#endif

    ctx->pc = 0x210164u;

    // 0x210164: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x210164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210168: 0x84861278  lh          $a2, 0x1278($a0)
    ctx->pc = 0x210168u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x21016c: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x21016cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x210170: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x210170u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x210174: 0x28810272  slti        $at, $a0, 0x272
    ctx->pc = 0x210174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)626) ? 1 : 0);
    // 0x210178: 0x1420005f  bnez        $at, . + 4 + (0x5F << 2)
    ctx->pc = 0x210178u;
    {
        const bool branch_taken_0x210178 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x210178) {
            ctx->pc = 0x2102F8u;
            return;
        }
    }
    ctx->pc = 0x210180u;
    // 0x210180: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x210180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210184: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x210184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x210188: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x210188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x21018c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21018cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x210190: 0x28610280  slti        $at, $v1, 0x280
    ctx->pc = 0x210190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x210194: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x210194u;
    {
        const bool branch_taken_0x210194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210194) {
            ctx->pc = 0x2102F8u;
            return;
        }
    }
    ctx->pc = 0x21019Cu;
    // 0x21019c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x21019cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x2101a0: 0x2483a4d0  addiu       $v1, $a0, -0x5B30
    ctx->pc = 0x2101a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943952));
    // 0x2101a4: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2101a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2101a8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2101a8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x38A4D0u));
    // 0x2101ac: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2101acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2101b0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2101b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x2101b4: 0x24c3a4e0  addiu       $v1, $a2, -0x5B20
    ctx->pc = 0x2101b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943968));
    // 0x2101b8: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2101b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2101bc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2101bcu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x38A4E0u));
    // 0x2101c0: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2101c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2101c4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2101c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x2101c8: 0x24c3a4f0  addiu       $v1, $a2, -0x5B10
    ctx->pc = 0x2101c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943984));
    // 0x2101cc: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2101ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2101d0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2101d0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x38A4F0u));
    // 0x2101d4: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2101d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2101d8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2101d8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2101dc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2101DCu;
    {
        const bool branch_taken_0x2101dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2101dc) {
            ctx->pc = 0x2102E8u;
            return;
        }
    }
    ctx->pc = 0x2101E4u;
}
