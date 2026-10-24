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

// Function: Em1c_R1_atk_punch
// Address: 0x36e900 - 0x36eaa4
void Em1c_R1_atk_punch_0x36e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_punch_0x36e900");
#endif

    switch (ctx->pc) {
        case 0x36e968u: goto label_36e968;
        case 0x36e9ccu: goto label_36e9cc;
        case 0x36ea00u: goto label_36ea00;
        case 0x36ea34u: goto label_36ea34;
        case 0x36ea6cu: goto label_36ea6c;
        case 0x36ea7cu: goto label_36ea7c;
        case 0x36ea88u: goto label_36ea88;
        case 0x36ea94u: goto label_36ea94;
        default: break;
    }

    ctx->pc = 0x36e900u;

    // 0x36e900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e904: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e908: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36e908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x36e90c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36e910: 0x2463b3c0  addiu       $v1, $v1, -0x4C40
    ctx->pc = 0x36e910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947776));
    // 0x36e914: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36e914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36e918: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x36e918u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AB3C0u));
    // 0x36e91c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x36e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x36e920: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e924: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e928: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e92c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e930: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36E930u;
    {
        const bool branch_taken_0x36e930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e930) {
            ctx->pc = 0x36E980u;
            goto label_36e980;
        }
    }
    ctx->pc = 0x36E938u;
    // 0x36e938: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E938u;
    {
        const bool branch_taken_0x36e938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e938) {
            ctx->pc = 0x36E948u;
            goto label_36e948;
        }
    }
    ctx->pc = 0x36E940u;
    // 0x36e940: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x36E940u;
    {
        const bool branch_taken_0x36e940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e940) {
            ctx->pc = 0x36EA94u;
            goto label_36ea94;
        }
    }
    ctx->pc = 0x36E948u;
label_36e948:
    // 0x36e948: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e94c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e950: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e954: 0x24065a0c  addiu       $a2, $zero, 0x5A0C
    ctx->pc = 0x36e954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23052));
    // 0x36e958: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e95c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e960: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E960u;
    SET_GPR_U32(ctx, 31, 0x36E968u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E960u, 0x36E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E968u;
label_36e968:
    // 0x36e968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e96c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36e96cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36e970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e974: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e97c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e980:
    // 0x36e980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e984: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36e984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36e988: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36e98c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36e98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36e990: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x36E990u;
    {
        const bool branch_taken_0x36e990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e990) {
            ctx->pc = 0x36EA34u;
            goto label_36ea34;
        }
    }
    ctx->pc = 0x36E998u;
    // 0x36e998: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x36e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x36e99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36e99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e9a0: 0x0  nop
    ctx->pc = 0x36e9a0u;
    // NOP
    // 0x36e9a4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36e9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e9a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e9ac: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36e9b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e9b4: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36e9b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36e9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36e9bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36e9c0: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36e9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36e9c4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36E9C4u;
    SET_GPR_U32(ctx, 31, 0x36E9CCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36E9C4u, 0x36E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9CCu;
label_36e9cc:
    // 0x36e9cc: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x36e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x36e9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36e9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e9d4: 0x0  nop
    ctx->pc = 0x36e9d4u;
    // NOP
    // 0x36e9d8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36e9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e9dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e9e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36e9e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e9e8: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36e9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36e9ec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36e9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36e9f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36e9f4: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36e9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36e9f8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36E9F8u;
    SET_GPR_U32(ctx, 31, 0x36EA00u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36E9F8u, 0x36EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA00u;
label_36ea00:
    // 0x36ea00: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36ea04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ea04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ea08: 0x0  nop
    ctx->pc = 0x36ea08u;
    // NOP
    // 0x36ea0c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36ea0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36ea10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea14: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36ea18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea1c: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36ea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36ea20: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36ea20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ea24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36ea28: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36ea28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36ea2c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36EA2Cu;
    SET_GPR_U32(ctx, 31, 0x36EA34u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36EA2Cu, 0x36EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA34u;
label_36ea34:
    // 0x36ea34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36ea38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36ea38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36ea3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea40: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x36ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36ea44: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x36ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x36ea48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36ea48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ea4c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x36ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x36ea50: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x36ea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36ea54: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36ea54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ea58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ea58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ea5c: 0x24660370  addiu       $a2, $v1, 0x370
    ctx->pc = 0x36ea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 880));
    // 0x36ea60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x36ea60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ea64: 0xc086488  jal         func_219220
    ctx->pc = 0x36EA64u;
    SET_GPR_U32(ctx, 31, 0x36EA6Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x36EA64u, 0x36EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA6Cu;
label_36ea6c:
    // 0x36ea6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ea70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ea74: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36EA74u;
    SET_GPR_U32(ctx, 31, 0x36EA7Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36EA74u, 0x36EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA7Cu;
label_36ea7c:
    // 0x36ea7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea80: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36EA80u;
    SET_GPR_U32(ctx, 31, 0x36EA88u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36EA80u, 0x36EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA88u;
label_36ea88:
    // 0x36ea88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea8c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36EA8Cu;
    SET_GPR_U32(ctx, 31, 0x36EA94u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36EA8Cu, 0x36EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA94u;
label_36ea94:
    // 0x36ea94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36ea94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ea98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36ea98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36ea9c: 0x3e00008  jr          $ra
    ctx->pc = 0x36EA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EAA4u;
}
