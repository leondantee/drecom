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

// Function: caseD_1
// Address: 0x349864 - 0x3498f4
void caseD_1_0x349864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x349864");
#endif

    switch (ctx->pc) {
        case 0x349890u: goto label_349890;
        case 0x3498a0u: goto label_3498a0;
        default: break;
    }

    ctx->pc = 0x349864u;

    // 0x349864: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349868: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x349868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34986c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x34986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349870: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349874: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x349874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349878: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34987c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x34987cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x349880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349884: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349888: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x349888u;
    SET_GPR_U32(ctx, 31, 0x349890u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x349888u, 0x349890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349890u;
label_349890:
    // 0x349890: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x349890u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x349894: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349898: 0xc05cd10  jal         func_173440
    ctx->pc = 0x349898u;
    SET_GPR_U32(ctx, 31, 0x3498A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349898u, 0x3498A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498A0u;
label_3498a0:
    // 0x3498a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3498a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3498a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3498a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3498a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3498a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3498ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3498acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3498b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3498B0u;
    {
        const bool branch_taken_0x3498b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3498b0) {
            ctx->pc = 0x3498F4u;
            return;
        }
    }
    ctx->pc = 0x3498B8u;
    // 0x3498b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3498b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3498bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3498bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3498c0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3498c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3498c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3498c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3498c8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3498c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3498cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3498ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3498d0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x3498d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x3498d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3498d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3498d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3498d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3498dc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3498dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3498e0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x3498e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x3498e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3498e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3498e8: 0x0  nop
    ctx->pc = 0x3498e8u;
    // NOP
    // 0x3498ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3498ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3498f0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3498f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x3498f4u;
}
