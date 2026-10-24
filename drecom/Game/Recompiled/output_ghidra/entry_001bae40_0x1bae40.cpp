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

// Function: entry_001bae40
// Address: 0x1bae40 - 0x1bae68
void entry_001bae40_0x1bae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae40_0x1bae40");
#endif

    switch (ctx->pc) {
        case 0x1bae54u: goto label_1bae54;
        default: break;
    }

    ctx->pc = 0x1bae40u;

    // 0x1bae40: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1bae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1bae44: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1bae44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x1bae48: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1bae48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1bae4c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1BAE4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE54u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1BAE4Cu, 0x1BAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE54u;
label_1bae54:
    // 0x1bae54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bae54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bae58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bae5c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bae5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bae60: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1bae60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bae64: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x1bae64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1bae68u;
}
