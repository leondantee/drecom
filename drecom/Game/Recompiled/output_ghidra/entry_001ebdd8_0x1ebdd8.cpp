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

// Function: entry_001ebdd8
// Address: 0x1ebdd8 - 0x1ebe80
void entry_001ebdd8_0x1ebdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebdd8_0x1ebdd8");
#endif

    switch (ctx->pc) {
        case 0x1ebdf0u: goto label_1ebdf0;
        default: break;
    }

    ctx->pc = 0x1ebdd8u;

    // 0x1ebdd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ebdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebde0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1ebde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1ebde4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1ebde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1ebde8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1EBDE8u;
    SET_GPR_U32(ctx, 31, 0x1EBDF0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1EBDE8u, 0x1EBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBDF0u;
label_1ebdf0:
    // 0x1ebdf0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ebdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1ebdf4: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1ebdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1ebdf8: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1ebdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1ebdfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebe00: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ebe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe04: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ebe04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebe08: 0x0  nop
    ctx->pc = 0x1ebe08u;
    // NOP
    // 0x1ebe0c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x1EBE0Cu;
    {
        const bool branch_taken_0x1ebe0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe0c) {
            ctx->pc = 0x1EBE80u;
            return;
        }
    }
    ctx->pc = 0x1EBE14u;
    // 0x1ebe14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebe18: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1ebe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebe1c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ebe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ebe20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebe20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebe24: 0x0  nop
    ctx->pc = 0x1ebe24u;
    // NOP
    // 0x1ebe28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ebe28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebe2c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ebe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ebe30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebe34: 0x0  nop
    ctx->pc = 0x1ebe34u;
    // NOP
    // 0x1ebe38: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1EBE38u;
    {
        const bool branch_taken_0x1ebe38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe38) {
            ctx->pc = 0x1EBE80u;
            return;
        }
    }
    ctx->pc = 0x1EBE40u;
    // 0x1ebe40: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ebe40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebe44: 0xc4c10124  lwc1        $f1, 0x124($a2)
    ctx->pc = 0x1ebe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebe48: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1ebe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1ebe4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebe4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebe50: 0x0  nop
    ctx->pc = 0x1ebe50u;
    // NOP
    // 0x1ebe54: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ebe54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebe58: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ebe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ebe5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebe60: 0x0  nop
    ctx->pc = 0x1ebe60u;
    // NOP
    // 0x1ebe64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBE64u;
    {
        const bool branch_taken_0x1ebe64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe64) {
            ctx->pc = 0x1EBE80u;
            return;
        }
    }
    ctx->pc = 0x1EBE6Cu;
    // 0x1ebe6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebe70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebe74: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1ebe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ebe78: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x1ebe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1ebe7c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1ebe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1ebe80u;
}
