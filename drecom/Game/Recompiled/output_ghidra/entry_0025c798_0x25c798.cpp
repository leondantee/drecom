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

// Function: entry_0025c798
// Address: 0x25c798 - 0x25c840
void entry_0025c798_0x25c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c798_0x25c798");
#endif

    ctx->pc = 0x25c798u;

    // 0x25c798: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c79c: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x25c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x25c7a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x25c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x25c7a4: 0x90760000  lbu         $s6, 0x0($v1)
    ctx->pc = 0x25c7a4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c7a8: 0x32d700ff  andi        $s7, $s6, 0xFF
    ctx->pc = 0x25c7a8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25c7ac: 0x32e3003f  andi        $v1, $s7, 0x3F
    ctx->pc = 0x25c7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)63);
    // 0x25c7b0: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25c7b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25c7b4: 0x323400ff  andi        $s4, $s1, 0xFF
    ctx->pc = 0x25c7b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25c7b8: 0xafb4015c  sw          $s4, 0x15C($sp)
    ctx->pc = 0x25c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 20));
    // 0x25c7bc: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c7c0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x25c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25c7c4: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x25c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x25c7c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25c7cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25c7d0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x25c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25c7d4: 0x8cb002d0  lw          $s0, 0x2D0($a1)
    ctx->pc = 0x25c7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25c7d8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x25c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25c7dc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25c7dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25c7e0: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25c7e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25c7e4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c7e8: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25c7e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25c7ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25c7f0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25c7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25c7f4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x25C7F4u;
    {
        const bool branch_taken_0x25c7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c7f4) {
            ctx->pc = 0x25C840u;
            return;
        }
    }
    ctx->pc = 0x25C7FCu;
    // 0x25c7fc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c800: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x25c804: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x25C804u;
    {
        const bool branch_taken_0x25c804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c804) {
            ctx->pc = 0x25C840u;
            return;
        }
    }
    ctx->pc = 0x25C80Cu;
    // 0x25c80c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c810: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x25c814: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x25c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x25c818: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x25c818u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c81c: 0x323400ff  andi        $s4, $s1, 0xFF
    ctx->pc = 0x25c81cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25c820: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c824: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x25c824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25c828: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x25c828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x25c82c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25c830: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25c830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25c834: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x25c834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25c838: 0x8cb202d0  lw          $s2, 0x2D0($a1)
    ctx->pc = 0x25c838u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25c83c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x25c83cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    ctx->pc = 0x25c840u;
}
