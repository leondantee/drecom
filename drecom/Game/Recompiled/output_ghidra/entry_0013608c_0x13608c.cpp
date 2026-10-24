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

// Function: entry_0013608c
// Address: 0x13608c - 0x1360b8
void entry_0013608c_0x13608c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013608c_0x13608c");
#endif

    switch (ctx->pc) {
        case 0x1360a4u: goto label_1360a4;
        default: break;
    }

    ctx->pc = 0x13608cu;

    // 0x13608c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x13608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136090: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x136090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x136094: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x136094u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x136098: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x136098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13609c: 0xc04d470  jal         func_1351C0
    ctx->pc = 0x13609Cu;
    SET_GPR_U32(ctx, 31, 0x1360A4u);
    ctx->pc = 0x1351C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351C0u, 0x13609Cu, 0x1360A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360A4u;
label_1360a4:
    // 0x1360a4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1360a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1360a8: 0xa6020086  sh          $v0, 0x86($s0)
    ctx->pc = 0x1360a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x1360ac: 0x92020097  lbu         $v0, 0x97($s0)
    ctx->pc = 0x1360acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x1360b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1360b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1360b4: 0xa2020097  sb          $v0, 0x97($s0)
    ctx->pc = 0x1360b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1360b8u;
}
