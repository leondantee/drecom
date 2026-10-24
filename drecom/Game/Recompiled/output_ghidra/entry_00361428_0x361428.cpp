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

// Function: entry_00361428
// Address: 0x361428 - 0x361478
void entry_00361428_0x361428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361428_0x361428");
#endif

    switch (ctx->pc) {
        case 0x361444u: goto label_361444;
        case 0x361470u: goto label_361470;
        default: break;
    }

    ctx->pc = 0x361428u;

    // 0x361428: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36142c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36142cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x361430: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x361430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x361434: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x361434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36143c: 0xc0779f4  jal         func_1DE7D0
    ctx->pc = 0x36143Cu;
    SET_GPR_U32(ctx, 31, 0x361444u);
    ctx->pc = 0x1DE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE7D0u, 0x36143Cu, 0x361444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361444u;
label_361444:
    // 0x361444: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x361444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x361448: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x361448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x36144c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36144Cu;
    {
        const bool branch_taken_0x36144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36144c) {
            ctx->pc = 0x361478u;
            return;
        }
    }
    ctx->pc = 0x361454u;
    // 0x361454: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x361454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361458: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x361458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x36145c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361460: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x361460u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x361464: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361468: 0xc096348  jal         func_258D20
    ctx->pc = 0x361468u;
    SET_GPR_U32(ctx, 31, 0x361470u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x361468u, 0x361470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361470u;
label_361470:
    // 0x361470: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x361470u;
    {
        const bool branch_taken_0x361470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361470) {
            ctx->pc = 0x361534u;
            return;
        }
    }
    ctx->pc = 0x361478u;
}
