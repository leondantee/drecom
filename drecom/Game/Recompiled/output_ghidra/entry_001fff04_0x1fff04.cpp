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

// Function: entry_001fff04
// Address: 0x1fff04 - 0x1fff40
void entry_001fff04_0x1fff04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fff04_0x1fff04");
#endif

    ctx->pc = 0x1fff04u;

    // 0x1fff04: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff08: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1fff08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1fff0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fff0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fff10: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fff14: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fff14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fff18: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fff20: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fff20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fff24: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fff24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fff28: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fff30: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fff34: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fff34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fff38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fff38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fff3c: 0x0  nop
    ctx->pc = 0x1fff3cu;
    // NOP
    ctx->pc = 0x1fff40u;
}
