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

// Function: entry_00320230
// Address: 0x320230 - 0x3202b4
void entry_00320230_0x320230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320230_0x320230");
#endif

    switch (ctx->pc) {
        case 0x320258u: goto label_320258;
        case 0x320288u: goto label_320288;
        default: break;
    }

    ctx->pc = 0x320230u;

    // 0x320230: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x320230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320234: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320238: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x320238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32023c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x32023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x320240: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x320240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x320244: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320248: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x320248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32024c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x320250: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x320250u;
    SET_GPR_U32(ctx, 31, 0x320258u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x320250u, 0x320258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320258u;
label_320258:
    // 0x320258: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32025c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x32025cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x320260: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x320260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x320264: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x320264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x320268: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32026c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x32026cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320270: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x320270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320274: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320278: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x320278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32027c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x32027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x320280: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x320280u;
    SET_GPR_U32(ctx, 31, 0x320288u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x320280u, 0x320288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320288u;
label_320288:
    // 0x320288: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32028c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x32028cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x320290: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x320290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x320294: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x320294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x320298: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320298u;
    {
        const bool branch_taken_0x320298 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x320298) {
            ctx->pc = 0x3202B4u;
            return;
        }
    }
    ctx->pc = 0x3202A0u;
    // 0x3202a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3202a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3202a4: 0x0  nop
    ctx->pc = 0x3202a4u;
    // NOP
    // 0x3202a8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3202a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3202ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3202ACu;
    {
        const bool branch_taken_0x3202ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3202ac) {
            ctx->pc = 0x3202D0u;
            return;
        }
    }
    ctx->pc = 0x3202B4u;
}
