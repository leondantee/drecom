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

// Function: entry_00231764
// Address: 0x231764 - 0x2317fc
void entry_00231764_0x231764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231764_0x231764");
#endif

    switch (ctx->pc) {
        case 0x23177cu: goto label_23177c;
        case 0x2317a8u: goto label_2317a8;
        default: break;
    }

    ctx->pc = 0x231764u;

    // 0x231764: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231768: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x231768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23176c: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x23176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231770: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x231770u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231774: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x231774u;
    SET_GPR_U32(ctx, 31, 0x23177Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231774u, 0x23177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23177Cu;
label_23177c:
    // 0x23177c: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x23177cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231780: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x231780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x231784: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231788: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23178c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x23178cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x231790: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231794: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x231794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231798: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x231798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23179c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23179cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2317a0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2317A0u;
    SET_GPR_U32(ctx, 31, 0x2317A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2317A0u, 0x2317A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317A8u;
label_2317a8:
    // 0x2317a8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2317a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2317ac: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2317acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2317b0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2317b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2317b4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2317b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2317b8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2317b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2317bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2317bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2317c0: 0x0  nop
    ctx->pc = 0x2317c0u;
    // NOP
    // 0x2317c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2317c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2317c8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2317c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2317cc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2317ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2317d0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2317d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2317d4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2317d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2317d8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2317d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2317dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2317dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2317e0: 0x0  nop
    ctx->pc = 0x2317e0u;
    // NOP
    // 0x2317e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2317E4u;
    {
        const bool branch_taken_0x2317e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2317e4) {
            ctx->pc = 0x2317FCu;
            return;
        }
    }
    ctx->pc = 0x2317ECu;
    // 0x2317ec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2317ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2317f0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2317f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2317f4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2317f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2317f8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2317f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    ctx->pc = 0x2317fcu;
}
