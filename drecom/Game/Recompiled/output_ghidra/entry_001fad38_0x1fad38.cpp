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

// Function: entry_001fad38
// Address: 0x1fad38 - 0x1faddc
void entry_001fad38_0x1fad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fad38_0x1fad38");
#endif

    switch (ctx->pc) {
        case 0x1fad58u: goto label_1fad58;
        case 0x1fad80u: goto label_1fad80;
        case 0x1fadb0u: goto label_1fadb0;
        default: break;
    }

    ctx->pc = 0x1fad38u;

    // 0x1fad38: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fad38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fad3c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fad48: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fad48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fad4c: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fad50: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FAD50u;
    SET_GPR_U32(ctx, 31, 0x1FAD58u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FAD50u, 0x1FAD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD58u;
label_1fad58:
    // 0x1fad58: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fad58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fad5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad60: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad64: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fad68: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fad68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fad6c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad70: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fad70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad74: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fad74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fad78: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FAD78u;
    SET_GPR_U32(ctx, 31, 0x1FAD80u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FAD78u, 0x1FAD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD80u;
label_1fad80:
    // 0x1fad80: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad84: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fad84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fad88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fad8c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fad90: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad94: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad98: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fad98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fad9c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fada0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fada0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fada4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fada8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FADA8u;
    SET_GPR_U32(ctx, 31, 0x1FADB0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FADA8u, 0x1FADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FADB0u;
label_1fadb0:
    // 0x1fadb0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fadb4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fadb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fadb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fadb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fadbc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fadc0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FADC0u;
    {
        const bool branch_taken_0x1fadc0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fadc0) {
            ctx->pc = 0x1FADDCu;
            return;
        }
    }
    ctx->pc = 0x1FADC8u;
    // 0x1fadc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fadc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fadcc: 0x0  nop
    ctx->pc = 0x1fadccu;
    // NOP
    // 0x1fadd0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fadd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fadd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FADD4u;
    {
        const bool branch_taken_0x1fadd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fadd4) {
            ctx->pc = 0x1FADF8u;
            return;
        }
    }
    ctx->pc = 0x1FADDCu;
}
