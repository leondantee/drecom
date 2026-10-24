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

// Function: entry_0022ed48
// Address: 0x22ed48 - 0x22ee4c
void entry_0022ed48_0x22ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ed48_0x22ed48");
#endif

    switch (ctx->pc) {
        case 0x22ed88u: goto label_22ed88;
        case 0x22edf0u: goto label_22edf0;
        case 0x22ee44u: goto label_22ee44;
        default: break;
    }

    ctx->pc = 0x22ed48u;

    // 0x22ed48: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed4c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x22ed4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22ed50: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x22ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22ed54: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x22ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ed58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ed58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ed5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed60: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22ed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22ed64: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22ed68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22ed68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22ed6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ed6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ed70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed74: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22ed78: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22ed7c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ed7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22ed80: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22ED80u;
    SET_GPR_U32(ctx, 31, 0x22ED88u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22ED80u, 0x22ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED88u;
label_22ed88:
    // 0x22ed88: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x22ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x22ed8c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x22ed8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed90: 0xa4e51278  sh          $a1, 0x1278($a3)
    ctx->pc = 0x22ed90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x22ed94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed98: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x22ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ed9c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ed9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22eda0: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x22eda0u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eda4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22eda4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22eda8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22eda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22edac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22edacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22edb0: 0x0  nop
    ctx->pc = 0x22edb0u;
    // NOP
    // 0x22edb4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x22edb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x22edb8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22edbc: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x22edbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22edc0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22edc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22edc4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x22edc4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22edc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22edc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22edcc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x22edccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22edd0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22edd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22edd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22edd8: 0x0  nop
    ctx->pc = 0x22edd8u;
    // NOP
    // 0x22eddc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x22eddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x22ede0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ede4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x22ede4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x22ede8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22EDE8u;
    SET_GPR_U32(ctx, 31, 0x22EDF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22EDE8u, 0x22EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDF0u;
label_22edf0:
    // 0x22edf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22edf4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x22edf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22edf8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22EDF8u;
    {
        const bool branch_taken_0x22edf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22edf8) {
            ctx->pc = 0x22EE4Cu;
            return;
        }
    }
    ctx->pc = 0x22EE00u;
    // 0x22ee00: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x22ee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ee04: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x22ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ee08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ee0c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22ee0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22ee10: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x22ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ee14: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x22ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x22ee18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22ee1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ee1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ee20: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x22ee20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22ee24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ee28: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ee2c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22ee30: 0x24060a0b  addiu       $a2, $zero, 0xA0B
    ctx->pc = 0x22ee30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x22ee34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ee34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ee38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22ee38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22EE3Cu;
    SET_GPR_U32(ctx, 31, 0x22EE44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22EE3Cu, 0x22EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE44u;
label_22ee44:
    // 0x22ee44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22EE44u;
    {
        const bool branch_taken_0x22ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee44) {
            ctx->pc = 0x22EE98u;
            return;
        }
    }
    ctx->pc = 0x22EE4Cu;
}
