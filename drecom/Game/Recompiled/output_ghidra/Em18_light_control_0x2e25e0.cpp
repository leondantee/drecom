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

// Function: Em18_light_control
// Address: 0x2e25e0 - 0x2e2bcc
void Em18_light_control_0x2e25e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_light_control_0x2e25e0");
#endif

    switch (ctx->pc) {
        case 0x2e2644u: goto label_2e2644;
        case 0x2e2654u: goto label_2e2654;
        case 0x2e27f4u: goto label_2e27f4;
        case 0x2e2824u: goto label_2e2824;
        case 0x2e282cu: goto label_2e282c;
        case 0x2e2878u: goto label_2e2878;
        case 0x2e289cu: goto label_2e289c;
        case 0x2e28c0u: goto label_2e28c0;
        case 0x2e28e4u: goto label_2e28e4;
        case 0x2e2904u: goto label_2e2904;
        case 0x2e294cu: goto label_2e294c;
        case 0x2e297cu: goto label_2e297c;
        case 0x2e2984u: goto label_2e2984;
        case 0x2e29d0u: goto label_2e29d0;
        case 0x2e29f4u: goto label_2e29f4;
        case 0x2e2a18u: goto label_2e2a18;
        case 0x2e2a3cu: goto label_2e2a3c;
        case 0x2e2a5cu: goto label_2e2a5c;
        default: break;
    }

    ctx->pc = 0x2e25e0u;

    // 0x2e25e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e25e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e25e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e25e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e25e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e25e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e25ec: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2e25ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2e25f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e25f4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e25f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e25f8: 0x920300dd  lbu         $v1, 0xDD($s0)
    ctx->pc = 0x2e25f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 221)));
    // 0x2e25fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e25fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e2600: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e2600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2604: 0x108300ce  beq         $a0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x2E2604u;
    {
        const bool branch_taken_0x2e2604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2604) {
            ctx->pc = 0x2E2940u;
            goto label_2e2940;
        }
    }
    ctx->pc = 0x2E260Cu;
    // 0x2e260c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e260cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2610: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2E2610u;
    {
        const bool branch_taken_0x2e2610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2610) {
            ctx->pc = 0x2E2798u;
            goto label_2e2798;
        }
    }
    ctx->pc = 0x2E2618u;
    // 0x2e2618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e261c: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E261Cu;
    {
        const bool branch_taken_0x2e261c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e261c) {
            ctx->pc = 0x2E265Cu;
            goto label_2e265c;
        }
    }
    ctx->pc = 0x2E2624u;
    // 0x2e2624: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2624u;
    {
        const bool branch_taken_0x2e2624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2624) {
            ctx->pc = 0x2E2634u;
            goto label_2e2634;
        }
    }
    ctx->pc = 0x2E262Cu;
    // 0x2e262c: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x2E262Cu;
    {
        const bool branch_taken_0x2e262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e262c) {
            ctx->pc = 0x2E2BB8u;
            goto label_2e2bb8;
        }
    }
    ctx->pc = 0x2E2634u;
