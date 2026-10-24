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

// Function: entry_00308bbc
// Address: 0x308bbc - 0x308c18
void entry_00308bbc_0x308bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308bbc_0x308bbc");
#endif

    switch (ctx->pc) {
        case 0x308bccu: goto label_308bcc;
        case 0x308bd8u: goto label_308bd8;
        default: break;
    }

    ctx->pc = 0x308bbcu;

    // 0x308bbc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x308bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x308bc4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x308BC4u;
    SET_GPR_U32(ctx, 31, 0x308BCCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x308BC4u, 0x308BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BCCu;
label_308bcc:
    // 0x308bcc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bd0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x308BD0u;
    SET_GPR_U32(ctx, 31, 0x308BD8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x308BD0u, 0x308BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BD8u;
label_308bd8:
    // 0x308bd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bdc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x308bdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x308be0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x308BE0u;
    {
        const bool branch_taken_0x308be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308be0) {
            ctx->pc = 0x308C18u;
            return;
        }
    }
    ctx->pc = 0x308BE8u;
    // 0x308be8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308bec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bf0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308bf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308bfc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308c00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308c04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308c08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308c10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x308c18u;
}
