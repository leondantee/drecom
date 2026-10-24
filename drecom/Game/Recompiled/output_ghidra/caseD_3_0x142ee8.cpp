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

// Function: caseD_3
// Address: 0x142ee8 - 0x142f18
void caseD_3_0x142ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x142ee8");
#endif

    ctx->pc = 0x142ee8u;

    // 0x142ee8: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x142ee8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x142eec: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x142eecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x142ef0: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x142ef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x142ef4: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x142EF4u;
    {
        const bool branch_taken_0x142ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142ef4) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142EFCu;
    // 0x142efc: 0x2414012c  addiu       $s4, $zero, 0x12C
    ctx->pc = 0x142efcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x142f00: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x142f00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x142f04: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142f08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142f0c: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142f10: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x142F10u;
    {
        const bool branch_taken_0x142f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f10) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142F18u;
}
