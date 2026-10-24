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

// Function: caseD_0
// Address: 0x3312e0 - 0x331330
void caseD_0_0x3312e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x3312e0");
#endif

    ctx->pc = 0x3312e0u;

    // 0x3312e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3312e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3312e4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3312e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3312e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3312e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3312ec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3312ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3312f0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3312f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3312f4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x3312f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3312f8: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x3312f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3312fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3312fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x331300: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x331300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x331304: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x331308: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x331308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33130c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x33130cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331310: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x331310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x331314: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x331314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x331318: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x331318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33131c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x33131cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x331320: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x331320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x331324: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x331324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x331328: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x331328u;
    {
        const bool branch_taken_0x331328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331328) {
            ctx->pc = 0x331380u;
            return;
        }
    }
    ctx->pc = 0x331330u;
}
