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

// Function: entry_001fcd14
// Address: 0x1fcd14 - 0x1fcd50
void entry_001fcd14_0x1fcd14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcd14_0x1fcd14");
#endif

    ctx->pc = 0x1fcd14u;

    // 0x1fcd14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd18: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fcd18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fcd1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcd20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fcd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fcd24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fcd24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fcd28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcd30: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fcd30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcd34: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fcd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fcd38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcd40: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fcd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fcd44: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fcd44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fcd48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fcd4c: 0x0  nop
    ctx->pc = 0x1fcd4cu;
    // NOP
    ctx->pc = 0x1fcd50u;
}
