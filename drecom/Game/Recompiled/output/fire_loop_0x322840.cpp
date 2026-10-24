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

// Function: fire_loop
// Address: 0x322840 - 0x322da4
void fire_loop_0x322840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fire_loop_0x322840");
#endif

    switch (ctx->pc) {
        case 0x322874u: goto label_322874;
        case 0x322914u: goto label_322914;
        case 0x3229b4u: goto label_3229b4;
        case 0x322a24u: goto label_322a24;
        case 0x322b08u: goto label_322b08;
        case 0x322ba8u: goto label_322ba8;
        case 0x322c48u: goto label_322c48;
        case 0x322cb4u: goto label_322cb4;
        default: break;
    }

    ctx->pc = 0x322840u;

    // 0x322840: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x322840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x322844: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x322844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x322848: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x322848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32284c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x322850: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x322850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x322854: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x322854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x322858: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x322858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32285c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x322860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322868: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x322868u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32286c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x32286Cu;
    {
        const bool branch_taken_0x32286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32286c) {
            ctx->pc = 0x322AF0u;
            goto label_322af0;
        }
    }
    ctx->pc = 0x322874u;
label_322874:
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
            goto label_322ae8;
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
            goto label_3229e0;
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
            goto label_322a00;
        }
    }
    ctx->pc = 0x3229E0u;
label_3229e0:
    // 0x3229e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3229e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3229e4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3229e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3229e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3229e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3229ec: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3229ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3229f0: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x3229f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x3229f4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x3229f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3229f8: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x3229f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3229fc: 0x0  nop
    ctx->pc = 0x3229fcu;
    // NOP
label_322a00:
    // 0x322a00: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x322a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x322a04: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x322a04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x322a08: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x322a08u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x322a0c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x322a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x322a10: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x322a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x322a14: 0x12030034  beq         $s0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x322A14u;
    {
        const bool branch_taken_0x322a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x322a14) {
            ctx->pc = 0x322AE8u;
            goto label_322ae8;
        }
    }
    ctx->pc = 0x322A1Cu;
    // 0x322a1c: 0xc067654  jal         func_19D950
    ctx->pc = 0x322A1Cu;
    SET_GPR_U32(ctx, 31, 0x322A24u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x322A1Cu, 0x322A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A24u;
label_322a24:
    // 0x322a24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x322a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x322a28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x322a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x322a2c: 0x0  nop
    ctx->pc = 0x322a2cu;
    // NOP
    // 0x322a30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x322a30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322a34: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x322a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x322a38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a3c: 0x0  nop
    ctx->pc = 0x322a3cu;
    // NOP
    // 0x322a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x322a44: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x322a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x322a48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x322a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x322a4c: 0xa2030139  sb          $v1, 0x139($s0)
    ctx->pc = 0x322a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x322a50: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x322a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x322a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a58: 0x0  nop
    ctx->pc = 0x322a58u;
    // NOP
    // 0x322a5c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x322a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x322a60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322a64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a68: 0x0  nop
    ctx->pc = 0x322a68u;
    // NOP
    // 0x322a6c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x322a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x322a70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a78: 0x0  nop
    ctx->pc = 0x322a78u;
    // NOP
    // 0x322a7c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x322a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x322a80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a88: 0x0  nop
    ctx->pc = 0x322a88u;
    // NOP
    // 0x322a8c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x322a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x322a90: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322a94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a98: 0x0  nop
    ctx->pc = 0x322a98u;
    // NOP
    // 0x322a9c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x322a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x322aa0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322aa8: 0x0  nop
    ctx->pc = 0x322aa8u;
    // NOP
    // 0x322aac: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x322aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x322ab0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322ab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322ab8: 0x0  nop
    ctx->pc = 0x322ab8u;
    // NOP
    // 0x322abc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x322abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x322ac0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x322ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x322ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322ac8: 0x0  nop
    ctx->pc = 0x322ac8u;
    // NOP
    // 0x322acc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x322accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x322ad0: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x322ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x322ad4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x322ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x322ad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322adc: 0x0  nop
    ctx->pc = 0x322adcu;
    // NOP
    // 0x322ae0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x322ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x322ae4: 0x0  nop
    ctx->pc = 0x322ae4u;
    // NOP
label_322ae8:
    // 0x322ae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x322aec: 0x0  nop
    ctx->pc = 0x322aecu;
    // NOP
label_322af0:
    // 0x322af0: 0x2e230013  sltiu       $v1, $s1, 0x13
    ctx->pc = 0x322af0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x322af4: 0x1460ff5f  bnez        $v1, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x322AF4u;
    {
        const bool branch_taken_0x322af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322af4) {
            ctx->pc = 0x322874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322874;
        }
    }
    ctx->pc = 0x322AFCu;
    // 0x322afc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x322afcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322b00: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x322B00u;
    {
        const bool branch_taken_0x322b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322b00) {
            ctx->pc = 0x322D68u;
            goto label_322d68;
        }
    }
    ctx->pc = 0x322B08u;
