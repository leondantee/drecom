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

// Function: entry_00120d88
// Address: 0x120d88 - 0x120ddc
void entry_00120d88_0x120d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d88_0x120d88");
#endif

    switch (ctx->pc) {
        case 0x120dacu: goto label_120dac;
        default: break;
    }

    ctx->pc = 0x120d88u;

    // 0x120d88: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x120d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120d8c: 0x90a411f0  lbu         $a0, 0x11F0($a1)
    ctx->pc = 0x120d8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4592)));
    // 0x120d90: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x120d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x120d94: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x120d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x120d98: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x120D98u;
    {
        const bool branch_taken_0x120d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120d98) {
            ctx->pc = 0x120E08u;
            return;
        }
    }
    ctx->pc = 0x120DA0u;
    // 0x120da0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120da4: 0xc048118  jal         func_120460
    ctx->pc = 0x120DA4u;
    SET_GPR_U32(ctx, 31, 0x120DACu);
    ctx->pc = 0x120460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120460u, 0x120DA4u, 0x120DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DACu;
label_120dac:
    // 0x120dac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x120dacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x120db0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x120db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120db4: 0x94a411f6  lhu         $a0, 0x11F6($a1)
    ctx->pc = 0x120db4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4598)));
    // 0x120db8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x120db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x120dbc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x120dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x120dc0: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120DC0u;
    {
        const bool branch_taken_0x120dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x120dc0) {
            ctx->pc = 0x120DDCu;
            return;
        }
    }
    ctx->pc = 0x120DC8u;
    // 0x120dc8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x120dcc: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x120DCCu;
    {
        const bool branch_taken_0x120dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x120dcc) {
            ctx->pc = 0x120DDCu;
            return;
        }
    }
    ctx->pc = 0x120DD4u;
    // 0x120dd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x120DD4u;
    {
        const bool branch_taken_0x120dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120dd4) {
            ctx->pc = 0x120E08u;
            return;
        }
    }
    ctx->pc = 0x120DDCu;
}
