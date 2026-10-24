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

// Function: entry_001da850
// Address: 0x1da850 - 0x1da8bc
void entry_001da850_0x1da850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da850_0x1da850");
#endif

    ctx->pc = 0x1da850u;

    // 0x1da850: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1da850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1da854: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1da854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1da858: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1da858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1da85c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1da85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1da860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da864: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x1da864u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1da868: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1da868u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1da86c: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x1da86cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1da870: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1da870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1da874: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da878: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1da878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1da87c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1da87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1da880: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1da880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1da884: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1da884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1da888: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1da888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1da88c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1da88cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1da890: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da894: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1da894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1da898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da89c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1da89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1da8a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA8A0u;
    {
        const bool branch_taken_0x1da8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8a0) {
            ctx->pc = 0x1DA8BCu;
            return;
        }
    }
    ctx->pc = 0x1DA8A8u;
    // 0x1da8a8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1da8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1da8ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da8b0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da8b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DA8B4u;
    {
        const bool branch_taken_0x1da8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8b4) {
            ctx->pc = 0x1DA8F8u;
            return;
        }
    }
    ctx->pc = 0x1DA8BCu;
}
