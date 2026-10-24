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

// Function: entry_001b6ecc
// Address: 0x1b6ecc - 0x1b6ef4
void entry_001b6ecc_0x1b6ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6ecc_0x1b6ecc");
#endif

    switch (ctx->pc) {
        case 0x1b6ee0u: goto label_1b6ee0;
        default: break;
    }

    ctx->pc = 0x1b6eccu;

    // 0x1b6ecc: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1b6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x1b6ed0: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x1b6ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x1b6ed4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1b6ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1b6ed8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1B6ED8u;
    SET_GPR_U32(ctx, 31, 0x1B6EE0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1B6ED8u, 0x1B6EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EE0u;
label_1b6ee0:
    // 0x1b6ee0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6ee0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6ee4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ee8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b6ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b6eec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b6ef0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b6ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b6ef4u;
}
