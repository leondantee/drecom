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

// Function: entry_0033727c
// Address: 0x33727c - 0x3372c8
void entry_0033727c_0x33727c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033727c_0x33727c");
#endif

    switch (ctx->pc) {
        case 0x33728cu: goto label_33728c;
        default: break;
    }

    ctx->pc = 0x33727cu;

    // 0x33727c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33727cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x337280: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x337280u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x337284: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x337284u;
    SET_GPR_U32(ctx, 31, 0x33728Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x337284u, 0x33728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33728Cu;
label_33728c:
    // 0x33728c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x33728cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337290: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x337290u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337294: 0x0  nop
    ctx->pc = 0x337294u;
    // NOP
    // 0x337298: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33729c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x33729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3372a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3372a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3372a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3372a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3372a8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x3372a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x3372ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3372ACu;
    {
        const bool branch_taken_0x3372ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3372ac) {
            ctx->pc = 0x3372C8u;
            return;
        }
    }
    ctx->pc = 0x3372B4u;
    // 0x3372b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3372b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3372b8: 0x0  nop
    ctx->pc = 0x3372b8u;
    // NOP
    // 0x3372bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3372bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3372c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3372C0u;
    {
        const bool branch_taken_0x3372c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372c0) {
            ctx->pc = 0x3372E4u;
            return;
        }
    }
    ctx->pc = 0x3372C8u;
}
