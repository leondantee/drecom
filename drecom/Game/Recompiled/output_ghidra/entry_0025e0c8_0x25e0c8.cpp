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

// Function: entry_0025e0c8
// Address: 0x25e0c8 - 0x25e170
void entry_0025e0c8_0x25e0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e0c8_0x25e0c8");
#endif

    ctx->pc = 0x25e0c8u;

    // 0x25e0c8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x25e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25e0cc: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x25e0ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e0d0: 0x8e120350  lw          $s2, 0x350($s0)
    ctx->pc = 0x25e0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x25e0d4: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x25e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x25e0d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25e0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e0dc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e0e0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x25e0e0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e0e4: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x25e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x25e0e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25e0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e0ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e0f0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25e0f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e0f4: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x25e0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e0f8: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x25e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x25e0fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e100: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e104: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25e104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e108: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e110: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25e110u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e114: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x25e114u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25e118: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e11c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e120: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e124: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25E124u;
    {
        const bool branch_taken_0x25e124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e124) {
            ctx->pc = 0x25E170u;
            return;
        }
    }
    ctx->pc = 0x25E12Cu;
    // 0x25e12c: 0x8e030354  lw          $v1, 0x354($s0)
    ctx->pc = 0x25e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25e130: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25E130u;
    {
        const bool branch_taken_0x25e130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e130) {
            ctx->pc = 0x25E170u;
            return;
        }
    }
    ctx->pc = 0x25E138u;
    // 0x25e138: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x25e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25e13c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e140: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25e140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e144: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e148: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25e148u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e14c: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x25e14cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e150: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x25e150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x25e154: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e158: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e15c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e160: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e168: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x25e168u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e16c: 0x0  nop
    ctx->pc = 0x25e16cu;
    // NOP
    ctx->pc = 0x25e170u;
}
