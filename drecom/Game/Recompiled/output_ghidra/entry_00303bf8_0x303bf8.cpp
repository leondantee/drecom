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

// Function: entry_00303bf8
// Address: 0x303bf8 - 0x303c18
void entry_00303bf8_0x303bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303bf8_0x303bf8");
#endif

    ctx->pc = 0x303bf8u;

    // 0x303bf8: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x303bf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x303bfc: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x303BFCu;
    {
        const bool branch_taken_0x303bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303bfc) {
            ctx->pc = 0x303ADCu;
            return;
        }
    }
    ctx->pc = 0x303C04u;
    // 0x303c04: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x303c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303c08: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x303c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x303c0c: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x303c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x303c10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x303c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x303c14: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x303c14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x303c18u;
}