label_322b08:
    // 0x322b08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x322b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x322b0c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x322b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x322b10: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x322b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x322b14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x322b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x322b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322b1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x322b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x322b20: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x322b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x322b24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x322b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x322b28: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x322b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x322b2c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x322b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x322b30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x322b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x322b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322b38: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x322b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x322b3c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x322b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x322b40: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x322b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x322b44: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x322b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x322b48: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x322b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x322b4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x322b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x322b50: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x322b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x322b54: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x322B54u;
    {
        const bool branch_taken_0x322b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322b54) {
            ctx->pc = 0x322D60u;
            goto label_322d60;
        }
    }
    ctx->pc = 0x322B5Cu;
    // 0x322b5c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x322b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x322b60: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x322b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x322b64: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x322b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x322b68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322b6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x322b6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322b70: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x322b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x322b74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x322b74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x322b78: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x322b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322b7c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x322b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x322b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322b84: 0x0  nop
    ctx->pc = 0x322b84u;
    // NOP
    // 0x322b88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x322b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x322b8c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x322b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x322b90: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x322b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x322b94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x322b94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322b98: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x322b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x322b9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322b9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322ba0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x322BA0u;
    SET_GPR_U32(ctx, 31, 0x322BA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x322BA0u, 0x322BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322BA8u;
label_322ba8:
    // 0x322ba8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bac: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x322bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x322bb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bb4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322bb8: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x322bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x322bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322bc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bc4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322bc8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x322bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x322bcc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x322bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x322bd0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x322bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x322bd4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x322bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x322bd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bdc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322be0: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x322be0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x322be4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322be8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322be8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322bec: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x322becu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x322bf0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322bf4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322bf8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x322bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x322bfc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c00: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c04: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x322c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c0c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c10: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x322c10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c1c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x322c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c28: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x322c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322c30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c34: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x322c34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x322c38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c3c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x322c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x322c40: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x322C40u;
    SET_GPR_U32(ctx, 31, 0x322C48u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x322C40u, 0x322C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C48u;
label_322c48:
    // 0x322c48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c4c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x322c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x322c50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c54: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x322c54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x322c58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x322c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x322c5c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x322c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x322c60: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x322C60u;
    {
        const bool branch_taken_0x322c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x322c60) {
            ctx->pc = 0x322C74u;
            goto label_322c74;
        }
    }
    ctx->pc = 0x322C68u;
    // 0x322c68: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x322c68u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x322C6Cu;
    {
        const bool branch_taken_0x322c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c6c) {
            ctx->pc = 0x322C90u;
            goto label_322c90;
        }
    }
    ctx->pc = 0x322C74u;
label_322c74:
    // 0x322c74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c78: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x322c78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x322c7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322c80: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x322c80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x322c84: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x322c84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x322c88: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x322c88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x322c8c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x322c8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_322c90:
    // 0x322c90: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x322c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x322c94: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x322c94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x322c98: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x322c98u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x322c9c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x322c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x322ca0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x322ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x322ca4: 0x1203002e  beq         $s0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x322CA4u;
    {
        const bool branch_taken_0x322ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x322ca4) {
            ctx->pc = 0x322D60u;
            goto label_322d60;
        }
    }
    ctx->pc = 0x322CACu;
    // 0x322cac: 0xc067654  jal         func_19D950
    ctx->pc = 0x322CACu;
    SET_GPR_U32(ctx, 31, 0x322CB4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x322CACu, 0x322CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322CB4u;
label_322cb4:
    // 0x322cb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x322cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x322cb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x322cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x322cbc: 0x0  nop
    ctx->pc = 0x322cbcu;
    // NOP
    // 0x322cc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x322cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322cc4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x322cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x322cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322ccc: 0x0  nop
    ctx->pc = 0x322cccu;
    // NOP
    // 0x322cd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x322cd4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x322cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x322cd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x322cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x322cdc: 0xa2030139  sb          $v1, 0x139($s0)
    ctx->pc = 0x322cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x322ce0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x322ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x322ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322ce8: 0x0  nop
    ctx->pc = 0x322ce8u;
    // NOP
    // 0x322cec: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x322cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x322cf0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322cf8: 0x0  nop
    ctx->pc = 0x322cf8u;
    // NOP
    // 0x322cfc: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x322cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x322d00: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d08: 0x0  nop
    ctx->pc = 0x322d08u;
    // NOP
    // 0x322d0c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x322d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x322d10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d18: 0x0  nop
    ctx->pc = 0x322d18u;
    // NOP
    // 0x322d1c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x322d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x322d20: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322d24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d28: 0x0  nop
    ctx->pc = 0x322d28u;
    // NOP
    // 0x322d2c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x322d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x322d30: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d38: 0x0  nop
    ctx->pc = 0x322d38u;
    // NOP
    // 0x322d3c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x322d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x322d40: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322d44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d48: 0x0  nop
    ctx->pc = 0x322d48u;
    // NOP
    // 0x322d4c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x322d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x322d50: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x322d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x322d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d58: 0x0  nop
    ctx->pc = 0x322d58u;
    // NOP
    // 0x322d5c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x322d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_322d60:
    // 0x322d60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x322d64: 0x0  nop
    ctx->pc = 0x322d64u;
    // NOP
label_322d68:
    // 0x322d68: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x322d68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x322d6c: 0x1460ff66  bnez        $v1, . + 4 + (-0x9A << 2)
    ctx->pc = 0x322D6Cu;
    {
        const bool branch_taken_0x322d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322d6c) {
            ctx->pc = 0x322B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322b08;
        }
    }
    ctx->pc = 0x322D74u;
    // 0x322d74: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x322d74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x322d78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x322d78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x322d7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x322d7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x322d80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x322d80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x322d84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x322d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322d88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x322d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322d8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322d98: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x322d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x322D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322DA4u;
}
