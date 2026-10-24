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

// Function: entry_001fbf9c
// Address: 0x1fbf9c - 0x1fc020
void entry_001fbf9c_0x1fbf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbf9c_0x1fbf9c");
#endif

    switch (ctx->pc) {
        case 0x1fbfc4u: goto label_1fbfc4;
        case 0x1fbff4u: goto label_1fbff4;
        default: break;
    }

    ctx->pc = 0x1fbf9cu;

    // 0x1fbf9c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fbf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbfa0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfa4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fbfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbfa8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fbfac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fbfb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfb4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fbfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbfb8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fbfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbfbc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FBFBCu;
    SET_GPR_U32(ctx, 31, 0x1FBFC4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FBFBCu, 0x1FBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFC4u;
label_1fbfc4:
    // 0x1fbfc4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfc8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fbfc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fbfcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fbfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbfd0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fbfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fbfd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfd8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fbfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbfdc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fbfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbfe0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfe4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fbfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbfe8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbfec: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FBFECu;
    SET_GPR_U32(ctx, 31, 0x1FBFF4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FBFECu, 0x1FBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFF4u;
label_1fbff4:
    // 0x1fbff4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbff8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fbff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fbffc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fbffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc000: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fc000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc004: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC004u;
    {
        const bool branch_taken_0x1fc004 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc004) {
            ctx->pc = 0x1FC020u;
            return;
        }
    }
    ctx->pc = 0x1FC00Cu;
    // 0x1fc00c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc010: 0x0  nop
    ctx->pc = 0x1fc010u;
    // NOP
    // 0x1fc014: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc018: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC018u;
    {
        const bool branch_taken_0x1fc018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc018) {
            ctx->pc = 0x1FC03Cu;
            return;
        }
    }
    ctx->pc = 0x1FC020u;
}
