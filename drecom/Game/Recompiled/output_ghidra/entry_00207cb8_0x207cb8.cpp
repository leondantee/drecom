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

// Function: entry_00207cb8
// Address: 0x207cb8 - 0x207d38
void entry_00207cb8_0x207cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207cb8_0x207cb8");
#endif

    switch (ctx->pc) {
        case 0x207d28u: goto label_207d28;
        default: break;
    }

    ctx->pc = 0x207cb8u;

    // 0x207cb8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207cbc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207cc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207cc4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x207cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x207cc8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x207CC8u;
    {
        const bool branch_taken_0x207cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207cc8) {
            ctx->pc = 0x207E78u;
            return;
        }
    }
    ctx->pc = 0x207CD0u;
    // 0x207cd0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207cd4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207cd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207cdc: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x207cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x207ce0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x207CE0u;
    {
        const bool branch_taken_0x207ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ce0) {
            ctx->pc = 0x207D90u;
            return;
        }
    }
    ctx->pc = 0x207CE8u;
    // 0x207ce8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207cec: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207cecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207cf0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x207cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x207cf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207cf8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x207CF8u;
    {
        const bool branch_taken_0x207cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207cf8) {
            ctx->pc = 0x207D38u;
            return;
        }
    }
    ctx->pc = 0x207D00u;
    // 0x207d00: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d04: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207d08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207d0c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x207d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x207d10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207D10u;
    {
        const bool branch_taken_0x207d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d10) {
            ctx->pc = 0x207D38u;
            return;
        }
    }
    ctx->pc = 0x207D18u;
    // 0x207d18: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d1c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x207d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x207d20: 0xc0baf1c  jal         func_2EBC70
    ctx->pc = 0x207D20u;
    SET_GPR_U32(ctx, 31, 0x207D28u);
    ctx->pc = 0x2EBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC70u, 0x207D20u, 0x207D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D28u;
label_207d28:
    // 0x207d28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d2c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x207d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x207d30: 0xc0baf1c  jal         func_2EBC70
    ctx->pc = 0x207D30u;
    SET_GPR_U32(ctx, 31, 0x207D38u);
    ctx->pc = 0x2EBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC70u, 0x207D30u, 0x207D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D38u;
}
