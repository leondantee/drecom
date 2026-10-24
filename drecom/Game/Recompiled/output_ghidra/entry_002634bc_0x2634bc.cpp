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

// Function: entry_002634bc
// Address: 0x2634bc - 0x2634cc
void entry_002634bc_0x2634bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002634bc_0x2634bc");
#endif

    ctx->pc = 0x2634bcu;

    // 0x2634bc: 0x3274ffff  andi        $s4, $s3, 0xFFFF
    ctx->pc = 0x2634bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2634c0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2634c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2634c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2634C4u;
    {
        const bool branch_taken_0x2634c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2634c4) {
            ctx->pc = 0x2634F8u;
            return;
        }
    }
    ctx->pc = 0x2634CCu;
}
