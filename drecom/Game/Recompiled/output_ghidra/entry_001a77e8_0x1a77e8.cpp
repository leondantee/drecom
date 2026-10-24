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

// Function: entry_001a77e8
// Address: 0x1a77e8 - 0x1a787c
void entry_001a77e8_0x1a77e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a77e8_0x1a77e8");
#endif

    ctx->pc = 0x1a77e8u;

    // 0x1a77e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a77e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a77ec: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a77ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a77f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a77f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a77f8: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x1a77f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a77fc: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1a77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1a7800: 0xdc4600b0  ld          $a2, 0xB0($v0)
    ctx->pc = 0x1a7800u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1a7804: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x1a7804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1a7808: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x1a7808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
    // 0x1a780c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x1a780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x1a7810: 0x34643fff  ori         $a0, $v1, 0x3FFF
    ctx->pc = 0x1a7810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x1a7814: 0xc49824  and         $s3, $a2, $a0
    ctx->pc = 0x1a7814u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1a7818: 0x2651825  or          $v1, $s3, $a1
    ctx->pc = 0x1a7818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    // 0x1a781c: 0xfc4300b0  sd          $v1, 0xB0($v0)
    ctx->pc = 0x1a781cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 176), GPR_U64(ctx, 3));
    // 0x1a7820: 0x9203002e  lbu         $v1, 0x2E($s0)
    ctx->pc = 0x1a7820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x1a7824: 0x3167c  dsll32      $v0, $v1, 25
    ctx->pc = 0x1a7824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 25));
    // 0x1a7828: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a7828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a782c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x1a782cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a7830: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x1a7830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a7834: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7838: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a783c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7840: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7844: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a7844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7848: 0x94a300b2  lhu         $v1, 0xB2($a1)
    ctx->pc = 0x1a7848u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 178)));
    // 0x1a784c: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x1a784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1a7850: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a7850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7854: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x1a7854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1a7858: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a7858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a785c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1a785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a7860: 0xa4a200b2  sh          $v0, 0xB2($a1)
    ctx->pc = 0x1a7860u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 178), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a7864: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a7864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a7868: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7868u;
    {
        const bool branch_taken_0x1a7868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7868) {
            ctx->pc = 0x1A787Cu;
            return;
        }
    }
    ctx->pc = 0x1A7870u;
    // 0x1a7870: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x1a7870u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7874u;
    {
        const bool branch_taken_0x1a7874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7874) {
            ctx->pc = 0x1A7880u;
            return;
        }
    }
    ctx->pc = 0x1A787Cu;
}
