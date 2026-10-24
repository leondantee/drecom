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

// Function: entry_003205e0
// Address: 0x3205e0 - 0x320638
void entry_003205e0_0x3205e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003205e0_0x3205e0");
#endif

    switch (ctx->pc) {
        case 0x320610u: goto label_320610;
        default: break;
    }

    ctx->pc = 0x3205e0u;

    // 0x3205e0: 0x12200077  beqz        $s1, . + 4 + (0x77 << 2)
    ctx->pc = 0x3205E0u;
    {
        const bool branch_taken_0x3205e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205e0) {
            ctx->pc = 0x3207C0u;
            return;
        }
    }
    ctx->pc = 0x3205E8u;
    // 0x3205e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3205e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205ec: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x3205ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3205f0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3205f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3205f4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3205f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3205f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3205f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205fc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3205fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320600: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x320600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320604: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x320604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320608: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x320608u;
    SET_GPR_U32(ctx, 31, 0x320610u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x320608u, 0x320610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320610u;
label_320610:
    // 0x320610: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x320610u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x320614: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320618: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x320618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x32061c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32061Cu;
    {
        const bool branch_taken_0x32061c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x32061c) {
            ctx->pc = 0x320638u;
            return;
        }
    }
    ctx->pc = 0x320624u;
    // 0x320624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x320624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320628: 0x0  nop
    ctx->pc = 0x320628u;
    // NOP
    // 0x32062c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x32062cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x320630u;
    {
        const bool branch_taken_0x320630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320630) {
            ctx->pc = 0x320654u;
            return;
        }
    }
    ctx->pc = 0x320638u;
}
