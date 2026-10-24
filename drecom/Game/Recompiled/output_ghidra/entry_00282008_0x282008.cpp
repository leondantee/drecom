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

// Function: entry_00282008
// Address: 0x282008 - 0x28219c
void entry_00282008_0x282008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282008_0x282008");
#endif

    switch (ctx->pc) {
        case 0x282010u: goto label_282010;
        case 0x282078u: goto label_282078;
        case 0x282170u: goto label_282170;
        default: break;
    }

    ctx->pc = 0x282008u;

    // 0x282008: 0xc067648  jal         func_19D920
    ctx->pc = 0x282008u;
    SET_GPR_U32(ctx, 31, 0x282010u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x282008u, 0x282010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282010u;
label_282010:
    // 0x282010: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x282010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x282014: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282018: 0x0  nop
    ctx->pc = 0x282018u;
    // NOP
    // 0x28201c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28201cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282020: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x282020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x282024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282028: 0x0  nop
    ctx->pc = 0x282028u;
    // NOP
    // 0x28202c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28202cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282030: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x282030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x282034: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x282034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x282038: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x282038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28203c: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x28203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    // 0x282040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282044: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x282044u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282048: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x282048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28204c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28204cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x282050: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x282050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282054: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x282054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x282058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28205c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x28205cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x282060: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x282060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x282064: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x282064u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282068: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x282068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28206c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28206cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282070: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282070u;
    SET_GPR_U32(ctx, 31, 0x282078u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282070u, 0x282078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282078u;
label_282078:
    // 0x282078: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x28207c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x28207cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x282080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282084: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282088: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x282088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x28208c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x28208cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x282090: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x282090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282094: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282098: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x282098u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x28209c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x28209cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2820a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2820a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2820a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2820a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2820a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2820a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2820ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2820acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2820b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2820b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2820b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2820b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2820b8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2820b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2820bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2820bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2820c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2820c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2820c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2820c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2820c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2820c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2820cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2820ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2820d0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2820d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2820d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2820d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2820d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2820d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2820dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2820dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2820e0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2820e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2820e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2820e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2820e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2820e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2820ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2820ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2820f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2820f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2820f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2820f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2820f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2820f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2820fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2820fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282100: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x282100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x282104: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x282104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x282108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28210c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x28210cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282110: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x282110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x282114: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x282114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x282118: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x28211c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x28211cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x282120: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x282120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x282124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282128: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x282128u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x28212c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x28212cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x282130: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282134: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x282134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x282138: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x282138u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x28213c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x28213cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282140: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x282140u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x282144: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x282144u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x282148: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x28214c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x28214cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x282150: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x282150u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x282154: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282158: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x282158u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x28215c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x28215cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x282160: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282164: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x282164u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x282168: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x282168u;
    SET_GPR_U32(ctx, 31, 0x282170u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x282168u, 0x282170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282170u;
label_282170:
    // 0x282170: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x282174: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x282174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x282178: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x282178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x28217c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x28217cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x282180: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x282180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x282184: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x282184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x282188: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x282188u;
    {
        const bool branch_taken_0x282188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x282188) {
            ctx->pc = 0x28219Cu;
            return;
        }
    }
    ctx->pc = 0x282190u;
    // 0x282190: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x282190u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282194u;
    {
        const bool branch_taken_0x282194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282194) {
            ctx->pc = 0x2821B8u;
            return;
        }
    }
    ctx->pc = 0x28219Cu;
}
