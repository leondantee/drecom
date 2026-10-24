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

// Function: caseD_2
// Address: 0x139ab4 - 0x139af8
void caseD_2_0x139ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x139ab4");
#endif

    switch (ctx->pc) {
        case 0x139ad8u: goto label_139ad8;
        default: break;
    }

    ctx->pc = 0x139ab4u;

    // 0x139ab4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x139ab8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x139ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x139abc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x139ac0: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x139ac4: 0x240600ad  addiu       $a2, $zero, 0xAD
    ctx->pc = 0x139ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x139ac8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139acc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139ad0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139AD0u;
    SET_GPR_U32(ctx, 31, 0x139AD8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139AD0u, 0x139AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AD8u;
label_139ad8:
    // 0x139ad8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139adc: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x139adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139ae0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139ae4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x139ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x139ae8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139aec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x139aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x139af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139af4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x139af8u;
}
