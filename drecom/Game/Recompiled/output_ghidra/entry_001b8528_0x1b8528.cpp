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

// Function: entry_001b8528
// Address: 0x1b8528 - 0x1b8550
void entry_001b8528_0x1b8528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8528_0x1b8528");
#endif

    switch (ctx->pc) {
        case 0x1b853cu: goto label_1b853c;
        default: break;
    }

    ctx->pc = 0x1b8528u;

    // 0x1b8528: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1b8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x1b852c: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x1b852cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x1b8530: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1b8530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1b8534: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1B8534u;
    SET_GPR_U32(ctx, 31, 0x1B853Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1B8534u, 0x1B853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B853Cu;
label_1b853c:
    // 0x1b853c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b853cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8540: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8544: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b8544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b8548: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1b8548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b854c: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1b854cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1b8550u;
}
