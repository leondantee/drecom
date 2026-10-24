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

// Function: entry_00322874
// Address: 0x322874 - 0x3229e0
void entry_00322874_0x322874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322874_0x322874");
#endif

    switch (ctx->pc) {
        case 0x322914u: goto label_322914;
        case 0x3229b4u: goto label_3229b4;
        default: break;
    }

    ctx->pc = 0x322874u;

    // 0x322874: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x322874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x322878: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x322878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x32287c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x32287cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x322880: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x322880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x322884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322888: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x322888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32288c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x32288cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x322890: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x322890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x322894: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x322894u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x322898: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x322898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32289c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32289cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3228a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3228a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3228a4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3228a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3228a8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3228a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3228ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3228acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3228b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3228b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3228b4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x3228b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3228b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3228b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3228bc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3228bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3228c0: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x3228C0u;
    {
        const bool branch_taken_0x3228c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3228c0) {
            ctx->pc = 0x322AE8u;
            return;
        }
    }
    ctx->pc = 0x3228C8u;
    // 0x3228c8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x3228c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3228cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3228ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3228d0: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x3228d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x3228d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3228d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3228d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3228d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3228dc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x3228dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3228e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3228e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3228e4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x3228e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3228e8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3228e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3228ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3228ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3228f0: 0x0  nop
    ctx->pc = 0x3228f0u;
    // NOP
    // 0x3228f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3228f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3228f8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3228f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3228fc: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x3228fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x322900: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x322900u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322904: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x322904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x322908: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322908u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32290c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x32290Cu;
    SET_GPR_U32(ctx, 31, 0x322914u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x32290Cu, 0x322914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322914u;
label_322914:
    // 0x322914: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322918: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x322918u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x32291c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32291cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322920: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322920u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322924: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x322924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x322928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32292c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32292cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322930: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322930u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322934: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x322934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x322938: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x322938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x32293c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32293cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x322940: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x322940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x322944: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322948: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322948u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32294c: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x32294cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x322950: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322954: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322958: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x322958u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x32295c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32295cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322960: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322964: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x322964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x322968: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32296c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x32296cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322970: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x322970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x322974: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322978: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322978u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32297c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x32297cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x322980: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322984: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322988: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x322988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x32298c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32298cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322990: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322990u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322994: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x322994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x322998: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32299c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x32299cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3229a0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3229a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3229a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3229a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3229a8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3229a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3229ac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3229ACu;
    SET_GPR_U32(ctx, 31, 0x3229B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3229ACu, 0x3229B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3229B4u;
label_3229b4:
    // 0x3229b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3229b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3229b8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3229b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3229bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3229bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3229c0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3229c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3229c4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3229c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3229c8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3229c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3229cc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3229CCu;
    {
        const bool branch_taken_0x3229cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3229cc) {
            ctx->pc = 0x3229E0u;
            return;
        }
    }
    ctx->pc = 0x3229D4u;
    // 0x3229d4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x3229d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3229d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3229D8u;
    {
        const bool branch_taken_0x3229d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3229d8) {
            ctx->pc = 0x322A00u;
            return;
        }
    }
    ctx->pc = 0x3229E0u;
}
