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

// Function: caseD_7
// Address: 0x34cd9c - 0x34ced0
void caseD_7_0x34cd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x34cd9c");
#endif

    switch (ctx->pc) {
        case 0x34cdccu: goto label_34cdcc;
        case 0x34cde8u: goto label_34cde8;
        case 0x34ce00u: goto label_34ce00;
        case 0x34ce18u: goto label_34ce18;
        case 0x34ce2cu: goto label_34ce2c;
        case 0x34ce74u: goto label_34ce74;
        default: break;
    }

    ctx->pc = 0x34cd9cu;

    // 0x34cd9c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cda0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cda4: 0x3c063dd6  lui         $a2, 0x3DD6
    ctx->pc = 0x34cda4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15830 << 16));
    // 0x34cda8: 0x34c47750  ori         $a0, $a2, 0x7750
    ctx->pc = 0x34cda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)30544);
    // 0x34cdac: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x34cdacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34cdb0: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x34cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34cdb4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34cdb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34cdb8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x34cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34cdbc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34cdc0: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x34cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x34cdc4: 0xc05c848  jal         func_172120
    ctx->pc = 0x34CDC4u;
    SET_GPR_U32(ctx, 31, 0x34CDCCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34CDC4u, 0x34CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CDCCu;
label_34cdcc:
    // 0x34cdcc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x34cdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x34cdd0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cdd4: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x34cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cdd8: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x34cdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cddc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34cddcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34cde0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34CDE0u;
    SET_GPR_U32(ctx, 31, 0x34CDE8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34CDE0u, 0x34CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CDE8u;
label_34cde8:
    // 0x34cde8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cdec: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x34cdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x34cdf0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cdf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34cdf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34cdf8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34CDF8u;
    SET_GPR_U32(ctx, 31, 0x34CE00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34CDF8u, 0x34CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE00u;
label_34ce00:
    // 0x34ce00: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34ce00u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ce04: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce08: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34ce08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34ce0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ce0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ce10: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34CE10u;
    SET_GPR_U32(ctx, 31, 0x34CE18u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34CE10u, 0x34CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE18u;
label_34ce18:
    // 0x34ce18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ce18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ce1c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34ce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce20: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34ce20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34ce24: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34CE24u;
    SET_GPR_U32(ctx, 31, 0x34CE2Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34CE24u, 0x34CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE2Cu;
label_34ce2c:
    // 0x34ce2c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x34ce2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ce30: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34ce30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce34: 0x84e8127a  lh          $t0, 0x127A($a3)
    ctx->pc = 0x34ce34u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4730)));
    // 0x34ce38: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x34ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x34ce3c: 0xa4e3127a  sh          $v1, 0x127A($a3)
    ctx->pc = 0x34ce3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ce40: 0x15000023  bnez        $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x34CE40u;
    {
        const bool branch_taken_0x34ce40 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ce40) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34CE48u;
    // 0x34ce48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34ce4c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce50: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34ce50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34ce54: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce58: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce5c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ce60: 0x24060428  addiu       $a2, $zero, 0x428
    ctx->pc = 0x34ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x34ce64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ce64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ce68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ce68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ce6c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34CE6Cu;
    SET_GPR_U32(ctx, 31, 0x34CE74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34CE6Cu, 0x34CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE74u;
label_34ce74:
    // 0x34ce74: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce78: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x34ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x34ce7c: 0x24a30960  addiu       $v1, $a1, 0x960
    ctx->pc = 0x34ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2400));
    // 0x34ce80: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x34ce80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34ce84: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ce88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34ce8c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x34ce8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x34ce90: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x34ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x34ce94: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce98: 0x8ca602d0  lw          $a2, 0x2D0($a1)
    ctx->pc = 0x34ce98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x34ce9c: 0x24d20960  addiu       $s2, $a2, 0x960
    ctx->pc = 0x34ce9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 2400));
    // 0x34cea0: 0x72408628  paddub      $s0, $s2, $zero
    ctx->pc = 0x34cea0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x34cea4: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x34cea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34cea8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x34cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34ceac: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x34ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x34ceb0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x34ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x34ceb4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x34ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x34ceb8: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x34ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
    // 0x34cebc: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x34cebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x34cec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cec4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cec8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cecc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34ceccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x34ced0u;
}
