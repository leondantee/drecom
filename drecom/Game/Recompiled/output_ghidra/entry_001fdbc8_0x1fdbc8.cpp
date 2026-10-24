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

// Function: entry_001fdbc8
// Address: 0x1fdbc8 - 0x1fdc6c
void entry_001fdbc8_0x1fdbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdbc8_0x1fdbc8");
#endif

    switch (ctx->pc) {
        case 0x1fdbe8u: goto label_1fdbe8;
        case 0x1fdc10u: goto label_1fdc10;
        case 0x1fdc40u: goto label_1fdc40;
        default: break;
    }

    ctx->pc = 0x1fdbc8u;

    // 0x1fdbc8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fdbcc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdbd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdbd4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdbd8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fdbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdbdc: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fdbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fdbe0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FDBE0u;
    SET_GPR_U32(ctx, 31, 0x1FDBE8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FDBE0u, 0x1FDBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBE8u;
label_1fdbe8:
    // 0x1fdbe8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fdbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdbec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdbf0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdbf4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fdbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fdbf8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fdbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fdbfc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc00: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fdc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdc04: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fdc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdc08: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FDC08u;
    SET_GPR_U32(ctx, 31, 0x1FDC10u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FDC08u, 0x1FDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC10u;
label_1fdc10:
    // 0x1fdc10: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc14: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fdc14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fdc18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fdc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fdc1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fdc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fdc20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc24: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fdc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdc28: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fdc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdc2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc30: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fdc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdc34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdc38: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FDC38u;
    SET_GPR_U32(ctx, 31, 0x1FDC40u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FDC38u, 0x1FDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC40u;
label_1fdc40:
    // 0x1fdc40: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc44: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fdc44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fdc48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fdc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fdc4c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fdc50: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDC50u;
    {
        const bool branch_taken_0x1fdc50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fdc50) {
            ctx->pc = 0x1FDC6Cu;
            return;
        }
    }
    ctx->pc = 0x1FDC58u;
    // 0x1fdc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdc5c: 0x0  nop
    ctx->pc = 0x1fdc5cu;
    // NOP
    // 0x1fdc60: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fdc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fdc64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDC64u;
    {
        const bool branch_taken_0x1fdc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc64) {
            ctx->pc = 0x1FDC88u;
            return;
        }
    }
    ctx->pc = 0x1FDC6Cu;
}
