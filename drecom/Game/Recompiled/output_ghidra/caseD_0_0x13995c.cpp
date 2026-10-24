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

// Function: caseD_0
// Address: 0x13995c - 0x1399c4
void caseD_0_0x13995c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x13995c");
#endif

    switch (ctx->pc) {
        case 0x13998cu: goto label_13998c;
        case 0x1399a0u: goto label_1399a0;
        default: break;
    }

    ctx->pc = 0x13995cu;

    // 0x13995c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13995cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x139960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139964: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x139964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x139968: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x13996c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x139970: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x139974: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139974u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x139978: 0x240605ac  addiu       $a2, $zero, 0x5AC
    ctx->pc = 0x139978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1452));
    // 0x13997c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x13997cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x139980: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139984: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139984u;
    SET_GPR_U32(ctx, 31, 0x13998Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139984u, 0x13998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13998Cu;
label_13998c:
    // 0x13998c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139990: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x139990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x139994: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x139994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x139998: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x139998u;
    SET_GPR_U32(ctx, 31, 0x1399A0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x139998u, 0x1399A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399A0u;
label_1399a0:
    // 0x1399a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1399a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1399a4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1399a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1399a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1399a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1399ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1399acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1399b0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1399b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1399b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1399b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1399b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1399b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1399bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1399bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1399c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1399c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1399c4u;
}
