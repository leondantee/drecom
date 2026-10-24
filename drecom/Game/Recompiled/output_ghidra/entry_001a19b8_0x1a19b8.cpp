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

// Function: entry_001a19b8
// Address: 0x1a19b8 - 0x1a19f0
void entry_001a19b8_0x1a19b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a19b8_0x1a19b8");
#endif

    switch (ctx->pc) {
        case 0x1a19dcu: goto label_1a19dc;
        default: break;
    }

    ctx->pc = 0x1a19b8u;

    // 0x1a19b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a19bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a19bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a19c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a19c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a19c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a19c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a19c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a19c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a19cc: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a19ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a19d0: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a19d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a19d4: 0xc059190  jal         func_164640
    ctx->pc = 0x1A19D4u;
    SET_GPR_U32(ctx, 31, 0x1A19DCu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A19D4u, 0x1A19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19DCu;
label_1a19dc:
    // 0x1a19dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a19e0: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a19e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a19e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a19e8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a19e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a19ec: 0x0  nop
    ctx->pc = 0x1a19ecu;
    // NOP
    ctx->pc = 0x1a19f0u;
}
