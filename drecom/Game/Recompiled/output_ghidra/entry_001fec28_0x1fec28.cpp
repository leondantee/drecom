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

// Function: entry_001fec28
// Address: 0x1fec28 - 0x1feccc
void entry_001fec28_0x1fec28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fec28_0x1fec28");
#endif

    switch (ctx->pc) {
        case 0x1fec48u: goto label_1fec48;
        case 0x1fec70u: goto label_1fec70;
        case 0x1feca0u: goto label_1feca0;
        default: break;
    }

    ctx->pc = 0x1fec28u;

    // 0x1fec28: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fec28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fec2c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec34: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fec34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fec38: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1fec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fec3c: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fec40: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FEC40u;
    SET_GPR_U32(ctx, 31, 0x1FEC48u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FEC40u, 0x1FEC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC48u;
label_1fec48:
    // 0x1fec48: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fec48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fec4c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec50: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec54: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fec58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fec58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fec5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec60: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fec60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec64: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1fec64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fec68: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FEC68u;
    SET_GPR_U32(ctx, 31, 0x1FEC70u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FEC68u, 0x1FEC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC70u;
label_1fec70:
    // 0x1fec70: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec74: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fec74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fec78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fec7c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fec80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec84: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fec84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec88: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fec88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fec8c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec90: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fec90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fec94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fec98: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FEC98u;
    SET_GPR_U32(ctx, 31, 0x1FECA0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FEC98u, 0x1FECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECA0u;
label_1feca0:
    // 0x1feca0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feca4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1feca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1feca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1feca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fecac: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fecacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fecb0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FECB0u;
    {
        const bool branch_taken_0x1fecb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fecb0) {
            ctx->pc = 0x1FECCCu;
            return;
        }
    }
    ctx->pc = 0x1FECB8u;
    // 0x1fecb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fecb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fecbc: 0x0  nop
    ctx->pc = 0x1fecbcu;
    // NOP
    // 0x1fecc0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fecc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fecc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FECC4u;
    {
        const bool branch_taken_0x1fecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fecc4) {
            ctx->pc = 0x1FECE8u;
            return;
        }
    }
    ctx->pc = 0x1FECCCu;
}
