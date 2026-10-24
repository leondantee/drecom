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

// Function: entry_0014cb14
// Address: 0x14cb14 - 0x14cb60
void entry_0014cb14_0x14cb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb14_0x14cb14");
#endif

    switch (ctx->pc) {
        case 0x14cb34u: goto label_14cb34;
        case 0x14cb58u: goto label_14cb58;
        default: break;
    }

    ctx->pc = 0x14cb14u;

    // 0x14cb14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14cb20: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x14cb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x14cb24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14cb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cb28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14cb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14cb2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14CB2Cu;
    SET_GPR_U32(ctx, 31, 0x14CB34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14CB2Cu, 0x14CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB34u;
label_14cb34:
    // 0x14cb34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb38: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x14cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cb3c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14cb40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14cb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14cb44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cb48: 0x0  nop
    ctx->pc = 0x14cb48u;
    // NOP
    // 0x14cb4c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x14cb4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14cb50: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14CB50u;
    SET_GPR_U32(ctx, 31, 0x14CB58u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14CB50u, 0x14CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB58u;
label_14cb58:
    // 0x14cb58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb5c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x14cb60u;
}
