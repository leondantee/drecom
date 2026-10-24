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

// Function: entry_0036b914
// Address: 0x36b914 - 0x36b988
void entry_0036b914_0x36b914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b914_0x36b914");
#endif

    switch (ctx->pc) {
        case 0x36b934u: goto label_36b934;
        case 0x36b968u: goto label_36b968;
        default: break;
    }

    ctx->pc = 0x36b914u;

    // 0x36b914: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b918: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b91c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36b920: 0x24065a01  addiu       $a2, $zero, 0x5A01
    ctx->pc = 0x36b920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x36b924: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36b924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b928: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36b928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36b92c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36B92Cu;
    SET_GPR_U32(ctx, 31, 0x36B934u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36B92Cu, 0x36B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B934u;
label_36b934:
    // 0x36b934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b938: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x36b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36b93c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36B93Cu;
    {
        const bool branch_taken_0x36b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b93c) {
            ctx->pc = 0x36B988u;
            return;
        }
    }
    ctx->pc = 0x36B944u;
    // 0x36b944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b948: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b94c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x36b950: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36b954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36b954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36b958: 0x0  nop
    ctx->pc = 0x36b958u;
    // NOP
    // 0x36b95c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x36b95cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36b960: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36B960u;
    SET_GPR_U32(ctx, 31, 0x36B968u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36B960u, 0x36B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B968u;
label_36b968:
    // 0x36b968: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b96c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36b96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36b970: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x36b970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x36b974: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36b978: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36b978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36b97c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b980: 0xc0db724  jal         func_36DC90
    ctx->pc = 0x36B980u;
    SET_GPR_U32(ctx, 31, 0x36B988u);
    ctx->pc = 0x36DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC90u, 0x36B980u, 0x36B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B988u;
}
