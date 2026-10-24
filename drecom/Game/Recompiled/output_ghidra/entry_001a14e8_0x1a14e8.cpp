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

// Function: entry_001a14e8
// Address: 0x1a14e8 - 0x1a1518
void entry_001a14e8_0x1a14e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a14e8_0x1a14e8");
#endif

    switch (ctx->pc) {
        case 0x1a1504u: goto label_1a1504;
        default: break;
    }

    ctx->pc = 0x1a14e8u;

    // 0x1a14e8: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x1a14e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a14ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a14ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a14f0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A14F0u;
    {
        const bool branch_taken_0x1a14f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a14f0) {
            ctx->pc = 0x1A1518u;
            return;
        }
    }
    ctx->pc = 0x1A14F8u;
    // 0x1a14f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a14f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a14fc: 0xc06855c  jal         func_1A1570
    ctx->pc = 0x1A14FCu;
    SET_GPR_U32(ctx, 31, 0x1A1504u);
    ctx->pc = 0x1A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1570u, 0x1A14FCu, 0x1A1504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1504u;
label_1a1504:
    // 0x1a1504: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x1a1504u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a1508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a150c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a150cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1510u;
    {
        const bool branch_taken_0x1a1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1510) {
            ctx->pc = 0x1A1528u;
            return;
        }
    }
    ctx->pc = 0x1A1518u;
}
