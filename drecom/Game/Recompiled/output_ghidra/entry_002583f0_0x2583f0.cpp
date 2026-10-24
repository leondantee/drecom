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

// Function: entry_002583f0
// Address: 0x2583f0 - 0x258410
void entry_002583f0_0x2583f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002583f0_0x2583f0");
#endif

    ctx->pc = 0x2583f0u;

    // 0x2583f0: 0x93a30078  lbu         $v1, 0x78($sp)
    ctx->pc = 0x2583f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2583f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2583f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2583f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2583f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2583fc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2583fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x258400: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x258400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x258404: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x258404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x258408: 0x0  nop
    ctx->pc = 0x258408u;
    // NOP
    // 0x25840c: 0x0  nop
    ctx->pc = 0x25840cu;
    // NOP
    ctx->pc = 0x258410u;
}
