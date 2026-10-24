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

// Function: caseD_6
// Address: 0x2968ec - 0x296934
void caseD_6_0x2968ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2968ec");
#endif

    ctx->pc = 0x2968ecu;

    // 0x2968ec: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x2968ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x2968f0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2968f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2968f4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2968f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x2968f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2968f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2968fc: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2968fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296900: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296904: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x296904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x296908: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29690c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x29690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296910: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296914: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296918: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x29691c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296920: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296928: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x29692c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x29692Cu;
    {
        const bool branch_taken_0x29692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29692c) {
            ctx->pc = 0x296978u;
            return;
        }
    }
    ctx->pc = 0x296934u;
}
