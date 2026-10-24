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

// Function: entry_00119d84
// Address: 0x119d84 - 0x119db0
void entry_00119d84_0x119d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119d84_0x119d84");
#endif

    ctx->pc = 0x119d84u;

    // 0x119d84: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x119d84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x119d88: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x119d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x119d8c: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x119d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x119d90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x119d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119d98: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x119d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x119d9c: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x119d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x119da0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x119da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x119da4: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x119da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x119da8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x119da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x119dac: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x119dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->pc = 0x119db0u;
}
