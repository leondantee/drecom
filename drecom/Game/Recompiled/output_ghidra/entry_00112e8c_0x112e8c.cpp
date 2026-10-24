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

// Function: entry_00112e8c
// Address: 0x112e8c - 0x112ea4
void entry_00112e8c_0x112e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e8c_0x112e8c");
#endif

    ctx->pc = 0x112e8cu;

    // 0x112e8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112e90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x112e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x112e94: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x112e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x112e98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x112e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112e9c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x112e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x112ea0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x112ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x112ea4u;
}
