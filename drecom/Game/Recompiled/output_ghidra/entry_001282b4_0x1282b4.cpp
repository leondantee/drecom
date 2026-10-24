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

// Function: entry_001282b4
// Address: 0x1282b4 - 0x128304
void entry_001282b4_0x1282b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001282b4_0x1282b4");
#endif

    switch (ctx->pc) {
        case 0x1282c4u: goto label_1282c4;
        default: break;
    }

    ctx->pc = 0x1282b4u;

    // 0x1282b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1282b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1282b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1282b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1282bc: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1282BCu;
    SET_GPR_U32(ctx, 31, 0x1282C4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1282BCu, 0x1282C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282C4u;
label_1282c4:
    // 0x1282c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1282C4u;
    {
        const bool branch_taken_0x1282c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282c4) {
            ctx->pc = 0x128304u;
            return;
        }
    }
    ctx->pc = 0x1282CCu;
    // 0x1282cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1282ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1282d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1282d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1282d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1282d8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1282d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1282dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1282e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1282e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1282e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1282e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1282e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1282ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1282f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1282f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1282f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1282f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1282f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1282fc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1282FCu;
    {
        const bool branch_taken_0x1282fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282fc) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x128304u;
}
