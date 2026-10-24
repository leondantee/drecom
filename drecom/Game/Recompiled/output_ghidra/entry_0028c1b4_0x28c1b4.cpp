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

// Function: entry_0028c1b4
// Address: 0x28c1b4 - 0x28c204
void entry_0028c1b4_0x28c1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c1b4_0x28c1b4");
#endif

    switch (ctx->pc) {
        case 0x28c1c4u: goto label_28c1c4;
        default: break;
    }

    ctx->pc = 0x28c1b4u;

    // 0x28c1b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28c1b8: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28c1b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28c1bc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C1BCu;
    SET_GPR_U32(ctx, 31, 0x28C1C4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C1BCu, 0x28C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1C4u;
label_28c1c4:
    // 0x28c1c4: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x28c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x28c1c8: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x28c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28c1cc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28c1ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c1d0: 0x0  nop
    ctx->pc = 0x28c1d0u;
    // NOP
    // 0x28c1d4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28c1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28c1d8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x28c1dc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28c1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28c1e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c1e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c1e4: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x28c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x28c1e8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C1E8u;
    {
        const bool branch_taken_0x28c1e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28c1e8) {
            ctx->pc = 0x28C204u;
            return;
        }
    }
    ctx->pc = 0x28C1F0u;
    // 0x28c1f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c1f4: 0x0  nop
    ctx->pc = 0x28c1f4u;
    // NOP
    // 0x28c1f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c1f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c1fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28C1FCu;
    {
        const bool branch_taken_0x28c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c1fc) {
            ctx->pc = 0x28C228u;
            return;
        }
    }
    ctx->pc = 0x28C204u;
}
