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

// Function: entry_001556f8
// Address: 0x1556f8 - 0x15573c
void entry_001556f8_0x1556f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001556f8_0x1556f8");
#endif

    ctx->pc = 0x1556f8u;

    // 0x1556f8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1556f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1556fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1556fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155700: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x155700u;
    {
        const bool branch_taken_0x155700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155700) {
            ctx->pc = 0x15573Cu;
            return;
        }
    }
    ctx->pc = 0x155708u;
    // 0x155708: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x155708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x15570c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15570cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155714: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155714u;
    {
        const bool branch_taken_0x155714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155714) {
            ctx->pc = 0x15573Cu;
            return;
        }
    }
    ctx->pc = 0x15571Cu;
    // 0x15571c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x15571cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155720: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x155720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155728: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155728u;
    {
        const bool branch_taken_0x155728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155728) {
            ctx->pc = 0x15573Cu;
            return;
        }
    }
    ctx->pc = 0x155730u;
    // 0x155730: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155730u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155734: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x155734u;
    {
        const bool branch_taken_0x155734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155734) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x15573Cu;
}
