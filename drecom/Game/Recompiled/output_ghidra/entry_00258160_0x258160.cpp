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

// Function: entry_00258160
// Address: 0x258160 - 0x258180
void entry_00258160_0x258160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258160_0x258160");
#endif

    ctx->pc = 0x258160u;

    // 0x258160: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x258160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x258164: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25816c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x25816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x258170: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x258170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x258174: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x258174u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x258178: 0x0  nop
    ctx->pc = 0x258178u;
    // NOP
    // 0x25817c: 0x0  nop
    ctx->pc = 0x25817cu;
    // NOP
    ctx->pc = 0x258180u;
}
