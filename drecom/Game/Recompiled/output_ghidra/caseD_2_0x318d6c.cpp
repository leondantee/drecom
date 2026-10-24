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

// Function: caseD_2
// Address: 0x318d6c - 0x318d9c
void caseD_2_0x318d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x318d6c");
#endif

    ctx->pc = 0x318d6cu;

    // 0x318d6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318d70: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x318d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
    // 0x318d74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318d78: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x318d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x318d7c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x318d7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x318d80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318d84: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x318d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x318d88: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x318d88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x318d8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318d90: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x318d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x318d94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318d98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x318d98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x318d9cu;
}