label_2e2634:
    // 0x2e2634: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e2634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e2638: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e263c: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E263Cu;
    SET_GPR_U32(ctx, 31, 0x2E2644u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E263Cu, 0x2E2644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2644u;
label_2e2644:
    // 0x2e2644: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e2644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e2648: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e264c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E264Cu;
    SET_GPR_U32(ctx, 31, 0x2E2654u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E264Cu, 0x2E2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2654u;
label_2e2654:
    // 0x2e2654: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x2E2654u;
    {
        const bool branch_taken_0x2e2654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2654) {
            ctx->pc = 0x2E2BB8u;
            goto label_2e2bb8;
        }
    }
    ctx->pc = 0x2E265Cu;
label_2e265c:
    // 0x2e265c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2e265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e2660: 0xa60200c8  sh          $v0, 0xC8($s0)
    ctx->pc = 0x2e2660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e2664: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e2664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e2668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e266c: 0x0  nop
    ctx->pc = 0x2e266cu;
    // NOP
    // 0x2e2670: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e2670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x2e2674: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2e2674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2e2678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e267c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2680: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e2680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e2684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2688: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e268c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e268cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e2690: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e2690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e2694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2698: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2e2698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2e269c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2e269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2e26a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e26a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e26a4: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e26a8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e26ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e26acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e26b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e26b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e26b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e26b8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e26bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e26c0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2e26c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2e26c4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e26c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e26c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e26cc: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e26d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e26d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e26d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e26dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e26e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e26e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e26e8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2e26e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2e26ec: 0x3c023ec8  lui         $v0, 0x3EC8
    ctx->pc = 0x2e26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16072 << 16));
    // 0x2e26f0: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x2e26f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x2e26f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e26f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e26f8: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e26fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e2700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2704: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e2708: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e2708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e270c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e2710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2714: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2e2714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2e2718: 0x3c023ec8  lui         $v0, 0x3EC8
    ctx->pc = 0x2e2718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16072 << 16));
    // 0x2e271c: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x2e271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x2e2720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2724: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e2724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2728: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e2728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e272c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2730: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e2734: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e2734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e2738: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e2738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e273c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2740: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2e2740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2e2744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e2744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e274c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2750: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e2750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e2754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2758: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e275c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e275cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e2760: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e2760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e2764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2768: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x2e2768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x2e276c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2e276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2770: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e2770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e2774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2778: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e2778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e277c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e2780: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e2780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e2784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2788: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x2e2788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x2e278c: 0x920200dd  lbu         $v0, 0xDD($s0)
    ctx->pc = 0x2e278cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 221)));
    // 0x2e2790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e2790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e2794: 0xa20200dd  sb          $v0, 0xDD($s0)
    ctx->pc = 0x2e2794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 221), (uint8_t)GPR_U32(ctx, 2));
label_2e2798:
    // 0x2e2798: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x2e2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e279c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e279cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e27a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e27a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e27a4: 0x0  nop
    ctx->pc = 0x2e27a4u;
    // NOP
    // 0x2e27a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e27a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e27ac: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e27acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x2e27b0: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x2e27b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e27b4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x2e27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x2e27b8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e27b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e27bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e27bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e27c0: 0x0  nop
    ctx->pc = 0x2e27c0u;
    // NOP
    // 0x2e27c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e27c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e27c8: 0x0  nop
    ctx->pc = 0x2e27c8u;
    // NOP
    // 0x2e27cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E27CCu;
    {
        const bool branch_taken_0x2e27cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e27cc) {
            ctx->pc = 0x2E27E8u;
            goto label_2e27e8;
        }
    }
    ctx->pc = 0x2E27D4u;
    // 0x2e27d4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x2e27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x2e27d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e27d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e27dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e27dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e27e0: 0x0  nop
    ctx->pc = 0x2e27e0u;
    // NOP
    // 0x2e27e4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e27e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_2e27e8:
    // 0x2e27e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e27e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e27ec: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E27ECu;
    SET_GPR_U32(ctx, 31, 0x2E27F4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E27ECu, 0x2E27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E27F4u;
label_2e27f4:
    // 0x2e27f4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e27f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e27fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e27fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2800: 0x0  nop
    ctx->pc = 0x2e2800u;
    // NOP
    // 0x2e2804: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e2804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2808: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e2808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e280c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e2810: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2814: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e2814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e2818: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e2818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e281c: 0xc05db20  jal         func_176C80
    ctx->pc = 0x2E281Cu;
    SET_GPR_U32(ctx, 31, 0x2E2824u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x2E281Cu, 0x2E2824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2824u;
label_2e2824:
    // 0x2e2824: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E2824u;
    SET_GPR_U32(ctx, 31, 0x2E282Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E2824u, 0x2E282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E282Cu;
label_2e282c:
    // 0x2e282c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2830: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e2830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e2834: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e2834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2838: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E2838u;
    {
        const bool branch_taken_0x2e2838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2838) {
            ctx->pc = 0x2E28C8u;
            goto label_2e28c8;
        }
    }
    ctx->pc = 0x2E2840u;
    // 0x2e2840: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2844: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2844u;
    {
        const bool branch_taken_0x2e2844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2844) {
            ctx->pc = 0x2E28A4u;
            goto label_2e28a4;
        }
    }
    ctx->pc = 0x2E284Cu;
    // 0x2e284c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2850: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2850u;
    {
        const bool branch_taken_0x2e2850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2850) {
            ctx->pc = 0x2E2880u;
            goto label_2e2880;
        }
    }
    ctx->pc = 0x2E2858u;
    // 0x2e2858: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2858u;
    {
        const bool branch_taken_0x2e2858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2858) {
            ctx->pc = 0x2E2868u;
            goto label_2e2868;
        }
    }
    ctx->pc = 0x2E2860u;
    // 0x2e2860: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2860u;
    {
        const bool branch_taken_0x2e2860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2860) {
            ctx->pc = 0x2E2868u;
            goto label_2e2868;
        }
    }
    ctx->pc = 0x2E2868u;
