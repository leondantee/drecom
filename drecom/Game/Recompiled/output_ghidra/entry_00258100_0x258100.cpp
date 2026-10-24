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

// Function: entry_00258100
// Address: 0x258100 - 0x258120
void entry_00258100_0x258100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258100_0x258100");
#endif

    ctx->pc = 0x258100u;

    // 0x258100: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x258100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x258104: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258108: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25810c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x25810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x258110: 0x8c730024  lw          $s3, 0x24($v1)
    ctx->pc = 0x258110u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x258114: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x258114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x258118: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x258118u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25811c: 0x0  nop
    ctx->pc = 0x25811cu;
    // NOP
    ctx->pc = 0x258120u;
}
