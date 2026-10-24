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

// Function: entry_00196a80
// Address: 0x196a80 - 0x196ac8
void entry_00196a80_0x196a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196a80_0x196a80");
#endif

    ctx->pc = 0x196a80u;

    // 0x196a80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x196a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196a84: 0x8c64008c  lw          $a0, 0x8C($v1)
    ctx->pc = 0x196a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x196a88: 0x108003fb  beqz        $a0, . + 4 + (0x3FB << 2)
    ctx->pc = 0x196A88u;
    {
        const bool branch_taken_0x196a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a88) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x196A90u;
    // 0x196a90: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x196a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196a94: 0x84a60096  lh          $a2, 0x96($a1)
    ctx->pc = 0x196a94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x196a98: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x196a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x196a9c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x196a9cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x196aa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x196aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196aa4: 0x10e50338  beq         $a3, $a1, . + 4 + (0x338 << 2)
    ctx->pc = 0x196AA4u;
    {
        const bool branch_taken_0x196aa4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x196aa4) {
            ctx->pc = 0x197788u;
            return;
        }
    }
    ctx->pc = 0x196AACu;
    // 0x196aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196ab0: 0x10e300de  beq         $a3, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x196AB0u;
    {
        const bool branch_taken_0x196ab0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x196ab0) {
            ctx->pc = 0x196E2Cu;
            return;
        }
    }
    ctx->pc = 0x196AB8u;
    // 0x196ab8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x196AB8u;
    {
        const bool branch_taken_0x196ab8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ab8) {
            ctx->pc = 0x196AC8u;
            return;
        }
    }
    ctx->pc = 0x196AC0u;
    // 0x196ac0: 0x100003ed  b           . + 4 + (0x3ED << 2)
    ctx->pc = 0x196AC0u;
    {
        const bool branch_taken_0x196ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ac0) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x196AC8u;
}
