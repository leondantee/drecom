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

// Function: entry_001956b8
// Address: 0x1956b8 - 0x1956d8
void entry_001956b8_0x1956b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001956b8_0x1956b8");
#endif

    ctx->pc = 0x1956b8u;

    // 0x1956b8: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x1956b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x1956bc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1956bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1956c0: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x1956c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    // 0x1956c4: 0x8e040b18  lw          $a0, 0xB18($s0)
    ctx->pc = 0x1956c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x1956c8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1956c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1956cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1956ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1956d0: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x1956d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    // 0x1956d4: 0x0  nop
    ctx->pc = 0x1956d4u;
    // NOP
    ctx->pc = 0x1956d8u;
}
