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

// Function: entry_0025cf40
// Address: 0x25cf40 - 0x25cff0
void entry_0025cf40_0x25cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025cf40_0x25cf40");
#endif

    ctx->pc = 0x25cf40u;

    // 0x25cf40: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25cf44: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25cf44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25cf48: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cf4c: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x25cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x25cf50: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x25cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x25cf54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25cf54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25cf58: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x25cf58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25cf5c: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x25cf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x25cf60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25cf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25cf64: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25cf64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25cf68: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x25cf68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cf6c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25cf70: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x25cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25cf74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25cf78: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25cf7c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x25cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25cf80: 0x8cc602d0  lw          $a2, 0x2D0($a2)
    ctx->pc = 0x25cf80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x25cf84: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25cf88: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x25cf88u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cf8c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25cf8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cf90: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cf94: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25cf94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25cf98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25cf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25cf9c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x25cf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x25cfa0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25CFA0u;
    {
        const bool branch_taken_0x25cfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cfa0) {
            ctx->pc = 0x25CFF0u;
            return;
        }
    }
    ctx->pc = 0x25CFA8u;
    // 0x25cfa8: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cfac: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x25cfb0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25CFB0u;
    {
        const bool branch_taken_0x25cfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cfb0) {
            ctx->pc = 0x25CFF0u;
            return;
        }
    }
    ctx->pc = 0x25CFB8u;
    // 0x25cfb8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cfbc: 0x8c430354  lw          $v1, 0x354($v0)
    ctx->pc = 0x25cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
    // 0x25cfc0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x25cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25cfc4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25cfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25cfc8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25cfc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25cfcc: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cfd0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25cfd4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x25cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25cfd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25cfdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25cfe0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x25cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25cfe4: 0x8ca502d0  lw          $a1, 0x2D0($a1)
    ctx->pc = 0x25cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25cfe8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x25cfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25cfec: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x25cfecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x25cff0u;
}
