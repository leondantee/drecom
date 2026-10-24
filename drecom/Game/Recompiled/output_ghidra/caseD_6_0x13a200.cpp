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
// Address: 0x13a200 - 0x13a244
void caseD_6_0x13a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x13a200");
#endif

    switch (ctx->pc) {
        case 0x13a224u: goto label_13a224;
        default: break;
    }

    ctx->pc = 0x13a200u;

    // 0x13a200: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13a200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x13a204: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13a204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x13a208: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13a208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x13a20c: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x13a210: 0x240600a9  addiu       $a2, $zero, 0xA9
    ctx->pc = 0x13a210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x13a214: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13a214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a218: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13a218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13a21c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x13A21Cu;
    SET_GPR_U32(ctx, 31, 0x13A224u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13A21Cu, 0x13A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A224u;
label_13a224:
    // 0x13a224: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a228: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x13a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a22c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a230: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x13a230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x13a234: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a238: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13a23c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a240: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13a244u;
}
