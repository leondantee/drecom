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

// Function: entry_003358d4
// Address: 0x3358d4 - 0x3358f8
void entry_003358d4_0x3358d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003358d4_0x3358d4");
#endif

    ctx->pc = 0x3358d4u;

    // 0x3358d4: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x3358D4u;
    {
        const bool branch_taken_0x3358d4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3358d4) {
            ctx->pc = 0x33594Cu;
            return;
        }
    }
    ctx->pc = 0x3358DCu;
    // 0x3358dc: 0x8e036850  lw          $v1, 0x6850($s0)
    ctx->pc = 0x3358dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x3358e0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x3358e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3358e4: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x3358e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3358e8: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x3358e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3358ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3358ECu;
    {
        const bool branch_taken_0x3358ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3358ec) {
            ctx->pc = 0x3358F8u;
            return;
        }
    }
    ctx->pc = 0x3358F4u;
    // 0x3358f4: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x3358f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->pc = 0x3358f8u;
}
