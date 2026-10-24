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

// Function: Em1b_R1_atk_net
// Address: 0x36c340 - 0x36c69c
void Em1b_R1_atk_net_0x36c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_atk_net_0x36c340");
#endif

    switch (ctx->pc) {
        case 0x36c3d0u: goto label_36c3d0;
        case 0x36c46cu: goto label_36c46c;
        case 0x36c47cu: goto label_36c47c;
        case 0x36c4c8u: goto label_36c4c8;
        case 0x36c4ecu: goto label_36c4ec;
        case 0x36c530u: goto label_36c530;
        case 0x36c544u: goto label_36c544;
        case 0x36c558u: goto label_36c558;
        case 0x36c56cu: goto label_36c56c;
        case 0x36c574u: goto label_36c574;
        case 0x36c5a4u: goto label_36c5a4;
        case 0x36c5b8u: goto label_36c5b8;
        case 0x36c5ccu: goto label_36c5cc;
        case 0x36c5e0u: goto label_36c5e0;
        case 0x36c610u: goto label_36c610;
        case 0x36c61cu: goto label_36c61c;
        case 0x36c62cu: goto label_36c62c;
        case 0x36c638u: goto label_36c638;
        default: break;
    }

    ctx->pc = 0x36c340u;

    // 0x36c340: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x36c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x36c344: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x36c344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x36c348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36c34c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36c350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36c354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c35c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x36c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x36c360: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36c360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36c364: 0x2463b2c0  addiu       $v1, $v1, -0x4D40
    ctx->pc = 0x36c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947520));
    // 0x36c368: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x36c368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36c36c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x36c36cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AB2C0u));
    // 0x36c370: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x36c370u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x36c374: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36c374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36c378: 0x2463b2d0  addiu       $v1, $v1, -0x4D30
    ctx->pc = 0x36c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947536));
    // 0x36c37c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x36c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36c380: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x36c380u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AB2D0u));
    // 0x36c384: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x36c384u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x36c388: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c38c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36c38cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c390: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36c390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36c394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36c394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c398: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36C398u;
    {
        const bool branch_taken_0x36c398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36c398) {
            ctx->pc = 0x36C3E0u;
            goto label_36c3e0;
        }
    }
    ctx->pc = 0x36C3A0u;
    // 0x36c3a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C3A0u;
    {
        const bool branch_taken_0x36c3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c3a0) {
            ctx->pc = 0x36C3B0u;
            goto label_36c3b0;
        }
    }
    ctx->pc = 0x36C3A8u;
    // 0x36c3a8: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x36C3A8u;
    {
        const bool branch_taken_0x36c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c3a8) {
            ctx->pc = 0x36C678u;
            goto label_36c678;
        }
    }
    ctx->pc = 0x36C3B0u;
label_36c3b0:
    // 0x36c3b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c3b4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c3b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36c3bc: 0x24065a05  addiu       $a2, $zero, 0x5A05
    ctx->pc = 0x36c3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23045));
    // 0x36c3c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36c3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c3c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36c3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c3c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36C3C8u;
    SET_GPR_U32(ctx, 31, 0x36C3D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36C3C8u, 0x36C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3D0u;
label_36c3d0:
    // 0x36c3d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c3d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36c3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c3d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36c3dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36c3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36c3e0:
    // 0x36c3e0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c3e4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36c3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36c3e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c3ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36c3f0: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x36C3F0u;
    {
        const bool branch_taken_0x36c3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c3f0) {
            ctx->pc = 0x36C600u;
            goto label_36c600;
        }
    }
    ctx->pc = 0x36C3F8u;
    // 0x36c3f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c3fc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36c400: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36c400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36c404: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36c404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36c408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c40c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c410: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36c410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36c414: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c418: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36c418u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36c41c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36c41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36c420: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36c420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36c424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c428: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36c428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36c42c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36c430: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36c434: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c438: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36c438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36c43c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36c440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36c444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C444u;
    {
        const bool branch_taken_0x36c444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c444) {
            ctx->pc = 0x36C458u;
            goto label_36c458;
        }
    }
    ctx->pc = 0x36C44Cu;
    // 0x36c44c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x36c44cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36C450u;
    {
        const bool branch_taken_0x36c450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c450) {
            ctx->pc = 0x36C45Cu;
            goto label_36c45c;
        }
    }
    ctx->pc = 0x36C458u;
