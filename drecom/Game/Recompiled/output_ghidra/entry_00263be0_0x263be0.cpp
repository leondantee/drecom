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

// Function: entry_00263be0
// Address: 0x263be0 - 0x263bf4
void entry_00263be0_0x263be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263be0_0x263be0");
#endif

    ctx->pc = 0x263be0u;

    // 0x263be0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x263be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x263be4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263be8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x263be8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263bec: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x263BECu;
    {
        const bool branch_taken_0x263bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263bec) {
            ctx->pc = 0x2639FCu;
            return;
        }
    }
    ctx->pc = 0x263BF4u;
}
