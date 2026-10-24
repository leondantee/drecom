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

// Function: entry_001b9978
// Address: 0x1b9978 - 0x1b99a0
void entry_001b9978_0x1b9978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9978_0x1b9978");
#endif

    switch (ctx->pc) {
        case 0x1b998cu: goto label_1b998c;
        default: break;
    }

    ctx->pc = 0x1b9978u;

    // 0x1b9978: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1b9978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x1b997c: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x1b997cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x1b9980: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1b9980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1b9984: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1B9984u;
    SET_GPR_U32(ctx, 31, 0x1B998Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1B9984u, 0x1B998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B998Cu;
label_1b998c:
    // 0x1b998c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b998cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9990: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9994: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x1b9994u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b9998: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1b9998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b999c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b999cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b99a0u;
}
