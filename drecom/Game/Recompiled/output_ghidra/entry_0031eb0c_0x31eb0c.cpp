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

// Function: entry_0031eb0c
// Address: 0x31eb0c - 0x31eb20
void entry_0031eb0c_0x31eb0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031eb0c_0x31eb0c");
#endif

    ctx->pc = 0x31eb0cu;

    // 0x31eb0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x31eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31eb10: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31eb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x31eb14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31EB14u;
    {
        const bool branch_taken_0x31eb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb14) {
            ctx->pc = 0x31EB20u;
            return;
        }
    }
    ctx->pc = 0x31EB1Cu;
    // 0x31eb1c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31eb1cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x31eb20u;
}
