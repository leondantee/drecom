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

// Function: caseD_0
// Address: 0x330df0 - 0x330eb4
void caseD_0_0x330df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x330df0");
#endif

    switch (ctx->pc) {
        case 0x330e18u: goto label_330e18;
        case 0x330e4cu: goto label_330e4c;
        case 0x330e7cu: goto label_330e7c;
        case 0x330ea8u: goto label_330ea8;
        default: break;
    }

    ctx->pc = 0x330df0u;

    // 0x330df0: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x330df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x330df4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330df4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330df8: 0x0  nop
    ctx->pc = 0x330df8u;
    // NOP
    // 0x330dfc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x330e00: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x330e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
    // 0x330e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330e08: 0x0  nop
    ctx->pc = 0x330e08u;
    // NOP
    // 0x330e0c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330e0cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x330e10: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330E10u;
    SET_GPR_U32(ctx, 31, 0x330E18u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330E10u, 0x330E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E18u;
label_330e18:
    // 0x330e18: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x330e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x330e1c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x330e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x330e20: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x330e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x330e24: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x330e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x330e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330e2c: 0x0  nop
    ctx->pc = 0x330e2cu;
    // NOP
    // 0x330e30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x330e34: 0x3c064010  lui         $a2, 0x4010
    ctx->pc = 0x330e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16400 << 16));
    // 0x330e38: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330e38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330e3c: 0x0  nop
    ctx->pc = 0x330e3cu;
    // NOP
    // 0x330e40: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330e40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x330e44: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330E44u;
    SET_GPR_U32(ctx, 31, 0x330E4Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330E44u, 0x330E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E4Cu;
label_330e4c:
    // 0x330e4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330e4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x330e50: 0xafa3023c  sw          $v1, 0x23C($sp)
    ctx->pc = 0x330e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 3));
    // 0x330e54: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x330e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x330e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330e5c: 0x0  nop
    ctx->pc = 0x330e5cu;
    // NOP
    // 0x330e60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x330e64: 0x3c064010  lui         $a2, 0x4010
    ctx->pc = 0x330e64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16400 << 16));
    // 0x330e68: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330e68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330e6c: 0x0  nop
    ctx->pc = 0x330e6cu;
    // NOP
    // 0x330e70: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x330e70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x330e74: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330E74u;
    SET_GPR_U32(ctx, 31, 0x330E7Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330E74u, 0x330E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E7Cu;
label_330e7c:
    // 0x330e7c: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x330e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x330e80: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x330e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x330e84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x330e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x330e88: 0x0  nop
    ctx->pc = 0x330e88u;
    // NOP
    // 0x330e8c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x330e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x330e90: 0x3c064010  lui         $a2, 0x4010
    ctx->pc = 0x330e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16400 << 16));
    // 0x330e94: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x330e94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x330e98: 0x0  nop
    ctx->pc = 0x330e98u;
    // NOP
    // 0x330e9c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x330e9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x330ea0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x330EA0u;
    SET_GPR_U32(ctx, 31, 0x330EA8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330EA0u, 0x330EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330EA8u;
label_330ea8:
    // 0x330ea8: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x330ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x330eac: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x330EACu;
    {
        const bool branch_taken_0x330eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330eac) {
            ctx->pc = 0x331278u;
            return;
        }
    }
    ctx->pc = 0x330EB4u;
}
