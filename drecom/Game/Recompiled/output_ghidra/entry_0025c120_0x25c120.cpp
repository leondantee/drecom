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

// Function: entry_0025c120
// Address: 0x25c120 - 0x25c1d0
void entry_0025c120_0x25c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c120_0x25c120");
#endif

    ctx->pc = 0x25c120u;

    // 0x25c120: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25c124: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25c124u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25c128: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c12c: 0x8c430350  lw          $v1, 0x350($v0)
    ctx->pc = 0x25c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x25c130: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x25c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x25c134: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25c134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c138: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x25c138u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25c13c: 0x32a2003f  andi        $v0, $s5, 0x3F
    ctx->pc = 0x25c13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)63);
    // 0x25c140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25c140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25c144: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25c144u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25c148: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c14c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25c150: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x25c150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25c154: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x25c154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25c158: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x25c158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25c15c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x25c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x25c160: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25c164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25c164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c168: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25c168u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25c16c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25c16cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25c170: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c174: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x25c174u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x25c178: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25c17c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25c17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25c180: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25C180u;
    {
        const bool branch_taken_0x25c180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c180) {
            ctx->pc = 0x25C1D0u;
            return;
        }
    }
    ctx->pc = 0x25C188u;
    // 0x25c188: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c18c: 0x8c430354  lw          $v1, 0x354($v0)
    ctx->pc = 0x25c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
    // 0x25c190: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25C190u;
    {
        const bool branch_taken_0x25c190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c190) {
            ctx->pc = 0x25C1D0u;
            return;
        }
    }
    ctx->pc = 0x25C198u;
    // 0x25c198: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c19c: 0x8c420354  lw          $v0, 0x354($v0)
    ctx->pc = 0x25c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
    // 0x25c1a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25c1a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25c1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c1a8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25c1a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25c1ac: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c1b0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25c1b4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x25c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25c1b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c1bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c1c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25c1c4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x25c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x25c1c8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x25c1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c1cc: 0x0  nop
    ctx->pc = 0x25c1ccu;
    // NOP
    ctx->pc = 0x25c1d0u;
}
