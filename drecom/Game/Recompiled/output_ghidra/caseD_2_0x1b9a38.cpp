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

// Function: caseD_2
// Address: 0x1b9a38 - 0x1b9a5c
void caseD_2_0x1b9a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1b9a38");
#endif

    ctx->pc = 0x1b9a38u;

    // 0x1b9a38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9a3c: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x1b9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x1b9a40: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1b9a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1b9a44: 0x30a60020  andi        $a2, $a1, 0x20
    ctx->pc = 0x1b9a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x1b9a48: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9A48u;
    {
        const bool branch_taken_0x1b9a48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a48) {
            ctx->pc = 0x1B9A5Cu;
            return;
        }
    }
    ctx->pc = 0x1B9A50u;
    // 0x1b9a50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9a54: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b9a54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9a58: 0xad071b64  sw          $a3, 0x1B64($t0)
    ctx->pc = 0x1b9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7012), GPR_U32(ctx, 7));
    ctx->pc = 0x1b9a5cu;
}
