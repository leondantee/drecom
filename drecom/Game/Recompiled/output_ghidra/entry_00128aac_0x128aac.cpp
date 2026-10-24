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

// Function: entry_00128aac
// Address: 0x128aac - 0x128afc
void entry_00128aac_0x128aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128aac_0x128aac");
#endif

    switch (ctx->pc) {
        case 0x128abcu: goto label_128abc;
        default: break;
    }

    ctx->pc = 0x128aacu;

    // 0x128aac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ab0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128ab4: 0xc05d25c  jal         func_174970
    ctx->pc = 0x128AB4u;
    SET_GPR_U32(ctx, 31, 0x128ABCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128AB4u, 0x128ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128ABCu;
label_128abc:
    // 0x128abc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x128ABCu;
    {
        const bool branch_taken_0x128abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128abc) {
            ctx->pc = 0x128AFCu;
            return;
        }
    }
    ctx->pc = 0x128AC4u;
    // 0x128ac4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128ac8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128acc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128ad0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x128ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x128ad4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ad8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x128adc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ae0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128ae4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ae8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x128aec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128af0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x128af4: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x128AF4u;
    {
        const bool branch_taken_0x128af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128af4) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128AFCu;
}
