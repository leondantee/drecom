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

// Function: entry_00198914
// Address: 0x198914 - 0x1989dc
void entry_00198914_0x198914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198914_0x198914");
#endif

    switch (ctx->pc) {
        case 0x198924u: goto label_198924;
        case 0x198944u: goto label_198944;
        case 0x198950u: goto label_198950;
        default: break;
    }

    ctx->pc = 0x198914u;

    // 0x198914: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x198918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19891c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19891Cu;
    SET_GPR_U32(ctx, 31, 0x198924u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19891Cu, 0x198924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198924u;
label_198924:
    // 0x198924: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198928: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19892c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198930: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x198930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x198934: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x198934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x198938: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x198938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19893c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19893Cu;
    SET_GPR_U32(ctx, 31, 0x198944u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x198944u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x198944u) { return; }
    ctx->pc = 0x198944u;
label_198944:
    // 0x198944: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198948: 0xc05cd10  jal         func_173440
    ctx->pc = 0x198948u;
    SET_GPR_U32(ctx, 31, 0x198950u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x198948u, 0x198950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198950u;
label_198950:
    // 0x198950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198954: 0x904209de  lbu         $v0, 0x9DE($v0)
    ctx->pc = 0x198954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2526)));
    // 0x198958: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x198958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19895c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x198960: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x198960u;
    {
        const bool branch_taken_0x198960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198960) {
            ctx->pc = 0x1989F4u;
            return;
        }
    }
    ctx->pc = 0x198968u;
    // 0x198968: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19896c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198970: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198974: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x198974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198978: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19897c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19897cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x198980: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198984: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x198984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198988: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19898c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198990: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x198994: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x198994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x198998: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19899c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1989a0: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1989a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1989a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1989a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1989a8: 0x0  nop
    ctx->pc = 0x1989a8u;
    // NOP
    // 0x1989ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1989acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1989b0: 0x0  nop
    ctx->pc = 0x1989b0u;
    // NOP
    // 0x1989b4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1989B4u;
    {
        const bool branch_taken_0x1989b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1989b4) {
            ctx->pc = 0x1989DCu;
            return;
        }
    }
    ctx->pc = 0x1989BCu;
    // 0x1989bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1989bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1989c0: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1989c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1989c4: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1989c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1989c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1989c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1989cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1989ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1989d0: 0x0  nop
    ctx->pc = 0x1989d0u;
    // NOP
    // 0x1989d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1989d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1989d8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1989d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x1989dcu;
}
