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

// Function: entry_00222078
// Address: 0x222078 - 0x222090
void entry_00222078_0x222078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222078_0x222078");
#endif

    ctx->pc = 0x222078u;

    // 0x222078: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x222078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x22207c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x22207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x222080: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x222080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222084: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x222084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222088: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x222088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22208c: 0xacc50064  sw          $a1, 0x64($a2)
    ctx->pc = 0x22208cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 5));
    ctx->pc = 0x222090u;
}
