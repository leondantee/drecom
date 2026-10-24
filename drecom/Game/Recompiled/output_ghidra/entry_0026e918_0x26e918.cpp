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

// Function: entry_0026e918
// Address: 0x26e918 - 0x26e97c
void entry_0026e918_0x26e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e918_0x26e918");
#endif

    switch (ctx->pc) {
        case 0x26e938u: goto label_26e938;
        case 0x26e95cu: goto label_26e95c;
        default: break;
    }

    ctx->pc = 0x26e918u;

    // 0x26e918: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e91c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e920: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26e920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26e924: 0x2406037a  addiu       $a2, $zero, 0x37A
    ctx->pc = 0x26e924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 890));
    // 0x26e928: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26e928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e92c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26e92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26e930: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26E930u;
    SET_GPR_U32(ctx, 31, 0x26E938u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26E930u, 0x26E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E938u;
label_26e938:
    // 0x26e938: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e93c: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x26e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e940: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26e940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26e944: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26e948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e94c: 0x0  nop
    ctx->pc = 0x26e94cu;
    // NOP
    // 0x26e950: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x26e950u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e954: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x26E954u;
    SET_GPR_U32(ctx, 31, 0x26E95Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x26E954u, 0x26E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E95Cu;
label_26e95c:
    // 0x26e95c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e960: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26e960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26e964: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e968: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x26e968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x26e96c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e974: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e978: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x26e978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x26e97cu;
}
