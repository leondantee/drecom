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

// Function: entry_00328c24
// Address: 0x328c24 - 0x328c60
void entry_00328c24_0x328c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328c24_0x328c24");
#endif

    ctx->pc = 0x328c24u;

    // 0x328c24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c28: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x328c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x328c2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328c30: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x328c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x328c34: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x328c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x328c38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328c40: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x328c40u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328c44: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x328c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328c48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328c50: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x328c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x328c54: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x328c54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x328c58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x328c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x328c5c: 0x0  nop
    ctx->pc = 0x328c5cu;
    // NOP
    ctx->pc = 0x328c60u;
}
