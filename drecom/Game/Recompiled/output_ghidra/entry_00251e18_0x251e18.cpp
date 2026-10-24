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

// Function: entry_00251e18
// Address: 0x251e18 - 0x251e30
void entry_00251e18_0x251e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251e18_0x251e18");
#endif

    ctx->pc = 0x251e18u;

    // 0x251e18: 0x2e03000a  sltiu       $v1, $s0, 0xA
    ctx->pc = 0x251e18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x251e1c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x251E1Cu;
    {
        const bool branch_taken_0x251e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x251e1c) {
            ctx->pc = 0x251DC8u;
            return;
        }
    }
    ctx->pc = 0x251E24u;
    // 0x251e24: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x251e24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251e28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x251E28u;
    {
        const bool branch_taken_0x251e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251e28) {
            ctx->pc = 0x251E80u;
            return;
        }
    }
    ctx->pc = 0x251E30u;
}
