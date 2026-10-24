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

// Function: entry_002590cc
// Address: 0x2590cc - 0x2590e8
void entry_002590cc_0x2590cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002590cc_0x2590cc");
#endif

    ctx->pc = 0x2590ccu;

    // 0x2590cc: 0x93a30058  lbu         $v1, 0x58($sp)
    ctx->pc = 0x2590ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2590d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2590d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2590d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2590d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2590d8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2590d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2590dc: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x2590dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2590e0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x2590e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2590e4: 0x0  nop
    ctx->pc = 0x2590e4u;
    // NOP
    ctx->pc = 0x2590e8u;
}