label_2e2868:
    // 0x2e2868: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e286c: 0xc60c008c  lwc1        $f12, 0x8C($s0)
    ctx->pc = 0x2e286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e2870: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E2870u;
    SET_GPR_U32(ctx, 31, 0x2E2878u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E2870u, 0x2E2878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2878u;
label_2e2878:
    // 0x2e2878: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E2878u;
    {
        const bool branch_taken_0x2e2878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2878) {
            ctx->pc = 0x2E28E4u;
            goto label_2e28e4;
        }
    }
    ctx->pc = 0x2E2880u;
label_2e2880:
    // 0x2e2880: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2e2880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2e2884: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2888: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e2888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e288c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e288cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e2890: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2894: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E2894u;
    SET_GPR_U32(ctx, 31, 0x2E289Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E2894u, 0x2E289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E289Cu;
label_2e289c:
    // 0x2e289c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E289Cu;
    {
        const bool branch_taken_0x2e289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e289c) {
            ctx->pc = 0x2E28E4u;
            goto label_2e28e4;
        }
    }
    ctx->pc = 0x2E28A4u;
label_2e28a4:
    // 0x2e28a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e28a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e28a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e28ac: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e28b0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e28b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e28b4: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e28b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e28b8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E28B8u;
    SET_GPR_U32(ctx, 31, 0x2E28C0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E28B8u, 0x2E28C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E28C0u;
label_2e28c0:
    // 0x2e28c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E28C0u;
    {
        const bool branch_taken_0x2e28c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28c0) {
            ctx->pc = 0x2E28E4u;
            goto label_2e28e4;
        }
    }
    ctx->pc = 0x2E28C8u;
label_2e28c8:
    // 0x2e28c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e28cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e28ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e28d0: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e28d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e28d4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e28d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e28d8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e28d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e28dc: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E28DCu;
    SET_GPR_U32(ctx, 31, 0x2E28E4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E28DCu, 0x2E28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E28E4u;
label_2e28e4:
    // 0x2e28e4: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x2e28e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e28e8: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2e28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2e28ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e28ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e28f0: 0x0  nop
    ctx->pc = 0x2e28f0u;
    // NOP
    // 0x2e28f4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e28f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e28f8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e28f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e28fc: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E28FCu;
    SET_GPR_U32(ctx, 31, 0x2E2904u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E28FCu, 0x2E2904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2904u;
label_2e2904:
    // 0x2e2904: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2e2908: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2908u;
    {
        const bool branch_taken_0x2e2908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2908) {
            ctx->pc = 0x2E2924u;
            goto label_2e2924;
        }
    }
    ctx->pc = 0x2E2910u;
    // 0x2e2910: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2e2914: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e2918: 0xa60300c8  sh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e291c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2E291Cu;
    {
        const bool branch_taken_0x2e291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e291c) {
            ctx->pc = 0x2E2BB8u;
            goto label_2e2bb8;
        }
    }
    ctx->pc = 0x2E2924u;
