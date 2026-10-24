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

// Function: entry_00220014
// Address: 0x220014 - 0x22016c
void entry_00220014_0x220014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220014_0x220014");
#endif

    switch (ctx->pc) {
        case 0x220030u: goto label_220030;
        case 0x22004cu: goto label_22004c;
        case 0x220068u: goto label_220068;
        case 0x2200a4u: goto label_2200a4;
        case 0x220140u: goto label_220140;
        default: break;
    }

    ctx->pc = 0x220014u;

    // 0x220014: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x220014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x220018: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x220018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x22001c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x22001cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220020: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x220020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x220024: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x220024u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x220028: 0xc06765c  jal         func_19D970
    ctx->pc = 0x220028u;
    SET_GPR_U32(ctx, 31, 0x220030u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x220028u, 0x220030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220030u;
label_220030:
    // 0x220030: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x220030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220034: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220038: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x220038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22003c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22003cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220040: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x220040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x220044: 0xc06765c  jal         func_19D970
    ctx->pc = 0x220044u;
    SET_GPR_U32(ctx, 31, 0x22004Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x220044u, 0x22004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22004Cu;
label_22004c:
    // 0x22004c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x22004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220050: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220054: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x220054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220058: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22005c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22005cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x220060: 0xc06765c  jal         func_19D970
    ctx->pc = 0x220060u;
    SET_GPR_U32(ctx, 31, 0x220068u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x220060u, 0x220068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220068u;
label_220068:
    // 0x220068: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x220068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22006c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22006cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220070: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x220070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220074: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220078: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x220078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x22007c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22007cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x220080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220084: 0x0  nop
    ctx->pc = 0x220084u;
    // NOP
    // 0x220088: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x220088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x22008c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x220090: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220090u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220094: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x220094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x220098: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220098u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22009c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x22009Cu;
    SET_GPR_U32(ctx, 31, 0x2200A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22009Cu, 0x2200A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200A4u;
label_2200a4:
    // 0x2200a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2200a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2200ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2200acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2200b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200b8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2200b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2200bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2200bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2200c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200c8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2200c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2200cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200d4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2200d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2200d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2200d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2200dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200e4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2200e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2200e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200f0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2200f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2200f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200fc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2200fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x220100: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220104: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x220104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x220108: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x220108u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x22010c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x22010cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220110: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x220110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x220114: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x220114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x220118: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x22011c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x22011cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x220120: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x220120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x220124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220128: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x220128u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x22012c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x22012cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x220130: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220134: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x220134u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x220138: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220138u;
    SET_GPR_U32(ctx, 31, 0x220140u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220138u, 0x220140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220140u;
label_220140:
    // 0x220140: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220144: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x220144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x220148: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x22014c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x22014cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x220150: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x220150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x220154: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x220154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x220158: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220158u;
    {
        const bool branch_taken_0x220158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x220158) {
            ctx->pc = 0x22016Cu;
            return;
        }
    }
    ctx->pc = 0x220160u;
    // 0x220160: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x220160u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220164: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x220164u;
    {
        const bool branch_taken_0x220164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220164) {
            ctx->pc = 0x220188u;
            return;
        }
    }
    ctx->pc = 0x22016Cu;
}
