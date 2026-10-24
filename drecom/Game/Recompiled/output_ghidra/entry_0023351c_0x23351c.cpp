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

// Function: entry_0023351c
// Address: 0x23351c - 0x233590
void entry_0023351c_0x23351c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023351c_0x23351c");
#endif

    switch (ctx->pc) {
        case 0x233568u: goto label_233568;
        case 0x233570u: goto label_233570;
        default: break;
    }

    ctx->pc = 0x23351cu;

    // 0x23351c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x23351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233520: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x233520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x233524: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x233524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x233528: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23352c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23352cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x233530: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x233530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x233534: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x233534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x233538: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x233538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23353c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x233540: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x233540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x233544: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x233548: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x233548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23354c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233550: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x233550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x233554: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x233554u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x233558: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x233558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23355c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23355cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x233560: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x233560u;
    SET_GPR_U32(ctx, 31, 0x233568u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x233560u, 0x233568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233568u;
label_233568:
    // 0x233568: 0xc067694  jal         func_19DA50
    ctx->pc = 0x233568u;
    SET_GPR_U32(ctx, 31, 0x233570u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x233568u, 0x233570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233570u;
label_233570:
    // 0x233570: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233570u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x233574: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x233574u;
    {
        const bool branch_taken_0x233574 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x233574) {
            ctx->pc = 0x233590u;
            return;
        }
    }
    ctx->pc = 0x23357Cu;
    // 0x23357c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23357cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233580: 0x0  nop
    ctx->pc = 0x233580u;
    // NOP
    // 0x233584: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x233584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x233588: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x233588u;
    {
        const bool branch_taken_0x233588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233588) {
            ctx->pc = 0x2335ACu;
            return;
        }
    }
    ctx->pc = 0x233590u;
}
