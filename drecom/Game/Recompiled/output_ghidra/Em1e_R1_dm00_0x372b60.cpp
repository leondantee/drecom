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

// Function: Em1e_R1_dm00
// Address: 0x372b60 - 0x372c34
void Em1e_R1_dm00_0x372b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_R1_dm00_0x372b60");
#endif

    switch (ctx->pc) {
        case 0x372bd8u: goto label_372bd8;
        case 0x372bf4u: goto label_372bf4;
        case 0x372c0cu: goto label_372c0c;
        case 0x372c18u: goto label_372c18;
        default: break;
    }

    ctx->pc = 0x372b60u;

    // 0x372b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x372b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x372b64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x372b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x372b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372b6c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x372b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x372b70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x372b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372b74: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x372b74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x372b78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x372b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372b7c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x372b7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x372b80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x372b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x372b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372b88: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x372B88u;
    {
        const bool branch_taken_0x372b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x372b88) {
            ctx->pc = 0x372BACu;
            goto label_372bac;
        }
    }
    ctx->pc = 0x372B90u;
    // 0x372b90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x372B90u;
    {
        const bool branch_taken_0x372b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372b90) {
            ctx->pc = 0x372BA0u;
            goto label_372ba0;
        }
    }
    ctx->pc = 0x372B98u;
    // 0x372b98: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x372B98u;
    {
        const bool branch_taken_0x372b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372b98) {
            ctx->pc = 0x372C20u;
            goto label_372c20;
        }
    }
    ctx->pc = 0x372BA0u;
label_372ba0:
    // 0x372ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372ba4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372ba8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x372ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_372bac:
    // 0x372bac: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x372bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x372bb0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x372bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x372bb4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x372bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x372bb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x372bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372bbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372bc0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x372bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x372bc4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x372bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372bc8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x372bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x372bcc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x372bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x372bd0: 0xc05c848  jal         func_172120
    ctx->pc = 0x372BD0u;
    SET_GPR_U32(ctx, 31, 0x372BD8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x372BD0u, 0x372BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BD8u;
label_372bd8:
    // 0x372bd8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x372bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x372bdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372be0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x372be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372be4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x372be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372be8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x372be8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x372bec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x372BECu;
    SET_GPR_U32(ctx, 31, 0x372BF4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x372BECu, 0x372BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BF4u;
label_372bf4:
    // 0x372bf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372bf8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x372bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x372bfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372c00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x372c00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372c04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x372C04u;
    SET_GPR_U32(ctx, 31, 0x372C0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x372C04u, 0x372C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C0Cu;
label_372c0c:
    // 0x372c0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372c10: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x372C10u;
    SET_GPR_U32(ctx, 31, 0x372C18u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x372C10u, 0x372C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C18u;
label_372c18:
    // 0x372c18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x372c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372c1c: 0x0  nop
    ctx->pc = 0x372c1cu;
    // NOP
label_372c20:
    // 0x372c20: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x372c20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372c28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x372c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x372c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x372C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372C34u;
}
