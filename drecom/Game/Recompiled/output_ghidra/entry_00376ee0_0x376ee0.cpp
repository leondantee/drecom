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

// Function: entry_00376ee0
// Address: 0x376ee0 - 0x376fa4
void entry_00376ee0_0x376ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376ee0_0x376ee0");
#endif

    switch (ctx->pc) {
        case 0x376ef0u: goto label_376ef0;
        case 0x376f30u: goto label_376f30;
        case 0x376f44u: goto label_376f44;
        case 0x376f54u: goto label_376f54;
        case 0x376f60u: goto label_376f60;
        case 0x376f9cu: goto label_376f9c;
        default: break;
    }

    ctx->pc = 0x376ee0u;

    // 0x376ee0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ee4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376ee8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376EE8u;
    SET_GPR_U32(ctx, 31, 0x376EF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376EE8u, 0x376EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EF0u;
label_376ef0:
    // 0x376ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x376ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ef4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x376ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376ef8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x376ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x376efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376f00: 0x0  nop
    ctx->pc = 0x376f00u;
    // NOP
    // 0x376f04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376f08: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x376f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x376f0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f10: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376f14: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x376f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x376f18: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x376f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x376f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376f20: 0x0  nop
    ctx->pc = 0x376f20u;
    // NOP
    // 0x376f24: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x376f24u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376f28: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376F28u;
    SET_GPR_U32(ctx, 31, 0x376F30u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376F28u, 0x376F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F30u;
label_376f30:
    // 0x376f30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f34: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376f38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x376F3Cu;
    SET_GPR_U32(ctx, 31, 0x376F44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x376F3Cu, 0x376F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F44u;
label_376f44:
    // 0x376f44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376f48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376f4c: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376F4Cu;
    SET_GPR_U32(ctx, 31, 0x376F54u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376F4Cu, 0x376F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F54u;
label_376f54:
    // 0x376f54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f58: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376F58u;
    SET_GPR_U32(ctx, 31, 0x376F60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376F58u, 0x376F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F60u;
label_376f60:
    // 0x376f60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f64: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x376f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x376f68: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x376F68u;
    {
        const bool branch_taken_0x376f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376f68) {
            ctx->pc = 0x377064u;
            return;
        }
    }
    ctx->pc = 0x376F70u;
    // 0x376f70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x376f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376f74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f78: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376f78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376f7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376f84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376f88: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x376f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x376f8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376f90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376f94: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376F94u;
    SET_GPR_U32(ctx, 31, 0x376F9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376F94u, 0x376F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F9Cu;
label_376f9c:
    // 0x376f9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x376F9Cu;
    {
        const bool branch_taken_0x376f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376f9c) {
            ctx->pc = 0x377064u;
            return;
        }
    }
    ctx->pc = 0x376FA4u;
}
