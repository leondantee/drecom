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

// Function: Em10_R1_turn
// Address: 0x12d670 - 0x12d8c0
void Em10_R1_turn_0x12d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_turn_0x12d670");
#endif

    switch (ctx->pc) {
        case 0x12d6fcu: goto label_12d6fc;
        case 0x12d71cu: goto label_12d71c;
        case 0x12d728u: goto label_12d728;
        case 0x12d738u: goto label_12d738;
        case 0x12d744u: goto label_12d744;
        case 0x12d790u: goto label_12d790;
        case 0x12d7b8u: goto label_12d7b8;
        case 0x12d7d0u: goto label_12d7d0;
        case 0x12d7e8u: goto label_12d7e8;
        case 0x12d7fcu: goto label_12d7fc;
        case 0x12d820u: goto label_12d820;
        case 0x12d840u: goto label_12d840;
        case 0x12d84cu: goto label_12d84c;
        case 0x12d85cu: goto label_12d85c;
        case 0x12d868u: goto label_12d868;
        default: break;
    }

    ctx->pc = 0x12d670u;

    // 0x12d670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12d670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12d674: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x12d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x12d678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12d678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12d67c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x12d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x12d680: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d684: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12d684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12d688: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12d688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d68c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12d690: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12d690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12d694: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12d694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12d698: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12d698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x12d69c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d6a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12d6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12d6a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12d6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12d6a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d6ac: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x12D6ACu;
    {
        const bool branch_taken_0x12d6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d6ac) {
            ctx->pc = 0x12D830u;
            goto label_12d830;
        }
    }
    ctx->pc = 0x12D6B4u;
    // 0x12d6b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d6b8: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x12D6B8u;
    {
        const bool branch_taken_0x12d6b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d6b8) {
            ctx->pc = 0x12D76Cu;
            goto label_12d76c;
        }
    }
    ctx->pc = 0x12D6C0u;
    // 0x12d6c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d6c4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12D6C4u;
    {
        const bool branch_taken_0x12d6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d6c4) {
            ctx->pc = 0x12D70Cu;
            goto label_12d70c;
        }
    }
    ctx->pc = 0x12D6CCu;
    // 0x12d6cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D6CCu;
    {
        const bool branch_taken_0x12d6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d6cc) {
            ctx->pc = 0x12D6DCu;
            goto label_12d6dc;
        }
    }
    ctx->pc = 0x12D6D4u;
    // 0x12d6d4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x12D6D4u;
    {
        const bool branch_taken_0x12d6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d6d4) {
            ctx->pc = 0x12D8ACu;
            goto label_12d8ac;
        }
    }
    ctx->pc = 0x12D6DCu;
