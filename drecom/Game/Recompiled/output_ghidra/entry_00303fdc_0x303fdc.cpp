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

// Function: entry_00303fdc
// Address: 0x303fdc - 0x304020
void entry_00303fdc_0x303fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303fdc_0x303fdc");
#endif

    switch (ctx->pc) {
        case 0x303fecu: goto label_303fec;
        case 0x303ff8u: goto label_303ff8;
        default: break;
    }

    ctx->pc = 0x303fdcu;

    // 0x303fdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303fe0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x303fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303fe4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x303FE4u;
    SET_GPR_U32(ctx, 31, 0x303FECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x303FE4u, 0x303FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FECu;
label_303fec:
    // 0x303fec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303ff0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x303FF0u;
    SET_GPR_U32(ctx, 31, 0x303FF8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x303FF0u, 0x303FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FF8u;
label_303ff8:
    // 0x303ff8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303ffc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x303ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x304000: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x304000u;
    {
        const bool branch_taken_0x304000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304000) {
            ctx->pc = 0x3041B4u;
            return;
        }
    }
    ctx->pc = 0x304008u;
    // 0x304008: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30400c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30400cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x304010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x304010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x304014: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x304014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x304018: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x304018u;
    {
        const bool branch_taken_0x304018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304018) {
            ctx->pc = 0x3041B4u;
            return;
        }
    }
    ctx->pc = 0x304020u;
}
