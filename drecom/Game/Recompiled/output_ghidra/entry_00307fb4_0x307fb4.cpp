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

// Function: entry_00307fb4
// Address: 0x307fb4 - 0x307ff4
void entry_00307fb4_0x307fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307fb4_0x307fb4");
#endif

    ctx->pc = 0x307fb4u;

    // 0x307fb4: 0x16e0000f  bnez        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x307FB4u;
    {
        const bool branch_taken_0x307fb4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x307fb4) {
            ctx->pc = 0x307FF4u;
            return;
        }
    }
    ctx->pc = 0x307FBCu;
    // 0x307fbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307fc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fc4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307fc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307fcc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fd0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x307fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x307fd4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fd8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307fdc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fe0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x307fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307fe4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307fe8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307fec: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x307FECu;
    {
        const bool branch_taken_0x307fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307fec) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307FF4u;
}
