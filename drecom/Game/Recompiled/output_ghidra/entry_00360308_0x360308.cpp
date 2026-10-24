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

// Function: entry_00360308
// Address: 0x360308 - 0x360364
void entry_00360308_0x360308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360308_0x360308");
#endif

    switch (ctx->pc) {
        case 0x36034cu: goto label_36034c;
        default: break;
    }

    ctx->pc = 0x360308u;

    // 0x360308: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x360308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36030c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x36030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x360310: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x360310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x360314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360318: 0x0  nop
    ctx->pc = 0x360318u;
    // NOP
    // 0x36031c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x36031cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360320: 0x0  nop
    ctx->pc = 0x360320u;
    // NOP
    // 0x360324: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x360324u;
    {
        const bool branch_taken_0x360324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x360324) {
            ctx->pc = 0x360364u;
            return;
        }
    }
    ctx->pc = 0x36032Cu;
    // 0x36032c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360330: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360334: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x360334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360338: 0x24060501  addiu       $a2, $zero, 0x501
    ctx->pc = 0x360338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x36033c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36033cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360340: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x360344: 0xc0965d0  jal         func_259740
    ctx->pc = 0x360344u;
    SET_GPR_U32(ctx, 31, 0x36034Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x360344u, 0x36034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36034Cu;
label_36034c:
    // 0x36034c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360350: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x360350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360354: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x360354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360358: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x360358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x36035c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x36035Cu;
    {
        const bool branch_taken_0x36035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36035c) {
            ctx->pc = 0x3603B0u;
            return;
        }
    }
    ctx->pc = 0x360364u;
}
