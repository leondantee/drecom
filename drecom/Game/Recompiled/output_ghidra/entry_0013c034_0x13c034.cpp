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

// Function: entry_0013c034
// Address: 0x13c034 - 0x13c060
void entry_0013c034_0x13c034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c034_0x13c034");
#endif

    switch (ctx->pc) {
        case 0x13c05cu: goto label_13c05c;
        default: break;
    }

    ctx->pc = 0x13c034u;

    // 0x13c034: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x13c034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13c038: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x13c038u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x13c03c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13c03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13c040: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13c040u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13c044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13c044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c048: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x13c048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c04c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x13c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13c050: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x13c050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x13c054: 0xc04f054  jal         func_13C150
    ctx->pc = 0x13C054u;
    SET_GPR_U32(ctx, 31, 0x13C05Cu);
    ctx->pc = 0x13C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C150u, 0x13C054u, 0x13C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C05Cu;
label_13c05c:
    // 0x13c05c: 0x0  nop
    ctx->pc = 0x13c05cu;
    // NOP
    ctx->pc = 0x13c060u;
}
