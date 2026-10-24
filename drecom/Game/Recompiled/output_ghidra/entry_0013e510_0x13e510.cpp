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

// Function: entry_0013e510
// Address: 0x13e510 - 0x13e530
void entry_0013e510_0x13e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e510_0x13e510");
#endif

    ctx->pc = 0x13e510u;

    // 0x13e510: 0x26310120  addiu       $s1, $s1, 0x120
    ctx->pc = 0x13e510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x13e514: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x13e514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13e518: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13e518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13e51c: 0x1660ff9a  bnez        $s3, . + 4 + (-0x66 << 2)
    ctx->pc = 0x13E51Cu;
    {
        const bool branch_taken_0x13e51c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e51c) {
            ctx->pc = 0x13E388u;
            return;
        }
    }
    ctx->pc = 0x13E524u;
    // 0x13e524: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13e524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13e528: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x13e528u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x13e52c: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x13e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    ctx->pc = 0x13e530u;
}
