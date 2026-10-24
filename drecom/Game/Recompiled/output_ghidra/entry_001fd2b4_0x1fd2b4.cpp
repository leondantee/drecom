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

// Function: entry_001fd2b4
// Address: 0x1fd2b4 - 0x1fd2f0
void entry_001fd2b4_0x1fd2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd2b4_0x1fd2b4");
#endif

    ctx->pc = 0x1fd2b4u;

    // 0x1fd2b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2b8: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fd2b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fd2bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd2c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fd2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fd2c4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fd2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fd2c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fd2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd2d0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fd2d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd2d4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fd2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fd2d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fd2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd2e0: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fd2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fd2e4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fd2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fd2e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fd2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fd2ec: 0x0  nop
    ctx->pc = 0x1fd2ecu;
    // NOP
    ctx->pc = 0x1fd2f0u;
}
