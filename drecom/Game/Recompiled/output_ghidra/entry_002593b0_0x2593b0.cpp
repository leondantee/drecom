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

// Function: entry_002593b0
// Address: 0x2593b0 - 0x2593d0
void entry_002593b0_0x2593b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002593b0_0x2593b0");
#endif

    ctx->pc = 0x2593b0u;

    // 0x2593b0: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x2593b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2593b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2593b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2593b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2593b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2593bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2593bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2593c0: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x2593c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2593c4: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x2593c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2593c8: 0x0  nop
    ctx->pc = 0x2593c8u;
    // NOP
    // 0x2593cc: 0x0  nop
    ctx->pc = 0x2593ccu;
    // NOP
    ctx->pc = 0x2593d0u;
}
