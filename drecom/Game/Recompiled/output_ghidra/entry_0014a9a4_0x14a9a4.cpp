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

// Function: entry_0014a9a4
// Address: 0x14a9a4 - 0x14aad4
void entry_0014a9a4_0x14a9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a9a4_0x14a9a4");
#endif

    switch (ctx->pc) {
        case 0x14a9f8u: goto label_14a9f8;
        case 0x14aa0cu: goto label_14aa0c;
        case 0x14aa24u: goto label_14aa24;
        default: break;
    }

    ctx->pc = 0x14a9a4u;

    // 0x14a9a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14a9a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a9a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a9ac: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x14a9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x14a9b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a9b4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14a9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a9b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a9bc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a9c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14a9c4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14a9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14a9c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a9cc: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x14a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a9d0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x14a9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a9d8: 0x0  nop
    ctx->pc = 0x14a9d8u;
    // NOP
    // 0x14a9dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14a9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14a9e0: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14a9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x14a9e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a9e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a9ec: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14a9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a9f0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14A9F0u;
    SET_GPR_U32(ctx, 31, 0x14A9F8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14A9F0u, 0x14A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9F8u;
label_14a9f8:
    // 0x14a9f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14a9fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aa00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14aa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14aa04: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14AA04u;
    SET_GPR_U32(ctx, 31, 0x14AA0Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14AA04u, 0x14AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA0Cu;
label_14aa0c:
    // 0x14aa0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aa10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aa14: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14aa18: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14aa1c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14AA1Cu;
    SET_GPR_U32(ctx, 31, 0x14AA24u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14AA1Cu, 0x14AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA24u;
label_14aa24:
    // 0x14aa24: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14aa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14aa28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aa2c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14aa30: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14aa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aa34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14aa34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14aa38: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14aa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14aa3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aa40: 0x8c4312c4  lw          $v1, 0x12C4($v0)
    ctx->pc = 0x14aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
    // 0x14aa44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14aa48: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14AA48u;
    {
        const bool branch_taken_0x14aa48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14aa48) {
            ctx->pc = 0x14AB20u;
            return;
        }
    }
    ctx->pc = 0x14AA50u;
    // 0x14aa50: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14aa54: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x14aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x14aa58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14aa58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14aa5c: 0x0  nop
    ctx->pc = 0x14aa5cu;
    // NOP
    // 0x14aa60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14aa60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14aa64: 0x0  nop
    ctx->pc = 0x14aa64u;
    // NOP
    // 0x14aa68: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x14AA68u;
    {
        const bool branch_taken_0x14aa68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14aa68) {
            ctx->pc = 0x14AAD4u;
            return;
        }
    }
    ctx->pc = 0x14AA70u;
    // 0x14aa70: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x14aa74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14aa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14aa78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aa7c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14aa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x14aa80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aa84: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14aa88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aa8c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aa90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14aa90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14aa94: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14aa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14aa98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aa9c: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14aaa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aaa4: 0xc4401280  lwc1        $f0, 0x1280($v0)
    ctx->pc = 0x14aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aaa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14aaa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14aaac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aab0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14aab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14aab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14aab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14aab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aabc: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14aabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x14aac0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14aac4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aac8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x14aac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14aacc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14AACCu;
    {
        const bool branch_taken_0x14aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aacc) {
            ctx->pc = 0x14AB44u;
            return;
        }
    }
    ctx->pc = 0x14AAD4u;
}
