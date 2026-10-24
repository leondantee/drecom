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

// Function: entry_001fe844
// Address: 0x1fe844 - 0x1fe8f8
void entry_001fe844_0x1fe844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe844_0x1fe844");
#endif

    switch (ctx->pc) {
        case 0x1fe84cu: goto label_1fe84c;
        case 0x1fe884u: goto label_1fe884;
        case 0x1fe8bcu: goto label_1fe8bc;
        default: break;
    }

    ctx->pc = 0x1fe844u;

    // 0x1fe844: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FE844u;
    SET_GPR_U32(ctx, 31, 0x1FE84Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FE844u, 0x1FE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE84Cu;
label_1fe84c:
    // 0x1fe84c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe850: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fe850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe854: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fe854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fe858: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fe858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe85c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fe860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe864: 0xc4600480  lwc1        $f0, 0x480($v1)
    ctx->pc = 0x1fe864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fe868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fe86c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe870: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe878: 0xe4600480  swc1        $f0, 0x480($v1)
    ctx->pc = 0x1fe878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1152), bits); }
    // 0x1fe87c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FE87Cu;
    SET_GPR_U32(ctx, 31, 0x1FE884u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FE87Cu, 0x1FE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE884u;
label_1fe884:
    // 0x1fe884: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe888: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fe888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe88c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fe88cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fe890: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe894: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe898: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe89c: 0xc4600484  lwc1        $f0, 0x484($v1)
    ctx->pc = 0x1fe89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe8a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fe8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fe8a4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe8a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe8b0: 0xe4600484  swc1        $f0, 0x484($v1)
    ctx->pc = 0x1fe8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1156), bits); }
    // 0x1fe8b4: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FE8B4u;
    SET_GPR_U32(ctx, 31, 0x1FE8BCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FE8B4u, 0x1FE8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8BCu;
label_1fe8bc:
    // 0x1fe8bc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8c0: 0xc4a102a4  lwc1        $f1, 0x2A4($a1)
    ctx->pc = 0x1fe8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe8c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fe8c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fe8c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe8cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe8d4: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x1fe8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe8d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fe8d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fe8dc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe8e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe8e8: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x1fe8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x1fe8ec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fe8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe8f0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fe8f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fe8f4: 0x0  nop
    ctx->pc = 0x1fe8f4u;
    // NOP
    ctx->pc = 0x1fe8f8u;
}
