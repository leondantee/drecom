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

// Function: entry_00189254
// Address: 0x189254 - 0x1892b0
void entry_00189254_0x189254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189254_0x189254");
#endif

    switch (ctx->pc) {
        case 0x189278u: goto label_189278;
        case 0x1892a4u: goto label_1892a4;
        default: break;
    }

    ctx->pc = 0x189254u;

    // 0x189254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189258: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x189258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x18925c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18925cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189264: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x189264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x189268: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18926c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x18926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x189270: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x189270u;
    SET_GPR_U32(ctx, 31, 0x189278u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x189270u, 0x189278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189278u;
label_189278:
    // 0x189278: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18927c: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x18927cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
    // 0x189280: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x189280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x189284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189288: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x189288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x18928c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189290: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x189290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x189294: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189298: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18929c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x18929Cu;
    SET_GPR_U32(ctx, 31, 0x1892A4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1892A4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1892A4u) { return; }
    ctx->pc = 0x1892A4u;
label_1892a4:
    // 0x1892a4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1892a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1892a8: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x1892a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x1892ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1892acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1892b0u;
}
