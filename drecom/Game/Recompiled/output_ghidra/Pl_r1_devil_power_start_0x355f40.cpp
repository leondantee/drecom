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

// Function: Pl_r1_devil_power_start
// Address: 0x355f40 - 0x356128
void Pl_r1_devil_power_start_0x355f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_devil_power_start_0x355f40");
#endif

    switch (ctx->pc) {
        case 0x355fdcu: goto label_355fdc;
        case 0x355ff8u: goto label_355ff8;
        case 0x356054u: goto label_356054;
        case 0x356094u: goto label_356094;
        case 0x3560a0u: goto label_3560a0;
        case 0x3560b4u: goto label_3560b4;
        case 0x3560c0u: goto label_3560c0;
        default: break;
    }

    ctx->pc = 0x355f40u;

    // 0x355f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355f44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x355f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x355f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x355f4c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x355f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x355f50: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x355f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x355f54: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x355f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x355f58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x355f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355f5c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x355f5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x355f60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x355f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x355f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355f68: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x355F68u;
    {
        const bool branch_taken_0x355f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x355f68) {
            ctx->pc = 0x356008u;
            goto label_356008;
        }
    }
    ctx->pc = 0x355F70u;
    // 0x355f70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355F70u;
    {
        const bool branch_taken_0x355f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355f70) {
            ctx->pc = 0x355F80u;
            goto label_355f80;
        }
    }
    ctx->pc = 0x355F78u;
    // 0x355f78: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x355F78u;
    {
        const bool branch_taken_0x355f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355f78) {
            ctx->pc = 0x356114u;
            goto label_356114;
        }
    }
    ctx->pc = 0x355F80u;
label_355f80:
    // 0x355f80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x355f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x355f84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355f88: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x355f88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x355f8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355f90: 0x844313ae  lh          $v1, 0x13AE($v0)
    ctx->pc = 0x355f90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5038)));
    // 0x355f94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355f98: 0xa44313ac  sh          $v1, 0x13AC($v0)
    ctx->pc = 0x355f98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5036), (uint16_t)GPR_U32(ctx, 3));
    // 0x355f9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fa0: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x355fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x355fa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fa8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x355fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355fac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fb0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x355fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x355fb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fb8: 0xa44013a8  sh          $zero, 0x13A8($v0)
    ctx->pc = 0x355fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5032), (uint16_t)GPR_U32(ctx, 0));
    // 0x355fbc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x355fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fc4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x355fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x355fc8: 0x24060a8b  addiu       $a2, $zero, 0xA8B
    ctx->pc = 0x355fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2699));
    // 0x355fcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x355fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355fd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x355fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x355fd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x355FD4u;
    SET_GPR_U32(ctx, 31, 0x355FDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x355FD4u, 0x355FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FDCu;
label_355fdc:
    // 0x355fdc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x355fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x355fe0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x355fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355fe4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x355fe4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355fe8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x355fe8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355fec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x355fecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355ff0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x355FF0u;
    SET_GPR_U32(ctx, 31, 0x355FF8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x355FF0u, 0x355FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FF8u;
label_355ff8:
    // 0x355ff8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x355ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355ffc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x355ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x356000: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356004: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x356004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_356008:
    // 0x356008: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x356008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35600c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35600cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x356010: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x356010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356014: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x356014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x356018: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x356018u;
    {
        const bool branch_taken_0x356018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356018) {
            ctx->pc = 0x356084u;
            goto label_356084;
        }
    }
    ctx->pc = 0x356020u;
    // 0x356020: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x356020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x356024: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x356024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x356028: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x356028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x35602c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x356030: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x356030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x356034: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x356034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356038: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x356038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35603c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356040: 0x8c841344  lw          $a0, 0x1344($a0)
    ctx->pc = 0x356040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x356044: 0x8c651334  lw          $a1, 0x1334($v1)
    ctx->pc = 0x356044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x356048: 0x8c46133c  lw          $a2, 0x133C($v0)
    ctx->pc = 0x356048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
    // 0x35604c: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x35604Cu;
    SET_GPR_U32(ctx, 31, 0x356054u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x35604Cu, 0x356054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356054u;
label_356054:
    // 0x356054: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x356054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356058: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x356058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35605c: 0xa0400a20  sb          $zero, 0xA20($v0)
    ctx->pc = 0x35605cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2592), (uint8_t)GPR_U32(ctx, 0));
    // 0x356060: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x356060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356064: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x356064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x356068: 0xa0400990  sb          $zero, 0x990($v0)
    ctx->pc = 0x356068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2448), (uint8_t)GPR_U32(ctx, 0));
    // 0x35606c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356070: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x356070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x356074: 0xa0400900  sb          $zero, 0x900($v0)
    ctx->pc = 0x356074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2304), (uint8_t)GPR_U32(ctx, 0));
    // 0x356078: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x356078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35607c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x35607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x356080: 0xa04002d0  sb          $zero, 0x2D0($v0)
    ctx->pc = 0x356080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 720), (uint8_t)GPR_U32(ctx, 0));
label_356084:
    // 0x356084: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x356084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356088: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35608c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x35608Cu;
    SET_GPR_U32(ctx, 31, 0x356094u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x35608Cu, 0x356094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356094u;
label_356094:
    // 0x356094: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x356094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356098: 0xc05cd10  jal         func_173440
    ctx->pc = 0x356098u;
    SET_GPR_U32(ctx, 31, 0x3560A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x356098u, 0x3560A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560A0u;
label_3560a0:
    // 0x3560a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3560a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3560a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3560a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3560a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3560ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x3560ACu;
    SET_GPR_U32(ctx, 31, 0x3560B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x3560ACu, 0x3560B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560B4u;
label_3560b4:
    // 0x3560b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3560b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3560b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x3560B8u;
    SET_GPR_U32(ctx, 31, 0x3560C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x3560B8u, 0x3560C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560C0u;
label_3560c0:
    // 0x3560c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3560c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3560c8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3560C8u;
    {
        const bool branch_taken_0x3560c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3560c8) {
            ctx->pc = 0x356114u;
            goto label_356114;
        }
    }
    ctx->pc = 0x3560D0u;
    // 0x3560d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560d4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x3560d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x3560d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3560d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3560dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3560e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3560e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560e8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3560e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3560ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3560f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3560f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3560f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3560fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356100: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x356100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x356104: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x356104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356108: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x356108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35610c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356110: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x356110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_356114:
    // 0x356114: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x356114u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35611c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35611cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x356120: 0x3e00008  jr          $ra
    ctx->pc = 0x356120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356128u;
}
