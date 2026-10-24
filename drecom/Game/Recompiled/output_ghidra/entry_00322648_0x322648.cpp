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

// Function: entry_00322648
// Address: 0x322648 - 0x322764
void entry_00322648_0x322648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322648_0x322648");
#endif

    switch (ctx->pc) {
        case 0x3226a4u: goto label_3226a4;
        case 0x322738u: goto label_322738;
        default: break;
    }

    ctx->pc = 0x322648u;

    // 0x322648: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x322648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32264c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x322650: 0x2443a010  addiu       $v1, $v0, -0x5FF0
    ctx->pc = 0x322650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x322654: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x322654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322658: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x322658u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32265c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x32265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322660: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x322660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x322664: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x322664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322668: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x322668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32266c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32266cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322670: 0x0  nop
    ctx->pc = 0x322670u;
    // NOP
    // 0x322674: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x322674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x322678: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x322678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x32267c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x322680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322684: 0x0  nop
    ctx->pc = 0x322684u;
    // NOP
    // 0x322688: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x322688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x32268c: 0x24041719  addiu       $a0, $zero, 0x1719
    ctx->pc = 0x32268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5913));
    // 0x322690: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x322690u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322694: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x322694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322698: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322698u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32269c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x32269Cu;
    SET_GPR_U32(ctx, 31, 0x3226A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x32269Cu, 0x3226A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226A4u;
label_3226a4:
    // 0x3226a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x3226a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x3226ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3226acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3226b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226b8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x3226b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x3226bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226c4: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x3226c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226cc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3226ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226d0: 0xa080011a  sb          $zero, 0x11A($a0)
    ctx->pc = 0x3226d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226d8: 0x8c26a618  lw          $a2, -0x59E8($at)
    ctx->pc = 0x3226d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226dc: 0xa0c0011b  sb          $zero, 0x11B($a2)
    ctx->pc = 0x3226dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226e8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x3226e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226f0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226f4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3226f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226fc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322700: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x322700u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x322704: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322708: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x322708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x32270c: 0xa060013d  sb          $zero, 0x13D($v1)
    ctx->pc = 0x32270cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x322710: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322714: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322718: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x322718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x32271c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32271cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322720: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322720u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322724: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x322724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x322728: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32272c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x32272cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x322730: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x322730u;
    SET_GPR_U32(ctx, 31, 0x322738u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x322730u, 0x322738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322738u;
label_322738:
    // 0x322738: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32273c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x32273cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x322740: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322744: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x322744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x322748: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x322748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x32274c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x32274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x322750: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322750u;
    {
        const bool branch_taken_0x322750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322750) {
            ctx->pc = 0x322764u;
            return;
        }
    }
    ctx->pc = 0x322758u;
    // 0x322758: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x322758u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32275c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32275Cu;
    {
        const bool branch_taken_0x32275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32275c) {
            ctx->pc = 0x322788u;
            return;
        }
    }
    ctx->pc = 0x322764u;
}
