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

// Function: entry_0025bfb0
// Address: 0x25bfb0 - 0x25c060
void entry_0025bfb0_0x25bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025bfb0_0x25bfb0");
#endif

    ctx->pc = 0x25bfb0u;

    // 0x25bfb0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25bfb4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25bfb4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25bfb8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bfbc: 0x8c620350  lw          $v0, 0x350($v1)
    ctx->pc = 0x25bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x25bfc0: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x25bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x25bfc4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x25bfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25bfc8: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x25bfc8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25bfcc: 0x32a2003f  andi        $v0, $s5, 0x3F
    ctx->pc = 0x25bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)63);
    // 0x25bfd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25bfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25bfd4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25bfd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25bfd8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bfdc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25bfe0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25bfe4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x25bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25bfe8: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x25bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25bfec: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x25bfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25bff0: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x25bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25bff4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x25bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25bff8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25bff8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25bffc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25bffcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25c000: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c004: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25c004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25c008: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25c00c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25c00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25c010: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25C010u;
    {
        const bool branch_taken_0x25c010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c010) {
            ctx->pc = 0x25C060u;
            return;
        }
    }
    ctx->pc = 0x25C018u;
    // 0x25c018: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c01c: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x25c020: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25C020u;
    {
        const bool branch_taken_0x25c020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c020) {
            ctx->pc = 0x25C060u;
            return;
        }
    }
    ctx->pc = 0x25C028u;
    // 0x25c028: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c02c: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x25c030: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25c034: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25c034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c038: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25c038u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25c03c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c040: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25c040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25c044: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x25c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25c048: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25c048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c04c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c050: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x25c050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25c054: 0x8ca202d0  lw          $v0, 0x2D0($a1)
    ctx->pc = 0x25c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25c058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25c05c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25c05cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x25c060u;
}
