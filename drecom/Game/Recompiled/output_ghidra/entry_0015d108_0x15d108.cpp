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

// Function: entry_0015d108
// Address: 0x15d108 - 0x15d1bc
void entry_0015d108_0x15d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d108_0x15d108");
#endif

    switch (ctx->pc) {
        case 0x15d134u: goto label_15d134;
        default: break;
    }

    ctx->pc = 0x15d108u;

    // 0x15d108: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x15d108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d10c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d110: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15d110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15d114: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x15D114u;
    {
        const bool branch_taken_0x15d114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d114) {
            ctx->pc = 0x15D1D8u;
            return;
        }
    }
    ctx->pc = 0x15D11Cu;
    // 0x15d11c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d120: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d124: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d128: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x15d12c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x15D12Cu;
    SET_GPR_U32(ctx, 31, 0x15D134u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x15D12Cu, 0x15D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D134u;
label_15d134:
    // 0x15d134: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15d138: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15d138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15d13c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15d140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d144: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d148: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15d148u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d14c: 0x0  nop
    ctx->pc = 0x15d14cu;
    // NOP
    // 0x15d150: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x15D150u;
    {
        const bool branch_taken_0x15d150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d150) {
            ctx->pc = 0x15D1D8u;
            return;
        }
    }
    ctx->pc = 0x15D158u;
    // 0x15d158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d15c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x15d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d160: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d164: 0xc44013bc  lwc1        $f0, 0x13BC($v0)
    ctx->pc = 0x15d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d168: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15d168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d16c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15d170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d174: 0x0  nop
    ctx->pc = 0x15d174u;
    // NOP
    // 0x15d178: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x15D178u;
    {
        const bool branch_taken_0x15d178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d178) {
            ctx->pc = 0x15D1BCu;
            return;
        }
    }
    ctx->pc = 0x15D180u;
    // 0x15d180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d184: 0xc44113bc  lwc1        $f1, 0x13BC($v0)
    ctx->pc = 0x15d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d188: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d18c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x15d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15d190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15d194: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x15d198: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d19c: 0xc46113bc  lwc1        $f1, 0x13BC($v1)
    ctx->pc = 0x15d19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d1a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x15d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x15d1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d1a8: 0x0  nop
    ctx->pc = 0x15d1a8u;
    // NOP
    // 0x15d1ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15d1acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15d1b0: 0xe46013bc  swc1        $f0, 0x13BC($v1)
    ctx->pc = 0x15d1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5052), bits); }
    // 0x15d1b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15D1B4u;
    {
        const bool branch_taken_0x15d1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1b4) {
            ctx->pc = 0x15D1D8u;
            return;
        }
    }
    ctx->pc = 0x15D1BCu;
}
