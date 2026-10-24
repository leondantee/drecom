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

// Function: entry_0032ebec
// Address: 0x32ebec - 0x32ec04
void entry_0032ebec_0x32ebec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ebec_0x32ebec");
#endif

    ctx->pc = 0x32ebecu;

    // 0x32ebec: 0x8e036610  lw          $v1, 0x6610($s0)
    ctx->pc = 0x32ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26128)));
    // 0x32ebf0: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x32ebf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x32ebf4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EBF4u;
    {
        const bool branch_taken_0x32ebf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ebf4) {
            ctx->pc = 0x32EC04u;
            return;
        }
    }
    ctx->pc = 0x32EBFCu;
    // 0x32ebfc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x32ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x32ec00: 0xae036610  sw          $v1, 0x6610($s0)
    ctx->pc = 0x32ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26128), GPR_U32(ctx, 3));
    ctx->pc = 0x32ec04u;
}
