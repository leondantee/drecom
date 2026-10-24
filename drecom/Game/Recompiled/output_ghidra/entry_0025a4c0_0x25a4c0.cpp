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

// Function: entry_0025a4c0
// Address: 0x25a4c0 - 0x25a520
void entry_0025a4c0_0x25a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a4c0_0x25a4c0");
#endif

    ctx->pc = 0x25a4c0u;

    // 0x25a4c0: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x25a4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25a4c4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x25a4c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25a4c8: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x25A4C8u;
    {
        const bool branch_taken_0x25a4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a4c8) {
            ctx->pc = 0x25A468u;
            return;
        }
    }
    ctx->pc = 0x25A4D0u;
    // 0x25a4d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x25a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25a4d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a4d8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a4dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x25a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25a4e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a4e4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x25a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25a4e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25a4ec: 0x83a821  addu        $s5, $a0, $v1
    ctx->pc = 0x25a4ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25a4f0: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x25a4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x25a4f4: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x25a4f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a4f8: 0x26b10003  addiu       $s1, $s5, 0x3
    ctx->pc = 0x25a4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x25a4fc: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x25a4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25a500: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x25a500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25a504: 0x26640003  addiu       $a0, $s3, 0x3
    ctx->pc = 0x25a504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x25a508: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x25a508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x25a50c: 0x839824  and         $s3, $a0, $v1
    ctx->pc = 0x25a50cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x25a510: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x25a510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x25a514: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a514u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a518: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25A518u;
    {
        const bool branch_taken_0x25a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a518) {
            ctx->pc = 0x25A578u;
            return;
        }
    }
    ctx->pc = 0x25A520u;
}