label_2e2924:
    // 0x2e2924: 0x920300dd  lbu         $v1, 0xDD($s0)
    ctx->pc = 0x2e2924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 221)));
    // 0x2e2928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e2928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e292c: 0xa20300dd  sb          $v1, 0xDD($s0)
    ctx->pc = 0x2e292cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 221), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2930: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2e2930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2e2934: 0xa60300c8  sh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2938: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2E2938u;
    {
        const bool branch_taken_0x2e2938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2938) {
            ctx->pc = 0x2E2BB8u;
            goto label_2e2bb8;
        }
    }
    ctx->pc = 0x2E2940u;
label_2e2940:
    // 0x2e2940: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e2940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e2944: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E2944u;
    SET_GPR_U32(ctx, 31, 0x2E294Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E2944u, 0x2E294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E294Cu;
label_2e294c:
    // 0x2e294c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2950: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e2950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e2954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2958: 0x0  nop
    ctx->pc = 0x2e2958u;
    // NOP
    // 0x2e295c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e295cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2960: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e2960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e2964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e2964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e2968: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e296c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e296cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e2970: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e2970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e2974: 0xc05db20  jal         func_176C80
    ctx->pc = 0x2E2974u;
    SET_GPR_U32(ctx, 31, 0x2E297Cu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x2E2974u, 0x2E297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E297Cu;
label_2e297c:
    // 0x2e297c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E297Cu;
    SET_GPR_U32(ctx, 31, 0x2E2984u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E297Cu, 0x2E2984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2984u;
label_2e2984:
    // 0x2e2984: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e2984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2988: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e2988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e298c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2990: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E2990u;
    {
        const bool branch_taken_0x2e2990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2990) {
            ctx->pc = 0x2E2A20u;
            goto label_2e2a20;
        }
    }
    ctx->pc = 0x2E2998u;
    // 0x2e2998: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e299c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E299Cu;
    {
        const bool branch_taken_0x2e299c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e299c) {
            ctx->pc = 0x2E29FCu;
            goto label_2e29fc;
        }
    }
    ctx->pc = 0x2E29A4u;
    // 0x2e29a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e29a8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E29A8u;
    {
        const bool branch_taken_0x2e29a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e29a8) {
            ctx->pc = 0x2E29D8u;
            goto label_2e29d8;
        }
    }
    ctx->pc = 0x2E29B0u;
    // 0x2e29b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E29B0u;
    {
        const bool branch_taken_0x2e29b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29b0) {
            ctx->pc = 0x2E29C0u;
            goto label_2e29c0;
        }
    }
    ctx->pc = 0x2E29B8u;
    // 0x2e29b8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E29B8u;
    {
        const bool branch_taken_0x2e29b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29b8) {
            ctx->pc = 0x2E29C0u;
            goto label_2e29c0;
        }
    }
    ctx->pc = 0x2E29C0u;
label_2e29c0:
    // 0x2e29c0: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e29c4: 0xc60c008c  lwc1        $f12, 0x8C($s0)
    ctx->pc = 0x2e29c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e29c8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E29C8u;
    SET_GPR_U32(ctx, 31, 0x2E29D0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E29C8u, 0x2E29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E29D0u;
label_2e29d0:
    // 0x2e29d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E29D0u;
    {
        const bool branch_taken_0x2e29d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29d0) {
            ctx->pc = 0x2E2A3Cu;
            goto label_2e2a3c;
        }
    }
    ctx->pc = 0x2E29D8u;
