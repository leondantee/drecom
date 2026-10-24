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

// Function: entry_0029a11c
// Address: 0x29a11c - 0x29a134
void entry_0029a11c_0x29a11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a11c_0x29a11c");
#endif

    ctx->pc = 0x29a11cu;

    // 0x29a11c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x29a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x29a120: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A120u;
    {
        const bool branch_taken_0x29a120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a120) {
            ctx->pc = 0x29A134u;
            return;
        }
    }
    ctx->pc = 0x29A128u;
    // 0x29a128: 0x26d40001  addiu       $s4, $s6, 0x1
    ctx->pc = 0x29a128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x29a12c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A12Cu;
    {
        const bool branch_taken_0x29a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a12c) {
            ctx->pc = 0x29A138u;
            return;
        }
    }
    ctx->pc = 0x29A134u;
}
