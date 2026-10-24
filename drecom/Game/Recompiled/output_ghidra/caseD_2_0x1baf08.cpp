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
// Address: 0x1baf08 - 0x1baf2c
void caseD_2_0x1baf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1baf08");
#endif

    ctx->pc = 0x1baf08u;

    // 0x1baf08: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1baf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baf0c: 0xaca01b64  sw          $zero, 0x1B64($a1)
    ctx->pc = 0x1baf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7012), GPR_U32(ctx, 0));
    // 0x1baf10: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1baf10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1baf14: 0x30c70020  andi        $a3, $a2, 0x20
    ctx->pc = 0x1baf14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x1baf18: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAF18u;
    {
        const bool branch_taken_0x1baf18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baf18) {
            ctx->pc = 0x1BAF2Cu;
            return;
        }
    }
    ctx->pc = 0x1BAF20u;
    // 0x1baf20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1baf20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baf24: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baf28: 0xac481b64  sw          $t0, 0x1B64($v0)
    ctx->pc = 0x1baf28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 8));
    ctx->pc = 0x1baf2cu;
}
