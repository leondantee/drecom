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

// Function: entry_003288ac
// Address: 0x3288ac - 0x3288e8
void entry_003288ac_0x3288ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003288ac_0x3288ac");
#endif

    ctx->pc = 0x3288acu;

    // 0x3288ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3288acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3288b0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x3288b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x3288b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3288b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3288b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3288b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3288bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3288bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3288c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3288c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3288c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3288c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3288c8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3288c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3288cc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3288ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3288d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3288d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3288d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3288d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3288d8: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3288d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3288dc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3288dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3288e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3288e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3288e4: 0x0  nop
    ctx->pc = 0x3288e4u;
    // NOP
    ctx->pc = 0x3288e8u;
}
