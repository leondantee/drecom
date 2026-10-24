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

// Function: entry_00195b2c
// Address: 0x195b2c - 0x195b60
void entry_00195b2c_0x195b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195b2c_0x195b2c");
#endif

    ctx->pc = 0x195b2cu;

    // 0x195b2c: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x195b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x195b30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195b34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x195b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195b38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195b3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x195b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x195b40: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x195b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x195b44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195b48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x195b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195b4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195b50: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x195b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x195b54: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x195b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x195b58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x195b5c: 0x0  nop
    ctx->pc = 0x195b5cu;
    // NOP
    ctx->pc = 0x195b60u;
}
