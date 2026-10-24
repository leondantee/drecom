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

// Function: entry_0035c1e8
// Address: 0x35c1e8 - 0x35c244
void entry_0035c1e8_0x35c1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c1e8_0x35c1e8");
#endif

    switch (ctx->pc) {
        case 0x35c1f4u: goto label_35c1f4;
        case 0x35c200u: goto label_35c200;
        default: break;
    }

    ctx->pc = 0x35c1e8u;

    // 0x35c1e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1ec: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35C1ECu;
    SET_GPR_U32(ctx, 31, 0x35C1F4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35C1ECu, 0x35C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C1F4u;
label_35c1f4:
    // 0x35c1f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1f8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35C1F8u;
    SET_GPR_U32(ctx, 31, 0x35C200u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35C1F8u, 0x35C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C200u;
label_35c200:
    // 0x35c200: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c204: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x35c204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x35c208: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35C208u;
    {
        const bool branch_taken_0x35c208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c208) {
            ctx->pc = 0x35C244u;
            return;
        }
    }
    ctx->pc = 0x35C210u;
    // 0x35c210: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c214: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35c214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c218: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c21c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c220: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35c220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c224: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c228: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35c228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c22c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c230: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35c230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c234: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c238: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35c238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c23c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c240: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35c240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x35c244u;
}
