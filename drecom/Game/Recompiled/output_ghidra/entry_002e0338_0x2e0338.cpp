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

// Function: entry_002e0338
// Address: 0x2e0338 - 0x2e0394
void entry_002e0338_0x2e0338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0338_0x2e0338");
#endif

    switch (ctx->pc) {
        case 0x2e037cu: goto label_2e037c;
        default: break;
    }

    ctx->pc = 0x2e0338u;

    // 0x2e0338: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e0338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e033c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2e033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2e0340: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e0340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e0344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0348: 0x0  nop
    ctx->pc = 0x2e0348u;
    // NOP
    // 0x2e034c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e034cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0350: 0x0  nop
    ctx->pc = 0x2e0350u;
    // NOP
    // 0x2e0354: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E0354u;
    {
        const bool branch_taken_0x2e0354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0354) {
            ctx->pc = 0x2E0394u;
            return;
        }
    }
    ctx->pc = 0x2E035Cu;
    // 0x2e035c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0360: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0364: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0368: 0x24060504  addiu       $a2, $zero, 0x504
    ctx->pc = 0x2e0368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x2e036c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e036cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0370: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e0370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0374: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0374u;
    SET_GPR_U32(ctx, 31, 0x2E037Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0374u, 0x2E037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E037Cu;
label_2e037c:
    // 0x2e037c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0380: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x2e0380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0384: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0388: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e0388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e038c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E038Cu;
    {
        const bool branch_taken_0x2e038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e038c) {
            ctx->pc = 0x2E03E0u;
            return;
        }
    }
    ctx->pc = 0x2E0394u;
}
