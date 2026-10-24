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

// Function: caseD_4
// Address: 0x31a788 - 0x31a7bc
void caseD_4_0x31a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x31a788");
#endif

    ctx->pc = 0x31a788u;

    // 0x31a788: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x31a788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a78c: 0x8cc41290  lw          $a0, 0x1290($a2)
    ctx->pc = 0x31a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4752)));
    // 0x31a790: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x31a790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31a794: 0xacc31290  sw          $v1, 0x1290($a2)
    ctx->pc = 0x31a794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4752), GPR_U32(ctx, 3));
    // 0x31a798: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x31a798u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x31a79c: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x31A79Cu;
    {
        const bool branch_taken_0x31a79c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a79c) {
            ctx->pc = 0x31A858u;
            return;
        }
    }
    ctx->pc = 0x31A7A4u;
    // 0x31a7a4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a7a8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31a7a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31a7ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31a7b0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31a7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a7b4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31A7B4u;
    {
        const bool branch_taken_0x31a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a7b4) {
            ctx->pc = 0x31A858u;
            return;
        }
    }
    ctx->pc = 0x31A7BCu;
}
