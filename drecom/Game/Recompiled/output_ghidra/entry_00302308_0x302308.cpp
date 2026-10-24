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

// Function: entry_00302308
// Address: 0x302308 - 0x302360
void entry_00302308_0x302308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302308_0x302308");
#endif

    switch (ctx->pc) {
        case 0x302358u: goto label_302358;
        default: break;
    }

    ctx->pc = 0x302308u;

    // 0x302308: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30230c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x30230cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x302310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302314: 0x0  nop
    ctx->pc = 0x302314u;
    // NOP
    // 0x302318: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x302318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30231c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x30231cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x302320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302324: 0x0  nop
    ctx->pc = 0x302324u;
    // NOP
    // 0x302328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30232c: 0x0  nop
    ctx->pc = 0x30232cu;
    // NOP
    // 0x302330: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x302330u;
    {
        const bool branch_taken_0x302330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302330) {
            ctx->pc = 0x302360u;
            return;
        }
    }
    ctx->pc = 0x302338u;
    // 0x302338: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30233c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302340: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x302344: 0x24065a29  addiu       $a2, $zero, 0x5A29
    ctx->pc = 0x302344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23081));
    // 0x302348: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x302348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30234c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30234cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302350: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302350u;
    SET_GPR_U32(ctx, 31, 0x302358u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302350u, 0x302358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302358u;
label_302358:
    // 0x302358: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x302358u;
    {
        const bool branch_taken_0x302358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302358) {
            ctx->pc = 0x302380u;
            return;
        }
    }
    ctx->pc = 0x302360u;
}
