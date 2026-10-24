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

// Function: entry_001853a8
// Address: 0x1853a8 - 0x185488
void entry_001853a8_0x1853a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001853a8_0x1853a8");
#endif

    switch (ctx->pc) {
        case 0x18540cu: goto label_18540c;
        case 0x185420u: goto label_185420;
        default: break;
    }

    ctx->pc = 0x1853a8u;

    // 0x1853a8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1853a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1853ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1853acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1853b0: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1853b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1853b4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1853b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1853b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1853b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1853bc: 0xac23033c  sw          $v1, 0x33C($at)
    ctx->pc = 0x1853bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x48033Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48033Cu, _value); } while (0);
    // 0x1853c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1853c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1853c4: 0x90230344  lbu         $v1, 0x344($at)
    ctx->pc = 0x1853c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x480344u));
    // 0x1853c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1853c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1853cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1853ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1853d0: 0x146000a7  bnez        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1853D0u;
    {
        const bool branch_taken_0x1853d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1853d0) {
            ctx->pc = 0x185670u;
            return;
        }
    }
    ctx->pc = 0x1853D8u;
    // 0x1853d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1853d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1853dc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1853dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1853e0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1853e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1853e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1853e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1853e8: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1853E8u;
    {
        const bool branch_taken_0x1853e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1853e8) {
            ctx->pc = 0x185670u;
            return;
        }
    }
    ctx->pc = 0x1853F0u;
    // 0x1853f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1853f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1853f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1853f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1853f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1853f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1853fc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1853fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185400: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x185400u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185404: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x185404u;
    SET_GPR_U32(ctx, 31, 0x18540Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x185404u, 0x18540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18540Cu;
label_18540c:
    // 0x18540c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x18540cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x185410: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x185410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185414: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x185414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185418: 0xc058f20  jal         func_163C80
    ctx->pc = 0x185418u;
    SET_GPR_U32(ctx, 31, 0x185420u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x185418u, 0x185420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185420u;
label_185420:
    // 0x185420: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x185420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x185424: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18542c: 0x0  nop
    ctx->pc = 0x18542cu;
    // NOP
    // 0x185430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185434: 0x0  nop
    ctx->pc = 0x185434u;
    // NOP
    // 0x185438: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x185438u;
    {
        const bool branch_taken_0x185438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185438) {
            ctx->pc = 0x185508u;
            return;
        }
    }
    ctx->pc = 0x185440u;
    // 0x185440: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185444: 0x90220347  lbu         $v0, 0x347($at)
    ctx->pc = 0x185444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480347u));
    // 0x185448: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x185448u;
    {
        const bool branch_taken_0x185448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185448) {
            ctx->pc = 0x1854ACu;
            return;
        }
    }
    ctx->pc = 0x185450u;
    // 0x185450: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185454: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x185454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x185458: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18545c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18545cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185460: 0x0  nop
    ctx->pc = 0x185460u;
    // NOP
    // 0x185464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185468: 0x0  nop
    ctx->pc = 0x185468u;
    // NOP
    // 0x18546c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18546Cu;
    {
        const bool branch_taken_0x18546c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18546c) {
            ctx->pc = 0x185488u;
            return;
        }
    }
    ctx->pc = 0x185474u;
    // 0x185474: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x185474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x185478: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18547c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18547cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185480: 0x0  nop
    ctx->pc = 0x185480u;
    // NOP
    // 0x185484: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x185484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x185488u;
}
