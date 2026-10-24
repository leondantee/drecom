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

// Function: entry_001361dc
// Address: 0x1361dc - 0x136208
void entry_001361dc_0x1361dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001361dc_0x1361dc");
#endif

    switch (ctx->pc) {
        case 0x1361f4u: goto label_1361f4;
        default: break;
    }

    ctx->pc = 0x1361dcu;

    // 0x1361dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1361dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1361e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1361e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1361e4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1361e8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1361e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1361ec: 0xc04d470  jal         func_1351C0
    ctx->pc = 0x1361ECu;
    SET_GPR_U32(ctx, 31, 0x1361F4u);
    ctx->pc = 0x1351C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351C0u, 0x1361ECu, 0x1361F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1361F4u;
label_1361f4:
    // 0x1361f4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1361f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1361f8: 0xa6020088  sh          $v0, 0x88($s0)
    ctx->pc = 0x1361f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x1361fc: 0x92020098  lbu         $v0, 0x98($s0)
    ctx->pc = 0x1361fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x136200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x136200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x136204: 0xa2020098  sb          $v0, 0x98($s0)
    ctx->pc = 0x136204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x136208u;
}
