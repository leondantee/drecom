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

// Function: entry_001479ac
// Address: 0x1479ac - 0x1479f0
void entry_001479ac_0x1479ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001479ac_0x1479ac");
#endif

    switch (ctx->pc) {
        case 0x1479ccu: goto label_1479cc;
        default: break;
    }

    ctx->pc = 0x1479acu;

    // 0x1479ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1479acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1479b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1479b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1479b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1479b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1479b8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1479b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1479bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1479bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1479c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1479c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1479c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1479C4u;
    SET_GPR_U32(ctx, 31, 0x1479CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1479C4u, 0x1479CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479CCu;
label_1479cc:
    // 0x1479cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1479d0: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x1479d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x1479d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1479D4u;
    {
        const bool branch_taken_0x1479d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1479d4) {
            ctx->pc = 0x1479F0u;
            return;
        }
    }
    ctx->pc = 0x1479DCu;
    // 0x1479dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1479dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1479e0: 0x0  nop
    ctx->pc = 0x1479e0u;
    // NOP
    // 0x1479e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1479e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1479e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1479E8u;
    {
        const bool branch_taken_0x1479e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479e8) {
            ctx->pc = 0x147A0Cu;
            return;
        }
    }
    ctx->pc = 0x1479F0u;
}
