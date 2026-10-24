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

// Function: entry_003614cc
// Address: 0x3614cc - 0x36151c
void entry_003614cc_0x3614cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003614cc_0x3614cc");
#endif

    switch (ctx->pc) {
        case 0x3614e8u: goto label_3614e8;
        case 0x361514u: goto label_361514;
        default: break;
    }

    ctx->pc = 0x3614ccu;

    // 0x3614cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3614ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3614d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3614d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3614d4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x3614d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3614d8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3614d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3614dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3614dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3614e0: 0xc0779f4  jal         func_1DE7D0
    ctx->pc = 0x3614E0u;
    SET_GPR_U32(ctx, 31, 0x3614E8u);
    ctx->pc = 0x1DE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE7D0u, 0x3614E0u, 0x3614E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3614E8u;
label_3614e8:
    // 0x3614e8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3614e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3614ec: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3614ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3614f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3614F0u;
    {
        const bool branch_taken_0x3614f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3614f0) {
            ctx->pc = 0x36151Cu;
            return;
        }
    }
    ctx->pc = 0x3614F8u;
    // 0x3614f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3614f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3614fc: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x3614fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x361500: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361504: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x361504u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x361508: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36150c: 0xc096348  jal         func_258D20
    ctx->pc = 0x36150Cu;
    SET_GPR_U32(ctx, 31, 0x361514u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x36150Cu, 0x361514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361514u;
label_361514:
    // 0x361514: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x361514u;
    {
        const bool branch_taken_0x361514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361514) {
            ctx->pc = 0x361534u;
            return;
        }
    }
    ctx->pc = 0x36151Cu;
}
