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

// Function: entry_0012ead0
// Address: 0x12ead0 - 0x12eb58
void entry_0012ead0_0x12ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ead0_0x12ead0");
#endif

    switch (ctx->pc) {
        case 0x12eb00u: goto label_12eb00;
        case 0x12eb0cu: goto label_12eb0c;
        default: break;
    }

    ctx->pc = 0x12ead0u;

    // 0x12ead0: 0x1e1940  sll         $v1, $fp, 5
    ctx->pc = 0x12ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x12ead4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x12ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x12ead8: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x12ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x12eadc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x12eadcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12eae0: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x12eae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12eae4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12eae8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12eaec: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x12eaf0: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x12eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x12eaf4: 0x24460570  addiu       $a2, $v0, 0x570
    ctx->pc = 0x12eaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x12eaf8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12EAF8u;
    SET_GPR_U32(ctx, 31, 0x12EB00u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12EAF8u, 0x12EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB00u;
label_12eb00:
    // 0x12eb00: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x12eb04: 0xc067588  jal         func_19D620
    ctx->pc = 0x12EB04u;
    SET_GPR_U32(ctx, 31, 0x12EB0Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x12EB04u, 0x12EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB0Cu;
label_12eb0c:
    // 0x12eb0c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x12eb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x12eb10: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x12eb10u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12eb14: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x12eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x12eb18: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x12eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12eb1c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x12eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eb20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12eb20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12eb24: 0x0  nop
    ctx->pc = 0x12eb24u;
    // NOP
    // 0x12eb28: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x12EB28u;
    {
        const bool branch_taken_0x12eb28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12eb28) {
            ctx->pc = 0x12EB60u;
            return;
        }
    }
    ctx->pc = 0x12EB30u;
    // 0x12eb30: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x12eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x12eb34: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x12eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12eb38: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x12eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eb3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12eb3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12eb40: 0x0  nop
    ctx->pc = 0x12eb40u;
    // NOP
    // 0x12eb44: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x12EB44u;
    {
        const bool branch_taken_0x12eb44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12eb44) {
            ctx->pc = 0x12EB58u;
            return;
        }
    }
    ctx->pc = 0x12EB4Cu;
    // 0x12eb4c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12eb4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12eb50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12EB50u;
    {
        const bool branch_taken_0x12eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb50) {
            ctx->pc = 0x12EB60u;
            return;
        }
    }
    ctx->pc = 0x12EB58u;
}
