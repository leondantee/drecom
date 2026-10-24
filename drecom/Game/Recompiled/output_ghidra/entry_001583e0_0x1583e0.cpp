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

// Function: entry_001583e0
// Address: 0x1583e0 - 0x158438
void entry_001583e0_0x1583e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001583e0_0x1583e0");
#endif

    switch (ctx->pc) {
        case 0x158418u: goto label_158418;
        default: break;
    }

    ctx->pc = 0x1583e0u;

    // 0x1583e0: 0x2e630019  sltiu       $v1, $s3, 0x19
    ctx->pc = 0x1583e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1583e4: 0x1460fc3f  bnez        $v1, . + 4 + (-0x3C1 << 2)
    ctx->pc = 0x1583E4u;
    {
        const bool branch_taken_0x1583e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583e4) {
            ctx->pc = 0x1574E4u;
            return;
        }
    }
    ctx->pc = 0x1583ECu;
    // 0x1583ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1583ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1583f0: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x1583f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
    // 0x1583f4: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x1583f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x1583f8: 0x34c7103f  ori         $a3, $a2, 0x103F
    ctx->pc = 0x1583f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4159);
    // 0x1583fc: 0xae8700a4  sw          $a3, 0xA4($s4)
    ctx->pc = 0x1583fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 7));
    // 0x158400: 0xfe8000a8  sd          $zero, 0xA8($s4)
    ctx->pc = 0x158400u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 168), GPR_U64(ctx, 0));
    // 0x158404: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x158404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x158408: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x158408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x15840c: 0x268500a0  addiu       $a1, $s4, 0xA0
    ctx->pc = 0x15840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x158410: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158410u;
    SET_GPR_U32(ctx, 31, 0x158418u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158410u, 0x158418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158418u;
label_158418:
    // 0x158418: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15841c: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x15841cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0140u));
    // 0x158420: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x158420u;
    {
        const bool branch_taken_0x158420 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x158420) {
            ctx->pc = 0x158438u;
            return;
        }
    }
    ctx->pc = 0x158428u;
    // 0x158428: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x158428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x15842c: 0x247eec80  addiu       $fp, $v1, -0x1380
    ctx->pc = 0x15842cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x158430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158430u;
    {
        const bool branch_taken_0x158430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158430) {
            ctx->pc = 0x158440u;
            return;
        }
    }
    ctx->pc = 0x158438u;
}
