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

// Function: entry_001fcbc8
// Address: 0x1fcbc8 - 0x1fcc64
void entry_001fcbc8_0x1fcbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcbc8_0x1fcbc8");
#endif

    switch (ctx->pc) {
        case 0x1fcbe0u: goto label_1fcbe0;
        case 0x1fcc08u: goto label_1fcc08;
        case 0x1fcc38u: goto label_1fcc38;
        default: break;
    }

    ctx->pc = 0x1fcbc8u;

    // 0x1fcbc8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcbcc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcbd0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fcbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcbd4: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fcbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fcbd8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FCBD8u;
    SET_GPR_U32(ctx, 31, 0x1FCBE0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FCBD8u, 0x1FCBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBE0u;
label_1fcbe0:
    // 0x1fcbe0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fcbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fcbe4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcbe8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fcbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcbec: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fcbf0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fcbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fcbf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcbf8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fcbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcbfc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fcbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcc00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FCC00u;
    SET_GPR_U32(ctx, 31, 0x1FCC08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FCC00u, 0x1FCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC08u;
label_1fcc08:
    // 0x1fcc08: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc0c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcc10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fcc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fcc14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fcc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fcc18: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc1c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fcc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcc20: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fcc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fcc24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc28: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fcc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcc2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcc30: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FCC30u;
    SET_GPR_U32(ctx, 31, 0x1FCC38u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FCC30u, 0x1FCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC38u;
label_1fcc38:
    // 0x1fcc38: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc3c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcc40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fcc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fcc44: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fcc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fcc48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCC48u;
    {
        const bool branch_taken_0x1fcc48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fcc48) {
            ctx->pc = 0x1FCC64u;
            return;
        }
    }
    ctx->pc = 0x1FCC50u;
    // 0x1fcc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fcc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcc54: 0x0  nop
    ctx->pc = 0x1fcc54u;
    // NOP
    // 0x1fcc58: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fcc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fcc5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCC5Cu;
    {
        const bool branch_taken_0x1fcc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc5c) {
            ctx->pc = 0x1FCC80u;
            return;
        }
    }
    ctx->pc = 0x1FCC64u;
}
