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

// Function: caseD_b
// Address: 0x2964e4 - 0x296508
void caseD_b_0x2964e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x2964e4");
#endif

    ctx->pc = 0x2964e4u;

    // 0x2964e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2964e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2964e8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2964e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2964ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2964ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2964f0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2964f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2964f4: 0x3073000f  andi        $s3, $v1, 0xF
    ctx->pc = 0x2964f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2964f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2964f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2964fc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2964fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x296500: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x296500u;
    {
        const bool branch_taken_0x296500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296500) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x296508u;
}
