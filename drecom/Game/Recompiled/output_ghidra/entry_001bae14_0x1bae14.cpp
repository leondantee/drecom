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

// Function: entry_001bae14
// Address: 0x1bae14 - 0x1bae40
void entry_001bae14_0x1bae14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae14_0x1bae14");
#endif

    switch (ctx->pc) {
        case 0x1bae34u: goto label_1bae34;
        default: break;
    }

    ctx->pc = 0x1bae14u;

    // 0x1bae14: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bae18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bae1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bae20: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1bae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x1bae24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bae24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bae28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bae28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bae2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BAE2Cu, 0x1BAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE34u;
label_1bae34:
    // 0x1bae34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bae34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bae38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bae3c: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1bae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x1bae40u;
}
