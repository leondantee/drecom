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

// Function: entry_00163328
// Address: 0x163328 - 0x163398
void entry_00163328_0x163328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163328_0x163328");
#endif

    switch (ctx->pc) {
        case 0x16333cu: goto label_16333c;
        default: break;
    }

    ctx->pc = 0x163328u;

    // 0x163328: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x163328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16332c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16332cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163330: 0xc42d4f28  lwc1        $f13, 0x4F28($at)
    ctx->pc = 0x163330u;
    { uint32_t bits = FAST_READ32(0x3F4F28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163334: 0xc058f20  jal         func_163C80
    ctx->pc = 0x163334u;
    SET_GPR_U32(ctx, 31, 0x16333Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x163334u, 0x16333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16333Cu;
label_16333c:
    // 0x16333c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x16333cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x163340: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163348: 0x0  nop
    ctx->pc = 0x163348u;
    // NOP
    // 0x16334c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16334cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163350: 0x0  nop
    ctx->pc = 0x163350u;
    // NOP
    // 0x163354: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x163354u;
    {
        const bool branch_taken_0x163354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163354) {
            ctx->pc = 0x1633F4u;
            return;
        }
    }
    ctx->pc = 0x16335Cu;
    // 0x16335c: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x16335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163360: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x163364: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16336c: 0x0  nop
    ctx->pc = 0x16336cu;
    // NOP
    // 0x163370: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163374: 0x0  nop
    ctx->pc = 0x163374u;
    // NOP
    // 0x163378: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x163378u;
    {
        const bool branch_taken_0x163378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163378) {
            ctx->pc = 0x163398u;
            return;
        }
    }
    ctx->pc = 0x163380u;
    // 0x163380: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163384: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163388: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16338c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x16338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163390: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163394: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x163398u;
}
