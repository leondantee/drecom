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

// Function: entry_003792b4
// Address: 0x3792b4 - 0x37932c
void entry_003792b4_0x3792b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003792b4_0x3792b4");
#endif

    switch (ctx->pc) {
        case 0x3792c0u: goto label_3792c0;
        case 0x3792d8u: goto label_3792d8;
        case 0x3792e4u: goto label_3792e4;
        case 0x379304u: goto label_379304;
        case 0x379320u: goto label_379320;
        default: break;
    }

    ctx->pc = 0x3792b4u;

    // 0x3792b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3792b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792b8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3792B8u;
    SET_GPR_U32(ctx, 31, 0x3792C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3792C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3792C0u) { return; }
    ctx->pc = 0x3792C0u;
label_3792c0:
    // 0x3792c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3792c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3792c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3792c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792c8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3792c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792cc: 0x8c460130  lw          $a2, 0x130($v0)
    ctx->pc = 0x3792ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3792d0: 0xc040c00  jal         func_103000
    ctx->pc = 0x3792D0u;
    SET_GPR_U32(ctx, 31, 0x3792D8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x3792D8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3792D8u) { return; }
    ctx->pc = 0x3792D8u;
label_3792d8:
    // 0x3792d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3792d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3792dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3792DCu;
    SET_GPR_U32(ctx, 31, 0x3792E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3792DCu, 0x3792E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3792E4u;
label_3792e4:
    // 0x3792e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3792e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3792e8: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3792e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3792ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3792ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3792f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3792f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3792f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3792f8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3792f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3792fc: 0xc040d62  jal         func_103588
    ctx->pc = 0x3792FCu;
    SET_GPR_U32(ctx, 31, 0x379304u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x379304u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x379304u) { return; }
    ctx->pc = 0x379304u;
label_379304:
    // 0x379304: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x379304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379308: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x379308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37930c: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x37930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x379310: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x379310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x379314: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x379314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x379318: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x379318u;
    SET_GPR_U32(ctx, 31, 0x379320u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x379318u, 0x379320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379320u;
label_379320:
    // 0x379320: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x379320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379324: 0xc05cd10  jal         func_173440
    ctx->pc = 0x379324u;
    SET_GPR_U32(ctx, 31, 0x37932Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x379324u, 0x37932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37932Cu;
}
