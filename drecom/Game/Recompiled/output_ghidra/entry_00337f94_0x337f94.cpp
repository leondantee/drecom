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

// Function: entry_00337f94
// Address: 0x337f94 - 0x337fe0
void entry_00337f94_0x337f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337f94_0x337f94");
#endif

    switch (ctx->pc) {
        case 0x337fa4u: goto label_337fa4;
        default: break;
    }

    ctx->pc = 0x337f94u;

    // 0x337f94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x337f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x337f98: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x337f98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x337f9c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x337F9Cu;
    SET_GPR_U32(ctx, 31, 0x337FA4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x337F9Cu, 0x337FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FA4u;
label_337fa4:
    // 0x337fa4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x337fa4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337fa8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x337fa8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337fac: 0x0  nop
    ctx->pc = 0x337facu;
    // NOP
    // 0x337fb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x337fb4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x337fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x337fb8: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x337fb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x337fbc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x337fbcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337fc0: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x337fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x337fc4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337FC4u;
    {
        const bool branch_taken_0x337fc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x337fc4) {
            ctx->pc = 0x337FE0u;
            return;
        }
    }
    ctx->pc = 0x337FCCu;
    // 0x337fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337fd0: 0x0  nop
    ctx->pc = 0x337fd0u;
    // NOP
    // 0x337fd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x337fd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x337FD8u;
    {
        const bool branch_taken_0x337fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337fd8) {
            ctx->pc = 0x337FFCu;
            return;
        }
    }
    ctx->pc = 0x337FE0u;
}