label_36c458:
    // 0x36c458: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x36c458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36c45c:
    // 0x36c45c: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x36c45cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x36c460: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x36c460u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c464: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x36C464u;
    {
        const bool branch_taken_0x36c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c464) {
            ctx->pc = 0x36C5F0u;
            goto label_36c5f0;
        }
    }
    ctx->pc = 0x36C46Cu;
label_36c46c:
    // 0x36c46c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c470: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x36c470u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x36c474: 0xc0db498  jal         func_36D260
    ctx->pc = 0x36C474u;
    SET_GPR_U32(ctx, 31, 0x36C47Cu);
    ctx->pc = 0x36D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D260u, 0x36C474u, 0x36C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C47Cu;
label_36c47c:
    // 0x36c47c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x36c47cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36c480: 0x6400059  bltz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x36C480u;
    {
        const bool branch_taken_0x36c480 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x36c480) {
            ctx->pc = 0x36C5E8u;
            goto label_36c5e8;
        }
    }
    ctx->pc = 0x36C488u;
    // 0x36c488: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36c488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c48c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36c490: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x36c490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36c494: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x36c498: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36c498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36c49c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36c4a0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36c4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c4a8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x36c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x36c4ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c4b0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c4b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36c4b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36c4b8: 0x244504c0  addiu       $a1, $v0, 0x4C0
    ctx->pc = 0x36c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
    // 0x36c4bc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x36c4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36c4c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36C4C0u;
    SET_GPR_U32(ctx, 31, 0x36C4C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36C4C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36C4C8u) { return; }
    ctx->pc = 0x36C4C8u;
