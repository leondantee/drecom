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

// Function: caseD_3
// Address: 0x2333a8 - 0x2333d4
void caseD_3_0x2333a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2333a8");
#endif

    switch (ctx->pc) {
        case 0x2333c4u: goto label_2333c4;
        default: break;
    }

    ctx->pc = 0x2333a8u;

    // 0x2333a8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2333ac: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x2333acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2333b0: 0x24060501  addiu       $a2, $zero, 0x501
    ctx->pc = 0x2333b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x2333b4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2333b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2333b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2333b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2333bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2333BCu;
    SET_GPR_U32(ctx, 31, 0x2333C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2333BCu, 0x2333C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333C4u;
label_2333c4:
    // 0x2333c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2333c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2333c8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2333c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2333cc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2333ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2333d0: 0xa600127a  sh          $zero, 0x127A($s0)
    ctx->pc = 0x2333d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2333d4u;
}
