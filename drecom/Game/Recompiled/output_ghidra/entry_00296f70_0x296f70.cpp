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

// Function: entry_00296f70
// Address: 0x296f70 - 0x296fbc
void entry_00296f70_0x296f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296f70_0x296f70");
#endif

    ctx->pc = 0x296f70u;

    // 0x296f70: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296f74: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f78: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f7c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f80: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f84: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296f88: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x296f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x296f8c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f90: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f94: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f98: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f9c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296fa0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296fa4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296fa8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296fac: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296fb0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x296fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x296fb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x296FB4u;
    {
        const bool branch_taken_0x296fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296fb4) {
            ctx->pc = 0x296FE8u;
            return;
        }
    }
    ctx->pc = 0x296FBCu;
}
