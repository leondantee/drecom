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

// Function: entry_0033c768
// Address: 0x33c768 - 0x33c7a0
void entry_0033c768_0x33c768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c768_0x33c768");
#endif

    ctx->pc = 0x33c768u;

    // 0x33c768: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33c768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33c76c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33c76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c770: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x33c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33c774: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x33C774u;
    {
        const bool branch_taken_0x33c774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33c774) {
            ctx->pc = 0x33C9CCu;
            return;
        }
    }
    ctx->pc = 0x33C77Cu;
    // 0x33c77c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33c780: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x33c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x33c784: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c784u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3EDCE0u));
    // 0x33c788: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x33c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33c78c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c790: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x33c790u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c794: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33c794u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c798: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x33C798u;
    {
        const bool branch_taken_0x33c798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c798) {
            ctx->pc = 0x33C970u;
            return;
        }
    }
    ctx->pc = 0x33C7A0u;
}
