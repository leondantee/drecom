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

// Function: entry_002c8f90
// Address: 0x2c8f90 - 0x2c9098
void entry_002c8f90_0x2c8f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8f90_0x2c8f90");
#endif

    switch (ctx->pc) {
        case 0x2c9014u: goto label_2c9014;
        default: break;
    }

    ctx->pc = 0x2c8f90u;

    // 0x2c8f90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f94: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2c8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8f98: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c8f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8fa0: 0x0  nop
    ctx->pc = 0x2c8fa0u;
    // NOP
    // 0x2c8fa4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8fa8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2c8fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2c8fac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8fb0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c8fb0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8fb4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8fbc: 0x0  nop
    ctx->pc = 0x2c8fbcu;
    // NOP
    // 0x2c8fc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8fc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8fc8: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c8fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c8fcc: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2c8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2c8fd0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c8fd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2c8fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c8fd8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8fdc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8fe0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8fe4: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2c8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2c8fe8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c8fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c8fec: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2c8fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2c8ff0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c8ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c8ff4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2c8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8ff8: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x2c8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c8ffc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c9000: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c9000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c9004: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x2c9004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2c9008: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x2c9008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2c900c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2C900Cu;
    SET_GPR_U32(ctx, 31, 0x2C9014u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2C900Cu, 0x2C9014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9014u;
label_2c9014:
    // 0x2c9014: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9018: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c9018u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c901c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9024: 0x0  nop
    ctx->pc = 0x2c9024u;
    // NOP
    // 0x2c9028: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c9028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c902c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9030: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c9030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c9034: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9038: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2c9038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2c903c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C903Cu;
    {
        const bool branch_taken_0x2c903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c903c) {
            ctx->pc = 0x2C9098u;
            return;
        }
    }
    ctx->pc = 0x2C9044u;
    // 0x2c9044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c9044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c9048: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c904c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c904cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9050: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2c9050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2c9054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9058: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c905c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9060: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c9060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c9064: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c9064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c9068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c906c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9070: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9074: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c9074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c9078: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c907c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9080: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c9080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c9084: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c9084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c9088: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c9088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c908c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c908cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c9090: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9094: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2c9094u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2c9098u;
}
