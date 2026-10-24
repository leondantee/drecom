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

// Function: entry_00345a14
// Address: 0x345a14 - 0x345a44
void entry_00345a14_0x345a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345a14_0x345a14");
#endif

    switch (ctx->pc) {
        case 0x345a34u: goto label_345a34;
        default: break;
    }

    ctx->pc = 0x345a14u;

    // 0x345a14: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a18: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a1c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x345a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x345a20: 0x24061408  addiu       $a2, $zero, 0x1408
    ctx->pc = 0x345a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5128));
    // 0x345a24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x345a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345a28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x345a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345a2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345A2Cu;
    SET_GPR_U32(ctx, 31, 0x345A34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345A2Cu, 0x345A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A34u;
label_345a34:
    // 0x345a34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x345a34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x345a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345a3c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a40: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x345a40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x345a44u;
}
