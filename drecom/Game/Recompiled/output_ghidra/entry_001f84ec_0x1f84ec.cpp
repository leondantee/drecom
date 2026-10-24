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

// Function: entry_001f84ec
// Address: 0x1f84ec - 0x1f852c
void entry_001f84ec_0x1f84ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f84ec_0x1f84ec");
#endif

    switch (ctx->pc) {
        case 0x1f84fcu: goto label_1f84fc;
        case 0x1f8508u: goto label_1f8508;
        default: break;
    }

    ctx->pc = 0x1f84ecu;

    // 0x1f84ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f84ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f84f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f84f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F84F4u;
    SET_GPR_U32(ctx, 31, 0x1F84FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F84F4u, 0x1F84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F84FCu;
label_1f84fc:
    // 0x1f84fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8500: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F8500u;
    SET_GPR_U32(ctx, 31, 0x1F8508u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8500u, 0x1F8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8508u;
label_1f8508:
    // 0x1f8508: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f850c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f850cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f8510: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1F8510u;
    {
        const bool branch_taken_0x1f8510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8510) {
            ctx->pc = 0x1F8670u;
            return;
        }
    }
    ctx->pc = 0x1F8518u;
    // 0x1f8518: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f8518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f851c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f851cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8520: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f8520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8524: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1F8524u;
    {
        const bool branch_taken_0x1f8524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8524) {
            ctx->pc = 0x1F8670u;
            return;
        }
    }
    ctx->pc = 0x1F852Cu;
}
