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

// Function: entry_002020b4
// Address: 0x2020b4 - 0x202138
void entry_002020b4_0x2020b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002020b4_0x2020b4");
#endif

    switch (ctx->pc) {
        case 0x2020c4u: goto label_2020c4;
        case 0x2020e8u: goto label_2020e8;
        case 0x2020fcu: goto label_2020fc;
        case 0x20210cu: goto label_20210c;
        default: break;
    }

    ctx->pc = 0x2020b4u;

    // 0x2020b4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2020b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2020b8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2020b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2020bc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2020BCu;
    SET_GPR_U32(ctx, 31, 0x2020C4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2020BCu, 0x2020C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2020C4u;
label_2020c4:
    // 0x2020c4: 0x3c034019  lui         $v1, 0x4019
    ctx->pc = 0x2020c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16409 << 16));
    // 0x2020c8: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x2020c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x2020cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2020ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2020d0: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x2020d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
    // 0x2020d4: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x2020d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
    // 0x2020d8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2020d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2020dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2020dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2020e0: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x2020E0u;
    SET_GPR_U32(ctx, 31, 0x2020E8u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2020E0u, 0x2020E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2020E8u;
label_2020e8:
    // 0x2020e8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2020e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2020ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2020ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2020f0: 0x8c44483c  lw          $a0, 0x483C($v0)
    ctx->pc = 0x2020f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18492)));
    // 0x2020f4: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x2020F4u;
    SET_GPR_U32(ctx, 31, 0x2020FCu);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2020F4u, 0x2020FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2020FCu;
label_2020fc:
    // 0x2020fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2020fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202100: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x202100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x202104: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x202104u;
    SET_GPR_U32(ctx, 31, 0x20210Cu);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x202104u, 0x20210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20210Cu;
label_20210c:
    // 0x20210c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x20210cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202110: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x202110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202114: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202118: 0x8c424844  lw          $v0, 0x4844($v0)
    ctx->pc = 0x202118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18500)));
    // 0x20211c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20211Cu;
    {
        const bool branch_taken_0x20211c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20211c) {
            ctx->pc = 0x202138u;
            return;
        }
    }
    ctx->pc = 0x202124u;
    // 0x202124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202128: 0x0  nop
    ctx->pc = 0x202128u;
    // NOP
    // 0x20212c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20212cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202130: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202130u;
    {
        const bool branch_taken_0x202130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202130) {
            ctx->pc = 0x202154u;
            return;
        }
    }
    ctx->pc = 0x202138u;
}
