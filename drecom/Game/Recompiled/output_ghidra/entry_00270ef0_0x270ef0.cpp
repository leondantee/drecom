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

// Function: entry_00270ef0
// Address: 0x270ef0 - 0x270f08
void entry_00270ef0_0x270ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270ef0_0x270ef0");
#endif

    ctx->pc = 0x270ef0u;

    // 0x270ef0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x270ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x270ef4: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x270ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x270ef8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x270ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x270efc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x270EFCu;
    {
        const bool branch_taken_0x270efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270efc) {
            ctx->pc = 0x270E98u;
            return;
        }
    }
    ctx->pc = 0x270F04u;
    // 0x270f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x270f08u;
}
