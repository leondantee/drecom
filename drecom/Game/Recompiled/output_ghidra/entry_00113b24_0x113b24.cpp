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

// Function: entry_00113b24
// Address: 0x113b24 - 0x113bb0
void entry_00113b24_0x113b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113b24_0x113b24");
#endif

    switch (ctx->pc) {
        case 0x113b30u: goto label_113b30;
        case 0x113b48u: goto label_113b48;
        default: break;
    }

    ctx->pc = 0x113b24u;

    // 0x113b24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x113b24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x113b28: 0xc04546c  jal         func_1151B0
    ctx->pc = 0x113B28u;
    SET_GPR_U32(ctx, 31, 0x113B30u);
    ctx->pc = 0x113B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B28u;
    // 0x113b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151B0u, 0x113B28u, 0x113B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B30u;
label_113b30:
    // 0x113b30: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x113b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x113b34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113b38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x113b38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x113b3c: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x113b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x113b40: 0xc045428  jal         func_1150A0
    ctx->pc = 0x113B40u;
    SET_GPR_U32(ctx, 31, 0x113B48u);
    ctx->pc = 0x113B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B40u;
    // 0x113b44: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1150A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1150A0u, 0x113B40u, 0x113B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B48u;
label_113b48:
    // 0x113b48: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x113b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x113b4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113b50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x113b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x113b54: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x113b54u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x113b58: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113b58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x113b5c: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x113b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x113b60: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x113b60u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113b64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113b68: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x113B68u;
    {
        const bool branch_taken_0x113b68 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x113B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B68u;
        // 0x113b6c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b68) {
            ctx->pc = 0x113BB0u;
            return;
        }
    }
    ctx->pc = 0x113B70u;
    // 0x113b70: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x113b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113b74: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x113b78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113b7c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x113b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x113b80: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x113b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113b84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x113b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x113b88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113b8c: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x113b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x113b90: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x113b94: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x113b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x113b98: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x113b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x113b9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x113b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113ba0: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x113ba0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x113ba4: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x113ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x113ba8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x113BA8u;
    {
        const bool branch_taken_0x113ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BA8u;
        // 0x113bac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ba8) {
            ctx->pc = 0x113BECu;
            return;
        }
    }
    ctx->pc = 0x113BB0u;
}
