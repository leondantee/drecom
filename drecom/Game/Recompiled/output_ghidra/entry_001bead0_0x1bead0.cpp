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

// Function: entry_001bead0
// Address: 0x1bead0 - 0x1beba0
void entry_001bead0_0x1bead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bead0_0x1bead0");
#endif

    switch (ctx->pc) {
        case 0x1beb08u: goto label_1beb08;
        case 0x1beb2cu: goto label_1beb2c;
        case 0x1beb38u: goto label_1beb38;
        case 0x1beb4cu: goto label_1beb4c;
        case 0x1beb70u: goto label_1beb70;
        case 0x1beb84u: goto label_1beb84;
        default: break;
    }

    ctx->pc = 0x1bead0u;

    // 0x1bead0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bead4: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1bead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bead8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beadc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1beadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1beae0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beae4: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x1beae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x1beae8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BEAE8u;
    {
        const bool branch_taken_0x1beae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1beae8) {
            ctx->pc = 0x1BEBA0u;
            return;
        }
    }
    ctx->pc = 0x1BEAF0u;
    // 0x1beaf0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1beaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beaf4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beaf8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1beaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1beafc: 0xc44d137c  lwc1        $f13, 0x137C($v0)
    ctx->pc = 0x1beafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1beb00: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BEB00u;
    SET_GPR_U32(ctx, 31, 0x1BEB08u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BEB00u, 0x1BEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB08u;
label_1beb08:
    // 0x1beb08: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1beb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1beb0c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beb10: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1beb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1beb14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beb18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1beb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb1c: 0x246505f0  addiu       $a1, $v1, 0x5F0
    ctx->pc = 0x1beb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1520));
    // 0x1beb20: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1beb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1beb24: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1BEB24u;
    SET_GPR_U32(ctx, 31, 0x1BEB2Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BEB24u, 0x1BEB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB2Cu;
label_1beb2c:
    // 0x1beb2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1beb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1beb30: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1BEB30u;
    SET_GPR_U32(ctx, 31, 0x1BEB38u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1BEB38u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BEB38u) { return; }
    ctx->pc = 0x1BEB38u;
label_1beb38:
    // 0x1beb38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1beb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1beb3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1beb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1beb40: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1beb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1beb44: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1BEB44u;
    SET_GPR_U32(ctx, 31, 0x1BEB4Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1BEB4Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BEB4Cu) { return; }
    ctx->pc = 0x1BEB4Cu;
label_1beb4c:
    // 0x1beb4c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1beb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb50: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1beb50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1beb54: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1beb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1beb58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1beb58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1beb5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1beb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1beb60: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1beb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1beb64: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1beb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1beb68: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1BEB68u;
    SET_GPR_U32(ctx, 31, 0x1BEB70u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1BEB70u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BEB70u) { return; }
    ctx->pc = 0x1BEB70u;
label_1beb70:
    // 0x1beb70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1beb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb74: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1beb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb78: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1beb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1beb7c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1BEB7Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB84u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BEB7Cu, 0x1BEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB84u;
label_1beb84:
    // 0x1beb84: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1beb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beb88: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beb8c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1beb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1beb90: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1beb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1beb94: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1beb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb98: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1BEB98u;
    SET_GPR_U32(ctx, 31, 0x1BEBA0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1BEB98u, 0x1BEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBA0u;
}
