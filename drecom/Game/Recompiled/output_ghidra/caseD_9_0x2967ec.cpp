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

// Function: caseD_9
// Address: 0x2967ec - 0x29685c
void caseD_9_0x2967ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x2967ec");
#endif

    ctx->pc = 0x2967ecu;

    // 0x2967ec: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x2967ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x2967f0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2967f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2967f4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2967f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x2967f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2967f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2967fc: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2967fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296800: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296804: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x296804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x296808: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29680c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x29680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296810: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296814: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296818: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296818u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x29681c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29681cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296820: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296824: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296828: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x29682c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x29682cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296830: 0x8ca469b4  lw          $a0, 0x69B4($a1)
    ctx->pc = 0x296830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27060)));
    // 0x296834: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296838: 0xaca369b4  sw          $v1, 0x69B4($a1)
    ctx->pc = 0x296838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27060), GPR_U32(ctx, 3));
    // 0x29683c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x29683cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x296840: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296844: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296848: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29684c: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x29684cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296850: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296854: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x296854u;
    {
        const bool branch_taken_0x296854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296854) {
            ctx->pc = 0x296978u;
            return;
        }
    }
    ctx->pc = 0x29685Cu;
}
