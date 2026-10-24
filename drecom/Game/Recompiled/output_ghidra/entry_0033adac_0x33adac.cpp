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

// Function: entry_0033adac
// Address: 0x33adac - 0x33adc8
void entry_0033adac_0x33adac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033adac_0x33adac");
#endif

    switch (ctx->pc) {
        case 0x33adc0u: goto label_33adc0;
        default: break;
    }

    ctx->pc = 0x33adacu;

    // 0x33adac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33adb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33adb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33adb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33adb8: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33ADB8u;
    SET_GPR_U32(ctx, 31, 0x33ADC0u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33ADB8u, 0x33ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADC0u;
label_33adc0:
    // 0x33adc0: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x33ADC0u;
    {
        const bool branch_taken_0x33adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33adc0) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33ADC8u;
}
