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

// Function: entry_001409d4
// Address: 0x1409d4 - 0x140a0c
void entry_001409d4_0x1409d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001409d4_0x1409d4");
#endif

    ctx->pc = 0x1409d4u;

    // 0x1409d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1409d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1409d8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1409d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1409dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1409dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1409e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1409e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1409e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1409E4u;
    {
        const bool branch_taken_0x1409e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409e4) {
            ctx->pc = 0x140A0Cu;
            return;
        }
    }
    ctx->pc = 0x1409ECu;
    // 0x1409ec: 0x8e050a70  lw          $a1, 0xA70($s0)
    ctx->pc = 0x1409ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x1409f0: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x1409f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x1409f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1409f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1409f8: 0x2444ef90  addiu       $a0, $v0, -0x1070
    ctx->pc = 0x1409f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x1409fc: 0x24a501a0  addiu       $a1, $a1, 0x1A0
    ctx->pc = 0x1409fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 416));
    // 0x140a00: 0x24660190  addiu       $a2, $v1, 0x190
    ctx->pc = 0x140a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x140a04: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x140A04u;
    SET_GPR_U32(ctx, 31, 0x140A0Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x140A04u, 0x140A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A0Cu;
}