label_12d6dc:
    // 0x12d6dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d6e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d6e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12d6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12d6e8: 0x24060a04  addiu       $a2, $zero, 0xA04
    ctx->pc = 0x12d6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2564));
    // 0x12d6ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d6f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12d6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12d6f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12D6F4u;
    SET_GPR_U32(ctx, 31, 0x12D6FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12D6F4u, 0x12D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6FCu;
label_12d6fc:
    // 0x12d6fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d700: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12d700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12d704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d708: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12d708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12d70c:
    // 0x12d70c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d710: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d714: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12D714u;
    SET_GPR_U32(ctx, 31, 0x12D71Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12D714u, 0x12D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D71Cu;
label_12d71c:
    // 0x12d71c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d720: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12D720u;
    SET_GPR_U32(ctx, 31, 0x12D728u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12D720u, 0x12D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D728u;
label_12d728:
    // 0x12d728: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d72c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d72cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d730: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12D730u;
    SET_GPR_U32(ctx, 31, 0x12D738u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D730u, 0x12D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D738u;
label_12d738:
    // 0x12d738: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d73c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12D73Cu;
    SET_GPR_U32(ctx, 31, 0x12D744u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D73Cu, 0x12D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D744u;
label_12d744:
    // 0x12d744: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d748: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12d748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12d74c: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x12D74Cu;
    {
        const bool branch_taken_0x12d74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d74c) {
            ctx->pc = 0x12D8ACu;
            goto label_12d8ac;
        }
    }
    ctx->pc = 0x12D754u;
    // 0x12d754: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d758: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12d758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12d75c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d760: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12d760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12d764: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x12D764u;
    {
        const bool branch_taken_0x12d764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d764) {
            ctx->pc = 0x12D8ACu;
            goto label_12d8ac;
        }
    }
    ctx->pc = 0x12D76Cu;
label_12d76c:
    // 0x12d76c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d770: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d774: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12d778: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12d77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12d77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d780: 0x0  nop
    ctx->pc = 0x12d780u;
    // NOP
    // 0x12d784: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12d784u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d788: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12D788u;
    SET_GPR_U32(ctx, 31, 0x12D790u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12D788u, 0x12D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D790u;
label_12d790:
    // 0x12d790: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d794: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12d794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12d798: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d79c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d7a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12d7a4: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x12d7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x12d7a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d7ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12d7acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12d7b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12D7B0u;
    SET_GPR_U32(ctx, 31, 0x12D7B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12D7B0u, 0x12D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7B8u;
label_12d7b8:
    // 0x12d7b8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12d7bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12d7c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12d7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12d7c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d7c8: 0xc067844  jal         func_19E110
    ctx->pc = 0x12D7C8u;
    SET_GPR_U32(ctx, 31, 0x12D7D0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x12D7C8u, 0x12D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7D0u;
label_12d7d0:
    // 0x12d7d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d7d4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12d7d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12d7dc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x12d7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x12d7e0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12D7E0u;
    SET_GPR_U32(ctx, 31, 0x12D7E8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12D7E8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12D7E8u) { return; }
    ctx->pc = 0x12D7E8u;
label_12d7e8:
    // 0x12d7e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d7ec: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12d7f0: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x12d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x12d7f4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12D7F4u;
    SET_GPR_U32(ctx, 31, 0x12D7FCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D7F4u, 0x12D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7FCu;
label_12d7fc:
    // 0x12d7fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d800: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x12d800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12d804: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d808: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12d80c: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x12d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x12d810: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12d810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d814: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x12d814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x12d818: 0xc040c00  jal         func_103000
    ctx->pc = 0x12D818u;
    SET_GPR_U32(ctx, 31, 0x12D820u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x12D820u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12D820u) { return; }
    ctx->pc = 0x12D820u;
label_12d820:
    // 0x12d820: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d824: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12d824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12d828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d82c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12d82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12d830:
    // 0x12d830: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d834: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d838: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12D838u;
    SET_GPR_U32(ctx, 31, 0x12D840u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12D838u, 0x12D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D840u;
label_12d840:
    // 0x12d840: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d844: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12D844u;
    SET_GPR_U32(ctx, 31, 0x12D84Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12D844u, 0x12D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D84Cu;
label_12d84c:
    // 0x12d84c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d850: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d854: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12D854u;
    SET_GPR_U32(ctx, 31, 0x12D85Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D854u, 0x12D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D85Cu;
label_12d85c:
    // 0x12d85c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d860: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12D860u;
    SET_GPR_U32(ctx, 31, 0x12D868u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D860u, 0x12D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D868u;
label_12d868:
    // 0x12d868: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d86c: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x12d86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x12d870: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12D870u;
    {
        const bool branch_taken_0x12d870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d870) {
            ctx->pc = 0x12D8ACu;
            goto label_12d8ac;
        }
    }
    ctx->pc = 0x12D878u;
    // 0x12d878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12d878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d87c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d880: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12d880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12d884: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d888: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d88c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12d88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12d890: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d894: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12d894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d898: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d89c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12d89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d8a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d8a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12d8a8: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12d8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
label_12d8ac:
    // 0x12d8ac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12d8acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d8b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d8b4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x12d8b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12d8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x12D8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D8C0u;
}
