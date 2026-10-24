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

// Function: entry_0014b0d4
// Address: 0x14b0d4 - 0x14b204
void entry_0014b0d4_0x14b0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b0d4_0x14b0d4");
#endif

    switch (ctx->pc) {
        case 0x14b128u: goto label_14b128;
        case 0x14b13cu: goto label_14b13c;
        case 0x14b154u: goto label_14b154;
        default: break;
    }

    ctx->pc = 0x14b0d4u;

    // 0x14b0d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b0d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b0d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b0dc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x14b0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x14b0e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b0e4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b0e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b0ec: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b0f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b0f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14b0f4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14b0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14b0f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b0fc: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x14b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b100: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x14b104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b108: 0x0  nop
    ctx->pc = 0x14b108u;
    // NOP
    // 0x14b10c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b10cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14b110: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14b110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x14b114: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b118: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b11c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14b11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14b120: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14B120u;
    SET_GPR_U32(ctx, 31, 0x14B128u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14B120u, 0x14B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B128u;
label_14b128:
    // 0x14b128: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14b12c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b130: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14b130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14b134: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14B134u;
    SET_GPR_U32(ctx, 31, 0x14B13Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B134u, 0x14B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B13Cu;
label_14b13c:
    // 0x14b13c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b140: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b144: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14b144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14b148: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14b14c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14B14Cu;
    SET_GPR_U32(ctx, 31, 0x14B154u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14B14Cu, 0x14B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B154u;
label_14b154:
    // 0x14b154: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14b154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14b158: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b15c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b160: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b164: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14b168: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14b168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14b16c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b170: 0x8c4312c4  lw          $v1, 0x12C4($v0)
    ctx->pc = 0x14b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
    // 0x14b174: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b178: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14B178u;
    {
        const bool branch_taken_0x14b178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b178) {
            ctx->pc = 0x14B250u;
            return;
        }
    }
    ctx->pc = 0x14B180u;
    // 0x14b180: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14b180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b184: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x14b184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x14b188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b18c: 0x0  nop
    ctx->pc = 0x14b18cu;
    // NOP
    // 0x14b190: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14b190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b194: 0x0  nop
    ctx->pc = 0x14b194u;
    // NOP
    // 0x14b198: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x14B198u;
    {
        const bool branch_taken_0x14b198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b198) {
            ctx->pc = 0x14B204u;
            return;
        }
    }
    ctx->pc = 0x14B1A0u;
    // 0x14b1a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x14b1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b1a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b1ac: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14b1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x14b1b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b1b4: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b1b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b1bc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b1c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14b1c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14b1c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b1cc: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b1d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b1d4: 0xc4401280  lwc1        $f0, 0x1280($v0)
    ctx->pc = 0x14b1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b1d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b1d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14b1dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b1e0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14b1e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b1e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b1e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b1ec: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x14b1f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b1f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b1f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x14b1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b1fc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14B1FCu;
    {
        const bool branch_taken_0x14b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1fc) {
            ctx->pc = 0x14B274u;
            return;
        }
    }
    ctx->pc = 0x14B204u;
}
