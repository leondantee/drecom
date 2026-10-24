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

// Function: entry_001556d8
// Address: 0x1556d8 - 0x1556f8
void entry_001556d8_0x1556d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001556d8_0x1556d8");
#endif

    ctx->pc = 0x1556d8u;

    // 0x1556d8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1556d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1556dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1556dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1556e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1556e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1556E4u;
    {
        const bool branch_taken_0x1556e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1556e4) {
            ctx->pc = 0x1556F8u;
            return;
        }
    }
    ctx->pc = 0x1556ECu;
    // 0x1556ec: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1556ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1556f0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1556F0u;
    {
        const bool branch_taken_0x1556f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556f0) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x1556F8u;
}
