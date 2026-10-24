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

// Function: entry_0025b76c
// Address: 0x25b76c - 0x25b818
void entry_0025b76c_0x25b76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b76c_0x25b76c");
#endif

    ctx->pc = 0x25b76cu;

    // 0x25b76c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b770: 0x8c850350  lw          $a1, 0x350($a0)
    ctx->pc = 0x25b770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x25b774: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x25b774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x25b778: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25b778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b77c: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x25b77cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b780: 0x32a3003f  andi        $v1, $s5, 0x3F
    ctx->pc = 0x25b780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)63);
    // 0x25b784: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25b784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b788: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x25b788u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25b78c: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x25b78cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25b790: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25b790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b794: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25b794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25b798: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x25b798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x25b79c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25b7a0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25b7a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25b7a8: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x25b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x25b7ac: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x25b7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b7b0: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x25b7b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x25b7b4: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25b7b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b7b8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b7bc: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x25b7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
    // 0x25b7c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25b7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25b7c4: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x25b7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x25b7c8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25B7C8u;
    {
        const bool branch_taken_0x25b7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b7c8) {
            ctx->pc = 0x25B818u;
            return;
        }
    }
    ctx->pc = 0x25B7D0u;
    // 0x25b7d0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b7d4: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x25b7d8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25B7D8u;
    {
        const bool branch_taken_0x25b7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b7d8) {
            ctx->pc = 0x25B818u;
            return;
        }
    }
    ctx->pc = 0x25B7E0u;
    // 0x25b7e0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b7e4: 0x8c640354  lw          $a0, 0x354($v1)
    ctx->pc = 0x25b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x25b7e8: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x25b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x25b7ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25b7ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b7f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b7f4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x25b7f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25b7f8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b7fc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25b800: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x25b800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25b804: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25b804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25b808: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25b80c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25b810: 0x8ca502d0  lw          $a1, 0x2D0($a1)
    ctx->pc = 0x25b810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25b814: 0xa49021  addu        $s2, $a1, $a0
    ctx->pc = 0x25b814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->pc = 0x25b818u;
}
