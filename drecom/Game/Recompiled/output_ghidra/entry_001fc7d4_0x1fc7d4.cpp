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

// Function: entry_001fc7d4
// Address: 0x1fc7d4 - 0x1fc858
void entry_001fc7d4_0x1fc7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc7d4_0x1fc7d4");
#endif

    switch (ctx->pc) {
        case 0x1fc7fcu: goto label_1fc7fc;
        case 0x1fc82cu: goto label_1fc82c;
        default: break;
    }

    ctx->pc = 0x1fc7d4u;

    // 0x1fc7d4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc7d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc7dc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc7e0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fc7e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc7e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc7ec: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc7f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc7f4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FC7F4u;
    SET_GPR_U32(ctx, 31, 0x1FC7FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FC7F4u, 0x1FC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7FCu;
label_1fc7fc:
    // 0x1fc7fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc800: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc804: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc808: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc80c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc810: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc814: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc818: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc81c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc820: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc824: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FC824u;
    SET_GPR_U32(ctx, 31, 0x1FC82Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FC824u, 0x1FC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC82Cu;
label_1fc82c:
    // 0x1fc82c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc830: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc838: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fc838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc83c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC83Cu;
    {
        const bool branch_taken_0x1fc83c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc83c) {
            ctx->pc = 0x1FC858u;
            return;
        }
    }
    ctx->pc = 0x1FC844u;
    // 0x1fc844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc848: 0x0  nop
    ctx->pc = 0x1fc848u;
    // NOP
    // 0x1fc84c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc850: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC850u;
    {
        const bool branch_taken_0x1fc850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc850) {
            ctx->pc = 0x1FC874u;
            return;
        }
    }
    ctx->pc = 0x1FC858u;
}
