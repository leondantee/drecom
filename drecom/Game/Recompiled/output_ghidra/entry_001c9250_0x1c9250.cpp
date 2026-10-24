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

// Function: entry_001c9250
// Address: 0x1c9250 - 0x1c92e8
void entry_001c9250_0x1c9250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9250_0x1c9250");
#endif

    switch (ctx->pc) {
        case 0x1c9274u: goto label_1c9274;
        case 0x1c92bcu: goto label_1c92bc;
        default: break;
    }

    ctx->pc = 0x1c9250u;

    // 0x1c9250: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9254: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x1c9254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x1c9258: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c925c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1c925cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1c9260: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1c9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c9264: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C9264u;
    {
        const bool branch_taken_0x1c9264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9264) {
            ctx->pc = 0x1C930Cu;
            return;
        }
    }
    ctx->pc = 0x1C926Cu;
    // 0x1c926c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1C926Cu;
    SET_GPR_U32(ctx, 31, 0x1C9274u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C926Cu, 0x1C9274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9274u;
label_1c9274:
    // 0x1c9274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c9278: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1c9278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1c927c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1c927cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c9280: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c9280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1c9284: 0x24429228  addiu       $v0, $v0, -0x6DD8
    ctx->pc = 0x1c9284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939176));
    // 0x1c9288: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c928c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1c928cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c9290: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1c9290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1c9294: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9298: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1c9298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1c929c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1c929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1c92a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1c92a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1c92a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c92a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c92a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c92a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c92ac: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c92acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1c92b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c92b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c92b4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C92B4u;
    SET_GPR_U32(ctx, 31, 0x1C92BCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C92B4u, 0x1C92BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92BCu;
label_1c92bc:
    // 0x1c92bc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c92c0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1c92c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c92c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c92c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c92c8: 0x0  nop
    ctx->pc = 0x1c92c8u;
    // NOP
    // 0x1c92cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c92ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c92d0: 0x0  nop
    ctx->pc = 0x1c92d0u;
    // NOP
    // 0x1c92d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C92D4u;
    {
        const bool branch_taken_0x1c92d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c92d4) {
            ctx->pc = 0x1C92E8u;
            return;
        }
    }
    ctx->pc = 0x1C92DCu;
    // 0x1c92dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c92dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c92e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c92e4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c92e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x1c92e8u;
}