label_2e29d8:
    // 0x2e29d8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2e29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2e29dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e29dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e29e0: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e29e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e29e4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e29e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e29e8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e29ec: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E29ECu;
    SET_GPR_U32(ctx, 31, 0x2E29F4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E29ECu, 0x2E29F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E29F4u;
label_2e29f4:
    // 0x2e29f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E29F4u;
    {
        const bool branch_taken_0x2e29f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29f4) {
            ctx->pc = 0x2E2A3Cu;
            goto label_2e2a3c;
        }
    }
    ctx->pc = 0x2E29FCu;
label_2e29fc:
    // 0x2e29fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2a00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2a04: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e2a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2a08: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e2a08u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e2a0c: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2a10: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E2A10u;
    SET_GPR_U32(ctx, 31, 0x2E2A18u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E2A10u, 0x2E2A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A18u;
label_2e2a18:
    // 0x2e2a18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2A18u;
    {
        const bool branch_taken_0x2e2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a18) {
            ctx->pc = 0x2E2A3Cu;
            goto label_2e2a3c;
        }
    }
    ctx->pc = 0x2E2A20u;
label_2e2a20:
    // 0x2e2a20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e2a24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2a28: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e2a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2a2c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e2a2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e2a30: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2a34: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E2A34u;
    SET_GPR_U32(ctx, 31, 0x2E2A3Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E2A34u, 0x2E2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A3Cu;
label_2e2a3c:
    // 0x2e2a3c: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x2e2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2a40: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2e2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2e2a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2a48: 0x0  nop
    ctx->pc = 0x2e2a48u;
    // NOP
    // 0x2e2a4c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e2a4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2a50: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2a54: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E2A54u;
    SET_GPR_U32(ctx, 31, 0x2E2A5Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E2A54u, 0x2E2A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A5Cu;
label_2e2a5c:
    // 0x2e2a5c: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2a5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2e2a60: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E2A60u;
    {
        const bool branch_taken_0x2e2a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a60) {
            ctx->pc = 0x2E2BB4u;
            goto label_2e2bb4;
        }
    }
    ctx->pc = 0x2E2A68u;
    // 0x2e2a68: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2a68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2e2a6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e2a70: 0xa60300c8  sh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2a74: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2a78: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2a7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2a80: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2a84: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2a88: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2a8c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2a90: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2a94: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2a98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2a9c: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x2e2a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2aa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2aa4: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x2e2aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2e2aa8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2aac: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2ab4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2ab8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2abc: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2ac0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2ac4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2ac8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2acc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2ad0: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x2e2ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ad4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2ad8: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x2e2ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x2e2adc: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2ae0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2ae8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2aec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2af0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2af4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2af8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2afc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2b00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2b04: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x2e2b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2b08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2b0c: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x2e2b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x2e2b10: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2b14: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b1c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2b20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2b24: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2b28: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b2c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2b30: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2b34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2b38: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x2e2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2b3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2b40: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x2e2b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x2e2b44: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2b48: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2b4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b50: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2b54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2b58: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2b5c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b60: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2b64: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2b68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2b6c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x2e2b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2b70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2b74: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x2e2b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x2e2b78: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2b7c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e2b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e2b80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e2b88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2b8c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e2b90: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2b94: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e2b98: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2b9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2ba0: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x2e2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ba4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2ba8: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x2e2ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x2e2bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2BACu;
    {
        const bool branch_taken_0x2e2bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2bac) {
            ctx->pc = 0x2E2BB8u;
            goto label_2e2bb8;
        }
    }
    ctx->pc = 0x2E2BB4u;
label_2e2bb4:
    // 0x2e2bb4: 0xa20000dd  sb          $zero, 0xDD($s0)
    ctx->pc = 0x2e2bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 221), (uint8_t)GPR_U32(ctx, 0));
label_2e2bb8:
    // 0x2e2bb8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e2bb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2bc0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e2bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2BCCu;
}
