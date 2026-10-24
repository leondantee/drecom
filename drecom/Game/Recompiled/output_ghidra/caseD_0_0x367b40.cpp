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
// Address: 0x367b40 - 0x367bb0
void caseD_0_0x367b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x367b40");
#endif

    switch (ctx->pc) {
        case 0x367b60u: goto label_367b60;
        case 0x367b84u: goto label_367b84;
        default: break;
    }

    ctx->pc = 0x367b40u;

    // 0x367b40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367b44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367b48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x367b4c: 0x24060513  addiu       $a2, $zero, 0x513
    ctx->pc = 0x367b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1299));
    // 0x367b50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367b54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367b58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367B58u;
    SET_GPR_U32(ctx, 31, 0x367B60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367B58u, 0x367B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B60u;
label_367b60:
    // 0x367b60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367b64: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x367b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367b68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x367b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x367b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x367b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367b74: 0x0  nop
    ctx->pc = 0x367b74u;
    // NOP
    // 0x367b78: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x367b78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x367b7c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x367B7Cu;
    SET_GPR_U32(ctx, 31, 0x367B84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x367B7Cu, 0x367B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B84u;
label_367b84:
    // 0x367b84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367b88: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x367b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x367b8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367b90: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x367b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x367b94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x367b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x367b98: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x367b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367b9c: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x367b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x367ba0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367ba4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x367bac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367bacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x367bb0u;
}
