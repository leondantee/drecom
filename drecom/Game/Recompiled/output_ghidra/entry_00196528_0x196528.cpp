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

// Function: entry_00196528
// Address: 0x196528 - 0x196570
void entry_00196528_0x196528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196528_0x196528");
#endif

    ctx->pc = 0x196528u;

    // 0x196528: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19652c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x19652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x196530: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x196530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x196534: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x196534u;
    {
        const bool branch_taken_0x196534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196534) {
            ctx->pc = 0x1964B8u;
            return;
        }
    }
    ctx->pc = 0x19653Cu;
    // 0x19653c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196540: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x196540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x196544: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x196544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x196548: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x196548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19654c: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x19654cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196550: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x196550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x196554: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x196554u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x196558: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x196558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19655c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19655Cu;
    {
        const bool branch_taken_0x19655c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19655c) {
            ctx->pc = 0x1965B0u;
            return;
        }
    }
    ctx->pc = 0x196564u;
    // 0x196564: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x196564u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196568: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x196568u;
    {
        const bool branch_taken_0x196568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196568) {
            ctx->pc = 0x1965A0u;
            return;
        }
    }
    ctx->pc = 0x196570u;
}
