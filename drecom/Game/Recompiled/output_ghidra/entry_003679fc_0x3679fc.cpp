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

// Function: entry_003679fc
// Address: 0x3679fc - 0x367a4c
void entry_003679fc_0x3679fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003679fc_0x3679fc");
#endif

    switch (ctx->pc) {
        case 0x367a04u: goto label_367a04;
        case 0x367a24u: goto label_367a24;
        default: break;
    }

    ctx->pc = 0x3679fcu;

    // 0x3679fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3679FCu;
    SET_GPR_U32(ctx, 31, 0x367A04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3679FCu, 0x367A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A04u;
label_367a04:
    // 0x367a04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367a08: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x367a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x367a0c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x367a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x367a10: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x367a10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x367a14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367a18: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x367a18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x367a1c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x367A1Cu;
    SET_GPR_U32(ctx, 31, 0x367A24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367A1Cu, 0x367A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A24u;
label_367a24:
    // 0x367a24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x367a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367a28: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x367a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x367a2c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x367A2Cu;
    {
        const bool branch_taken_0x367a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x367a2c) {
            ctx->pc = 0x367AC4u;
            return;
        }
    }
    ctx->pc = 0x367A34u;
    // 0x367a34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367a38: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x367a3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x367a40: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367a40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x367a44: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x367A44u;
    {
        const bool branch_taken_0x367a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367a44) {
            ctx->pc = 0x367AC4u;
            return;
        }
    }
    ctx->pc = 0x367A4Cu;
}