label_36c4c8:
    // 0x36c4c8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x36c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x36c4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c4d0: 0x0  nop
    ctx->pc = 0x36c4d0u;
    // NOP
    // 0x36c4d4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x36c4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x36c4d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36c4d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36c4dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36c4e0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36c4e4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36C4E4u;
    SET_GPR_U32(ctx, 31, 0x36C4ECu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36C4E4u, 0x36C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4ECu;
label_36c4ec:
    // 0x36c4ec: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36c4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36c4f0: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x36c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x36c4f4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x36c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x36c4f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c4fc: 0x16620018  bne         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36C4FCu;
    {
        const bool branch_taken_0x36c4fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x36c4fc) {
            ctx->pc = 0x36C560u;
            goto label_36c560;
        }
    }
    ctx->pc = 0x36C504u;
    // 0x36c504: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x36c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c508: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x36c508u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c50c: 0x0  nop
    ctx->pc = 0x36c50cu;
    // NOP
    // 0x36c510: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x36c510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x36c514: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36c514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36c518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c51c: 0x0  nop
    ctx->pc = 0x36c51cu;
    // NOP
    // 0x36c520: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36c520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36c524: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x36c524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
    // 0x36c528: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x36c528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x36c52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36c530:
    // 0x36c530: 0x0  nop
    ctx->pc = 0x36c530u;
    // NOP
    // 0x36c534: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36c534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36c538: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x36c538u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36c53c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36C53Cu;
    SET_GPR_U32(ctx, 31, 0x36C544u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36C53Cu, 0x36C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C544u;
label_36c544:
    // 0x36c544: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36c544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36c548: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c54c: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c550: 0xc067844  jal         func_19E110
    ctx->pc = 0x36C550u;
    SET_GPR_U32(ctx, 31, 0x36C558u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36C550u, 0x36C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C558u;
label_36c558:
    // 0x36c558: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36C558u;
    {
        const bool branch_taken_0x36c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c558) {
            ctx->pc = 0x36C5B8u;
            goto label_36c5b8;
        }
    }
    ctx->pc = 0x36C560u;
label_36c560:
    // 0x36c560: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x36c560u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c564: 0x0  nop
    ctx->pc = 0x36c564u;
    // NOP
    // 0x36c568: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x36c568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_36c56c:
    // 0x36c56c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36c570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36c574:
    // 0x36c574: 0x0  nop
    ctx->pc = 0x36c574u;
    // NOP
    // 0x36c578: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36c578u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36c57c: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x36c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
    // 0x36c580: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x36c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x36c584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c588: 0x0  nop
    ctx->pc = 0x36c588u;
    // NOP
    // 0x36c58c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36c58cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36c590: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x36c590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x36c594: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36c594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c598: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c59c: 0xc067844  jal         func_19E110
    ctx->pc = 0x36C59Cu;
    SET_GPR_U32(ctx, 31, 0x36C5A4u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36C59Cu, 0x36C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5A4u;
label_36c5a4:
    // 0x36c5a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c5a8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x36c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c5ac: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x36c5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c5b0: 0xc040d0e  jal         func_103438
    ctx->pc = 0x36C5B0u;
    SET_GPR_U32(ctx, 31, 0x36C5B8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x36C5B8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36C5B8u) { return; }
    ctx->pc = 0x36C5B8u;
label_36c5b8:
    // 0x36c5b8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36c5bc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x36c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c5c0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x36c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36c5c4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36C5C4u;
    SET_GPR_U32(ctx, 31, 0x36C5CCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36C5CCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36C5CCu) { return; }
    ctx->pc = 0x36C5CCu;
label_36c5cc:
    // 0x36c5cc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36c5d0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36c5d4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36c5d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36c5d8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x36C5D8u;
    SET_GPR_U32(ctx, 31, 0x36C5E0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x36C5D8u, 0x36C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5E0u;
label_36c5e0:
    // 0x36c5e0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x36c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x36c5e4: 0x0  nop
    ctx->pc = 0x36c5e4u;
    // NOP
label_36c5e8:
    // 0x36c5e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36c5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36c5ec: 0x0  nop
    ctx->pc = 0x36c5ecu;
    // NOP
label_36c5f0:
    // 0x36c5f0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x36c5f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x36c5f4: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x36C5F4u;
    {
        const bool branch_taken_0x36c5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c5f4) {
            ctx->pc = 0x36C46Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c46c;
        }
    }
    ctx->pc = 0x36C5FCu;
    // 0x36c5fc: 0x0  nop
    ctx->pc = 0x36c5fcu;
    // NOP
label_36c600:
    // 0x36c600: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c604: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c608: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36C608u;
    SET_GPR_U32(ctx, 31, 0x36C610u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36C608u, 0x36C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C610u;
label_36c610:
    // 0x36c610: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c614: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36C614u;
    SET_GPR_U32(ctx, 31, 0x36C61Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36C614u, 0x36C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C61Cu;
label_36c61c:
    // 0x36c61c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c620: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36c620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c624: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36C624u;
    SET_GPR_U32(ctx, 31, 0x36C62Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36C624u, 0x36C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C62Cu;
label_36c62c:
    // 0x36c62c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c630: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36C630u;
    SET_GPR_U32(ctx, 31, 0x36C638u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36C630u, 0x36C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C638u;
label_36c638:
    // 0x36c638: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c63c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36c63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36c640: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36C640u;
    {
        const bool branch_taken_0x36c640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c640) {
            ctx->pc = 0x36C678u;
            goto label_36c678;
        }
    }
    ctx->pc = 0x36C648u;
    // 0x36c648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c64c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c650: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36c650u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c654: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x36c654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36c658: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c65c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36c65cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c660: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c664: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36c664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c668: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c66c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36c66cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c670: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c674: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36c674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36c678:
    // 0x36c678: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x36c678u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36c67c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36c67cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36c680: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36c680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36c684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c690: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x36c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36c694: 0x3e00008  jr          $ra
    ctx->pc = 0x36C694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C69Cu;
}
