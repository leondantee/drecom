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

// Function: entry_0017e5b0
// Address: 0x17e5b0 - 0x17e624
void entry_0017e5b0_0x17e5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e5b0_0x17e5b0");
#endif

    switch (ctx->pc) {
        case 0x17e5ccu: goto label_17e5cc;
        case 0x17e5ecu: goto label_17e5ec;
        case 0x17e604u: goto label_17e604;
        default: break;
    }

    ctx->pc = 0x17e5b0u;

    // 0x17e5b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e5bc: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x17e5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x17e5c0: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x17e5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17e5c4: 0xc040c80  jal         func_103200
    ctx->pc = 0x17E5C4u;
    SET_GPR_U32(ctx, 31, 0x17E5CCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17E5CCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E5CCu) { return; }
    ctx->pc = 0x17E5CCu;
label_17e5cc:
    // 0x17e5cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5d8: 0x8c840098  lw          $a0, 0x98($a0)
    ctx->pc = 0x17e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x17e5dc: 0x8c650090  lw          $a1, 0x90($v1)
    ctx->pc = 0x17e5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x17e5e0: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x17e5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17e5e4: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17E5E4u;
    SET_GPR_U32(ctx, 31, 0x17E5ECu);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17E5E4u, 0x17E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5ECu;
label_17e5ec:
    // 0x17e5ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17e5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17e5f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e5f4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e5f8: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x17e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e5fc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17E5FCu;
    SET_GPR_U32(ctx, 31, 0x17E604u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17E604u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E604u) { return; }
    ctx->pc = 0x17E604u;
label_17e604:
    // 0x17e604: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e608: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17e608u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e60c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e610: 0x246401a0  addiu       $a0, $v1, 0x1A0
    ctx->pc = 0x17e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x17e614: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e618: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x17e618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17e61c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17E61Cu;
    SET_GPR_U32(ctx, 31, 0x17E624u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17E624u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E624u) { return; }
    ctx->pc = 0x17E624u;
}
