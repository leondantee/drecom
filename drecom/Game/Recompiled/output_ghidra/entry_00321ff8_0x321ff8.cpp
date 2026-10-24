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

// Function: entry_00321ff8
// Address: 0x321ff8 - 0x322114
void entry_00321ff8_0x321ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321ff8_0x321ff8");
#endif

    switch (ctx->pc) {
        case 0x322054u: goto label_322054;
        case 0x3220e8u: goto label_3220e8;
        default: break;
    }

    ctx->pc = 0x321ff8u;

    // 0x321ff8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x321ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x321ffc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x321ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x322000: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x322000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x322004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322008: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x322008u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32200c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x32200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322010: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x322010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x322014: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x322014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322018: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x322018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32201c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32201cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322020: 0x0  nop
    ctx->pc = 0x322020u;
    // NOP
    // 0x322024: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x322024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x322028: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x322028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x32202c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x322030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322034: 0x0  nop
    ctx->pc = 0x322034u;
    // NOP
    // 0x322038: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x322038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x32203c: 0x24041719  addiu       $a0, $zero, 0x1719
    ctx->pc = 0x32203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5913));
    // 0x322040: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x322040u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322044: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x322044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322048: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322048u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32204c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x32204Cu;
    SET_GPR_U32(ctx, 31, 0x322054u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x32204Cu, 0x322054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322054u;
label_322054:
    // 0x322054: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322058: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x322058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x32205c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x322060: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322064: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322068: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x322068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x32206c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32206cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322070: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322074: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x322074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x322078: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32207c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x32207cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322080: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x322080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x322084: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322088: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32208c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x32208cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x322090: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322094: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322098: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x322098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x32209c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32209cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220a4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3220a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220b0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3220b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220bc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3220bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220c8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3220c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220d4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3220d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220dc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3220dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3220E0u;
    SET_GPR_U32(ctx, 31, 0x3220E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3220E0u, 0x3220E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220E8u;
label_3220e8:
    // 0x3220e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220ec: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3220ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3220f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220f4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3220f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3220f8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3220f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3220fc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3220fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x322100: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322100u;
    {
        const bool branch_taken_0x322100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322100) {
            ctx->pc = 0x322114u;
            return;
        }
    }
    ctx->pc = 0x322108u;
    // 0x322108: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x322108u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32210c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32210Cu;
    {
        const bool branch_taken_0x32210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32210c) {
            ctx->pc = 0x322138u;
            return;
        }
    }
    ctx->pc = 0x322114u;
}
