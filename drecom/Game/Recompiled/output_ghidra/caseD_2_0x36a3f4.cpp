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
// Address: 0x36a3f4 - 0x36a474
void caseD_2_0x36a3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x36a3f4");
#endif

    switch (ctx->pc) {
        case 0x36a414u: goto label_36a414;
        case 0x36a424u: goto label_36a424;
        case 0x36a444u: goto label_36a444;
        case 0x36a450u: goto label_36a450;
        case 0x36a45cu: goto label_36a45c;
        default: break;
    }

    ctx->pc = 0x36a3f4u;

    // 0x36a3f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a3f8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a3fc: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a400: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x36a400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a408: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a40c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A40Cu;
    SET_GPR_U32(ctx, 31, 0x36A414u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A40Cu, 0x36A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A414u;
label_36a414:
    // 0x36a414: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a418: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x36a418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a41c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x36A41Cu;
    SET_GPR_U32(ctx, 31, 0x36A424u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x36A41Cu, 0x36A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A424u;
label_36a424:
    // 0x36a424: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x36a424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x36a428: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x36a428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x36a42c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x36a42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x36a430: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x36a430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x36a434: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x36a434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x36a438: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36a438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36a43c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x36A43Cu;
    SET_GPR_U32(ctx, 31, 0x36A444u);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x36A43Cu, 0x36A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A444u;
label_36a444:
    // 0x36a444: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36a444u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36a448: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x36A448u;
    SET_GPR_U32(ctx, 31, 0x36A450u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x36A448u, 0x36A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A450u;
label_36a450:
    // 0x36a450: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x36a450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x36a454: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36A454u;
    SET_GPR_U32(ctx, 31, 0x36A45Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36A454u, 0x36A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A45Cu;
label_36a45c:
    // 0x36a45c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a460: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36a460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36a464: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a468: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a46c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a470: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36a474u;
}
