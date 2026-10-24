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

// Function: entry_00321004
// Address: 0x321004 - 0x321030
void entry_00321004_0x321004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321004_0x321004");
#endif

    ctx->pc = 0x321004u;

    // 0x321004: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321008: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32100c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321010: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x321010u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321014: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32101c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321020: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x321020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x321024: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x321024u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x321028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x321028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32102c: 0x0  nop
    ctx->pc = 0x32102cu;
    // NOP
    ctx->pc = 0x321030u;
}
