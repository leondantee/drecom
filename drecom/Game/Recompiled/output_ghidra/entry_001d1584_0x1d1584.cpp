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

// Function: entry_001d1584
// Address: 0x1d1584 - 0x1d1614
void entry_001d1584_0x1d1584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1584_0x1d1584");
#endif

    switch (ctx->pc) {
        case 0x1d15bcu: goto label_1d15bc;
        case 0x1d15c8u: goto label_1d15c8;
        default: break;
    }

    ctx->pc = 0x1d1584u;

    // 0x1d1584: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d1584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d1588: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1d1588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d158c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d158cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d1590: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1d1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1d1594: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1d1594u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1598: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x1d1598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d159c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d15a0: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1d15a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d15a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d15a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1d15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d15ac: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1d15acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d15b0: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x1d15b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1d15b4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D15B4u;
    SET_GPR_U32(ctx, 31, 0x1D15BCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D15B4u, 0x1D15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15BCu;
label_1d15bc:
    // 0x1d15bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1d15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d15c0: 0xc067588  jal         func_19D620
    ctx->pc = 0x1D15C0u;
    SET_GPR_U32(ctx, 31, 0x1D15C8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1D15C0u, 0x1D15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15C8u;
label_1d15c8:
    // 0x1d15c8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d15c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1d15cc: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1d15ccu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d15d0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1d15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d15d4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1d15d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d15d8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d15d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d15dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d15dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d15e0: 0x0  nop
    ctx->pc = 0x1d15e0u;
    // NOP
    // 0x1d15e4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1D15E4u;
    {
        const bool branch_taken_0x1d15e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d15e4) {
            ctx->pc = 0x1D1618u;
            return;
        }
    }
    ctx->pc = 0x1D15ECu;
    // 0x1d15ec: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d15f0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1d15f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d15f4: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d15f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d15f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d15f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d15fc: 0x0  nop
    ctx->pc = 0x1d15fcu;
    // NOP
    // 0x1d1600: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1600u;
    {
        const bool branch_taken_0x1d1600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1600) {
            ctx->pc = 0x1D1614u;
            return;
        }
    }
    ctx->pc = 0x1D1608u;
    // 0x1d1608: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x1d1608u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d160c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D160Cu;
    {
        const bool branch_taken_0x1d160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d160c) {
            ctx->pc = 0x1D1618u;
            return;
        }
    }
    ctx->pc = 0x1D1614u;
}
