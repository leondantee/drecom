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

// Function: entry_00196104
// Address: 0x196104 - 0x196128
void entry_00196104_0x196104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196104_0x196104");
#endif

    ctx->pc = 0x196104u;

    // 0x196104: 0x8fb600c0  lw          $s6, 0xC0($sp)
    ctx->pc = 0x196104u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x196108: 0x8e1e0000  lw          $fp, 0x0($s0)
    ctx->pc = 0x196108u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19610c: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x19610cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x196110: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x196110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x196114: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x196114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196118: 0x8e750038  lw          $s5, 0x38($s3)
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x19611c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19611cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196120: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x196120u;
    {
        const bool branch_taken_0x196120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196120) {
            ctx->pc = 0x196188u;
            return;
        }
    }
    ctx->pc = 0x196128u;
}
