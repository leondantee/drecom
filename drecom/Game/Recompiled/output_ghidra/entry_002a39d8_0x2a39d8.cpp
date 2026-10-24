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

// Function: entry_002a39d8
// Address: 0x2a39d8 - 0x2a3a3c
void entry_002a39d8_0x2a39d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a39d8_0x2a39d8");
#endif

    switch (ctx->pc) {
        case 0x2a39f8u: goto label_2a39f8;
        default: break;
    }

    ctx->pc = 0x2a39d8u;

    // 0x2a39d8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a39d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39dc: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2a39dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a39e0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2a39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a39e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2a39e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2a39e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A39E8u;
    {
        const bool branch_taken_0x2a39e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a39e8) {
            ctx->pc = 0x2A3A3Cu;
            return;
        }
    }
    ctx->pc = 0x2A39F0u;
    // 0x2a39f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A39F0u;
    SET_GPR_U32(ctx, 31, 0x2A39F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A39F0u, 0x2A39F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A39F8u;
label_2a39f8:
    // 0x2a39f8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a39f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a39fc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a39fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a3a00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3a04: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A3A04u;
    {
        const bool branch_taken_0x2a3a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a3a04) {
            ctx->pc = 0x2A3A3Cu;
            return;
        }
    }
    ctx->pc = 0x2A3A0Cu;
    // 0x2a3a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3a10: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a14: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a3a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3a18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a3a1c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a20: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x2a3a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3a24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a28: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a3a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a2c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a30: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a3a30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a34: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a38: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a3a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a3a3cu;
}
