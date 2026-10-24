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
// Address: 0x139bc8 - 0x139c0c
void caseD_4_0x139bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x139bc8");
#endif

    switch (ctx->pc) {
        case 0x139becu: goto label_139bec;
        default: break;
    }

    ctx->pc = 0x139bc8u;

    // 0x139bc8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x139bcc: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x139bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x139bd0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x139bd4: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x139bd8: 0x240600ae  addiu       $a2, $zero, 0xAE
    ctx->pc = 0x139bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x139bdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139be0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139be4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139BE4u;
    SET_GPR_U32(ctx, 31, 0x139BECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139BE4u, 0x139BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BECu;
label_139bec:
    // 0x139bec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139bf0: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x139bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139bf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139bf8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x139bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x139bfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c00: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x139c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x139c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139c08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x139c0cu;
}
