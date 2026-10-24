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

// Function: entry_002969f8
// Address: 0x2969f8 - 0x296a38
void entry_002969f8_0x2969f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002969f8_0x2969f8");
#endif

    ctx->pc = 0x2969f8u;

    // 0x2969f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2969f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2969fc: 0x8ca469b4  lw          $a0, 0x69B4($a1)
    ctx->pc = 0x2969fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27060)));
    // 0x296a00: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296a04: 0xaca369b4  sw          $v1, 0x69B4($a1)
    ctx->pc = 0x296a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27060), GPR_U32(ctx, 3));
    // 0x296a08: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x296a08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x296a0c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296a10: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296a14: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296a18: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296a1c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296a20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296a24: 0x8c63699c  lw          $v1, 0x699C($v1)
    ctx->pc = 0x296a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27036)));
    // 0x296a28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296A28u;
    {
        const bool branch_taken_0x296a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a28) {
            ctx->pc = 0x296A38u;
            return;
        }
    }
    ctx->pc = 0x296A30u;
    // 0x296a30: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x296a30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x296a34: 0x0  nop
    ctx->pc = 0x296a34u;
    // NOP
    ctx->pc = 0x296a38u;
}
