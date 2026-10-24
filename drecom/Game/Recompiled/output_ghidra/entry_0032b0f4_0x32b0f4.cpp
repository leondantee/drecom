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

// Function: entry_0032b0f4
// Address: 0x32b0f4 - 0x32b11c
void entry_0032b0f4_0x32b0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b0f4_0x32b0f4");
#endif

    ctx->pc = 0x32b0f4u;

    // 0x32b0f4: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b0f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b0fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b100: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b104: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32b104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b108: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b10c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b114: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b118: 0xac6428dc  sw          $a0, 0x28DC($v1)
    ctx->pc = 0x32b118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10460), GPR_U32(ctx, 4));
    ctx->pc = 0x32b11cu;
}
