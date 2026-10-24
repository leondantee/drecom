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

// Function: caseD_6
// Address: 0x1b8d74 - 0x1b8dc0
void caseD_6_0x1b8d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1b8d74");
#endif

    switch (ctx->pc) {
        case 0x1b8d94u: goto label_1b8d94;
        default: break;
    }

    ctx->pc = 0x1b8d74u;

    // 0x1b8d74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8d78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8d7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b8d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1b8d80: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1b8d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1b8d84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b8d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8d88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b8d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b8d8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B8D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B8D94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B8D8Cu, 0x1B8D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D94u;
label_1b8d94:
    // 0x1b8d94: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x1b8d98: 0x34443334  ori         $a0, $v0, 0x3334
    ctx->pc = 0x1b8d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1b8d9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8d9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8da0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8da4: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1b8da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1b8da8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8dac: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1b8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1b8db0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8db4: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1b8db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b8db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8dbc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1b8dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b8dc0u;
}
