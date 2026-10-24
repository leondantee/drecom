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

// Function: caseD_3
// Address: 0x1412a0 - 0x1413f4
void caseD_3_0x1412a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1412a0");
#endif

    switch (ctx->pc) {
        case 0x141324u: goto label_141324;
        case 0x141368u: goto label_141368;
        case 0x1413a0u: goto label_1413a0;
        case 0x1413e0u: goto label_1413e0;
        default: break;
    }

    ctx->pc = 0x1412a0u;

    // 0x1412a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1412a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1412a4: 0x245491d0  addiu       $s4, $v0, -0x6E30
    ctx->pc = 0x1412a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939088));
    // 0x1412a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1412a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1412ac: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1412acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91D0u, _value); } while (0);
    // 0x1412b0: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1412b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1412b4: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x1412b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1412b8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1412b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91D4u, _value); } while (0);
    // 0x1412bc: 0x3c028005  lui         $v0, 0x8005
    ctx->pc = 0x1412bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32773 << 16));
    // 0x1412c0: 0x34430505  ori         $v1, $v0, 0x505
    ctx->pc = 0x1412c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1285);
    // 0x1412c4: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x1412c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x1412c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1412c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E91D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91D8u, _value); } while (0);
    // 0x1412cc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1412ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E91D4u));
    // 0x1412d0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1412d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1412d4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1412d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91D4u, _value); } while (0);
    // 0x1412d8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1412dc: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1412dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1412e0: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x1412e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x1412e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1412e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E91DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91DCu, _value); } while (0);
    // 0x1412e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1412e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1412ec: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x1412ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1412f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1412f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E91E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91E0u, _value); } while (0);
    // 0x1412f4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1412f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1412f8: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1412f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1412fc: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x1412fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x141300: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141300u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E91E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91E4u, _value); } while (0);
    // 0x141304: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x141304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x141308: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x141308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x14130c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14130cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E91E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91E8u, _value); } while (0);
    // 0x141310: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x141314: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x141314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x141318: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x141318u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14131c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x14131Cu;
    SET_GPR_U32(ctx, 31, 0x141324u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x14131Cu, 0x141324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141324u;
label_141324:
    // 0x141324: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x141328: 0x245391c0  addiu       $s3, $v0, -0x6E40
    ctx->pc = 0x141328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939072));
    // 0x14132c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x141330: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x141330u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91C0u, _value); } while (0);
    // 0x141334: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x141334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x141338: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x141338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x14133c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x14133cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91C4u, _value); } while (0);
    // 0x141340: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x141340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x141344: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x141344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141348: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x141348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x14134c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x141350: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x141350u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x141354: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x141358: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x141358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x14135c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x14135cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x141360: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x141360u;
    SET_GPR_U32(ctx, 31, 0x141368u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x141360u, 0x141368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141368u;
label_141368:
    // 0x141368: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x141368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14136c: 0x245391b0  addiu       $s3, $v0, -0x6E50
    ctx->pc = 0x14136cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
    // 0x141370: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x141374: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x141374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91B0u, _value); } while (0);
    // 0x141378: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x141378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14137c: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x14137cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x141380: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x141380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91B4u, _value); } while (0);
    // 0x141384: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x141384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x141388: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x141388u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91B8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3E91B8u, _value); } while (0);
    // 0x14138c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x141390: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x141390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x141394: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x141394u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x141398: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x141398u;
    SET_GPR_U32(ctx, 31, 0x1413A0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x141398u, 0x1413A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413A0u;
label_1413a0:
    // 0x1413a0: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x1413a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1413a4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1413a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1413a8: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x1413a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1413ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1413acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1413b0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1413b4: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1413B4u;
    {
        const bool branch_taken_0x1413b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1413b4) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x1413BCu;
    // 0x1413bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1413bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1413c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1413c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1413c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1413c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1413c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1413cc: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1413d0: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1413d4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1413d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1413d8: 0xc059190  jal         func_164640
    ctx->pc = 0x1413D8u;
    SET_GPR_U32(ctx, 31, 0x1413E0u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1413D8u, 0x1413E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413E0u;
label_1413e0:
    // 0x1413e0: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1413e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1413e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1413e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1413e8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1413e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1413ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1413ECu;
    {
        const bool branch_taken_0x1413ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1413ec) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x1413F4u;
}
