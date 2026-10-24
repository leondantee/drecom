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

// Function: caseD_4
// Address: 0x13a0e8 - 0x13a12c
void caseD_4_0x13a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x13a0e8");
#endif

    switch (ctx->pc) {
        case 0x13a10cu: goto label_13a10c;
        default: break;
    }

    ctx->pc = 0x13a0e8u;

    // 0x13a0e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x13a0ec: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x13a0f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x13a0f4: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x13a0f8: 0x240600b1  addiu       $a2, $zero, 0xB1
    ctx->pc = 0x13a0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x13a0fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13a0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a100: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13a100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13a104: 0xc0965d0  jal         func_259740
    ctx->pc = 0x13A104u;
    SET_GPR_U32(ctx, 31, 0x13A10Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13A104u, 0x13A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A10Cu;
label_13a10c:
    // 0x13a10c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a110: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x13a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a114: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a118: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x13a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x13a11c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a120: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13a124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a128: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13a12cu;
}
