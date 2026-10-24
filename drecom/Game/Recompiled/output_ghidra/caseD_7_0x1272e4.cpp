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

// Function: caseD_7
// Address: 0x1272e4 - 0x127334
void caseD_7_0x1272e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1272e4");
#endif

    switch (ctx->pc) {
        case 0x1272f4u: goto label_1272f4;
        default: break;
    }

    ctx->pc = 0x1272e4u;

    // 0x1272e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1272e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1272e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1272e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1272ec: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1272ECu;
    SET_GPR_U32(ctx, 31, 0x1272F4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1272ECu, 0x1272F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272F4u;
label_1272f4:
    // 0x1272f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1272F4u;
    {
        const bool branch_taken_0x1272f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1272f4) {
            ctx->pc = 0x127334u;
            return;
        }
    }
    ctx->pc = 0x1272FCu;
    // 0x1272fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1272fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127304: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127308: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x127308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12730c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127310: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127318: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12731c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127320: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127324: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127328: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12732c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12732Cu;
    {
        const bool branch_taken_0x12732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12732c) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x127334u;
}
