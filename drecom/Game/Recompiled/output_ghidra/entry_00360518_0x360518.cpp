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

// Function: entry_00360518
// Address: 0x360518 - 0x360574
void entry_00360518_0x360518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360518_0x360518");
#endif

    switch (ctx->pc) {
        case 0x36055cu: goto label_36055c;
        default: break;
    }

    ctx->pc = 0x360518u;

    // 0x360518: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x360518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36051c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x36051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x360520: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x360520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x360524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360528: 0x0  nop
    ctx->pc = 0x360528u;
    // NOP
    // 0x36052c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x36052cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360530: 0x0  nop
    ctx->pc = 0x360530u;
    // NOP
    // 0x360534: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x360534u;
    {
        const bool branch_taken_0x360534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x360534) {
            ctx->pc = 0x360574u;
            return;
        }
    }
    ctx->pc = 0x36053Cu;
    // 0x36053c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360540: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360544: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x360544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360548: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x360548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x36054c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36054cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360550: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x360554: 0xc0965d0  jal         func_259740
    ctx->pc = 0x360554u;
    SET_GPR_U32(ctx, 31, 0x36055Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x360554u, 0x36055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36055Cu;
label_36055c:
    // 0x36055c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36055cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360560: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x360560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360564: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x360564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360568: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x360568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x36056c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x36056Cu;
    {
        const bool branch_taken_0x36056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36056c) {
            ctx->pc = 0x3605C0u;
            return;
        }
    }
    ctx->pc = 0x360574u;
}
