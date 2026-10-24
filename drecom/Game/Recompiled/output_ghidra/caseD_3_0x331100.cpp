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

// Function: caseD_3
// Address: 0x331100 - 0x3311bc
void caseD_3_0x331100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x331100");
#endif

    switch (ctx->pc) {
        case 0x331128u: goto label_331128;
        case 0x331154u: goto label_331154;
        case 0x331180u: goto label_331180;
        case 0x3311b0u: goto label_3311b0;
        default: break;
    }

    ctx->pc = 0x331100u;

    // 0x331100: 0x8fa60230  lw          $a2, 0x230($sp)
    ctx->pc = 0x331100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x331104: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331104u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331108: 0x0  nop
    ctx->pc = 0x331108u;
    // NOP
    // 0x33110c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33110cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331110: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x331110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
    // 0x331114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331118: 0x0  nop
    ctx->pc = 0x331118u;
    // NOP
    // 0x33111c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x33111cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x331120: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x331120u;
    SET_GPR_U32(ctx, 31, 0x331128u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331120u, 0x331128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331128u;
label_331128:
    // 0x331128: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x331128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x33112c: 0x8fa70238  lw          $a3, 0x238($sp)
    ctx->pc = 0x33112cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x331130: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x331130u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331134: 0x0  nop
    ctx->pc = 0x331134u;
    // NOP
    // 0x331138: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33113c: 0x3c064090  lui         $a2, 0x4090
    ctx->pc = 0x33113cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16528 << 16));
    // 0x331140: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331140u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331144: 0x0  nop
    ctx->pc = 0x331144u;
    // NOP
    // 0x331148: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x331148u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33114c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x33114Cu;
    SET_GPR_U32(ctx, 31, 0x331154u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33114Cu, 0x331154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331154u;
label_331154:
    // 0x331154: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x331154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x331158: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x331158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x33115c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33115cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331160: 0x0  nop
    ctx->pc = 0x331160u;
    // NOP
    // 0x331164: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331168: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x331168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x33116c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33116cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331170: 0x0  nop
    ctx->pc = 0x331170u;
    // NOP
    // 0x331174: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x331174u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x331178: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x331178u;
    SET_GPR_U32(ctx, 31, 0x331180u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331178u, 0x331180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331180u;
label_331180:
    // 0x331180: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x331180u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331184: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x331184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
    // 0x331188: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x331188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x33118c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x33118cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331190: 0x0  nop
    ctx->pc = 0x331190u;
    // NOP
    // 0x331194: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331198: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x331198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x33119c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33119cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3311a0: 0x0  nop
    ctx->pc = 0x3311a0u;
    // NOP
    // 0x3311a4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3311a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3311a8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3311A8u;
    SET_GPR_U32(ctx, 31, 0x3311B0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3311A8u, 0x3311B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311B0u;
label_3311b0:
    // 0x3311b0: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x3311b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x3311b4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3311B4u;
    {
        const bool branch_taken_0x3311b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3311b4) {
            ctx->pc = 0x331278u;
            return;
        }
    }
    ctx->pc = 0x3311BCu;
}
