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

// Function: entry_001919b8
// Address: 0x1919b8 - 0x191a1c
void entry_001919b8_0x1919b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001919b8_0x1919b8");
#endif

    ctx->pc = 0x1919b8u;

    // 0x1919b8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1919b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1919bc: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1919bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1919c0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1919c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1919c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1919c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1919c8: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x1919c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1919cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1919ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1919d0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1919d4: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1919d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1919d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1919dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1919dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1919e0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1919e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1919e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1919e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1919e8: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x1919e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x1919ec: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1919ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1919f0: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x1919f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x1919f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1919f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1919f8: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x1919f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x1919fc: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x1919fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x191a00: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x191a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x191a04: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x191a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191a08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191A08u;
    {
        const bool branch_taken_0x191a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191a08) {
            ctx->pc = 0x191A1Cu;
            return;
        }
    }
    ctx->pc = 0x191A10u;
    // 0x191a10: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191a10u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191a14: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x191A14u;
    {
        const bool branch_taken_0x191a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a14) {
            ctx->pc = 0x191AB8u;
            return;
        }
    }
    ctx->pc = 0x191A1Cu;
}
