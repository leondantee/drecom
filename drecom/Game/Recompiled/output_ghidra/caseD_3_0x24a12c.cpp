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

// Function: caseD_3
// Address: 0x24a12c - 0x24a178
void caseD_3_0x24a12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x24a12c");
#endif

    switch (ctx->pc) {
        case 0x24a158u: goto label_24a158;
        default: break;
    }

    ctx->pc = 0x24a12cu;

    // 0x24a12c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a130: 0x84a20030  lh          $v0, 0x30($a1)
    ctx->pc = 0x24a130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24a134: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24a138: 0xa4a30030  sh          $v1, 0x30($a1)
    ctx->pc = 0x24a138u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x24a13c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24A13Cu;
    {
        const bool branch_taken_0x24a13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a13c) {
            ctx->pc = 0x24A178u;
            return;
        }
    }
    ctx->pc = 0x24A144u;
    // 0x24a144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a148: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a14c: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x24a14cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a150: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24A150u;
    SET_GPR_U32(ctx, 31, 0x24A158u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24A150u, 0x24A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A158u;
label_24a158:
    // 0x24a158: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x24a158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24a15c: 0x30c7001f  andi        $a3, $a2, 0x1F
    ctx->pc = 0x24a15cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x24a160: 0x24e3001e  addiu       $v1, $a3, 0x1E
    ctx->pc = 0x24a160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x24a164: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x24a164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x24a168: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x24a168u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x24a16c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a170: 0xa4830030  sh          $v1, 0x30($a0)
    ctx->pc = 0x24a170u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x24a174: 0x0  nop
    ctx->pc = 0x24a174u;
    // NOP
    ctx->pc = 0x24a178u;
}
