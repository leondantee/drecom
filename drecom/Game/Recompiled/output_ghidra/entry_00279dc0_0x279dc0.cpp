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

// Function: entry_00279dc0
// Address: 0x279dc0 - 0x279de0
void entry_00279dc0_0x279dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279dc0_0x279dc0");
#endif

    ctx->pc = 0x279dc0u;

    // 0x279dc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x279dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x279dc4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279DC4u;
    {
        const bool branch_taken_0x279dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279dc4) {
            ctx->pc = 0x279DE0u;
            return;
        }
    }
    ctx->pc = 0x279DCCu;
    // 0x279dcc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x279dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279dd0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x279dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x279dd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x279dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x279dd8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x279dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x279ddc: 0x0  nop
    ctx->pc = 0x279ddcu;
    // NOP
    ctx->pc = 0x279de0u;
}
