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

// Function: entry_0028d270
// Address: 0x28d270 - 0x28d3ec
void entry_0028d270_0x28d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d270_0x28d270");
#endif

    switch (ctx->pc) {
        case 0x28d288u: goto label_28d288;
        case 0x28d29cu: goto label_28d29c;
        case 0x28d2b4u: goto label_28d2b4;
        case 0x28d2c4u: goto label_28d2c4;
        case 0x28d2d8u: goto label_28d2d8;
        case 0x28d2ecu: goto label_28d2ec;
        case 0x28d38cu: goto label_28d38c;
        case 0x28d3e4u: goto label_28d3e4;
        default: break;
    }

    ctx->pc = 0x28d270u;

    // 0x28d270: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x28d270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28d274: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x28d274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x28d278: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d27c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28d27cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28d280: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D280u;
    SET_GPR_U32(ctx, 31, 0x28D288u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D280u, 0x28D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D288u;
label_28d288:
    // 0x28d288: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d288u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d28c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d290: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28d290u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28d294: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D294u;
    SET_GPR_U32(ctx, 31, 0x28D29Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D294u, 0x28D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D29Cu;
label_28d29c:
    // 0x28d29c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28d29cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2a0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x28d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d2a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28d2a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2a8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x28d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28d2ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D2ACu;
    SET_GPR_U32(ctx, 31, 0x28D2B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D2ACu, 0x28D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2B4u;
label_28d2b4:
    // 0x28d2b4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d2b8: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x28d2b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x28d2bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D2BCu;
    SET_GPR_U32(ctx, 31, 0x28D2C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D2BCu, 0x28D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2C4u;
label_28d2c4:
    // 0x28d2c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d2c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2c8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d2cc: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x28d2ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x28d2d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D2D0u;
    SET_GPR_U32(ctx, 31, 0x28D2D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D2D0u, 0x28D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2D8u;
label_28d2d8:
    // 0x28d2d8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28d2d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2dc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d2e0: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x28d2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28d2e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D2E4u;
    SET_GPR_U32(ctx, 31, 0x28D2ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D2E4u, 0x28D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2ECu;
label_28d2ec:
    // 0x28d2ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d2ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2f0: 0x8e04685c  lw          $a0, 0x685C($s0)
    ctx->pc = 0x28d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28d2f4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x28d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x28d2f8: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x28D2F8u;
    {
        const bool branch_taken_0x28d2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d2f8) {
            ctx->pc = 0x28D430u;
            return;
        }
    }
    ctx->pc = 0x28D300u;
    // 0x28d300: 0x92046624  lbu         $a0, 0x6624($s0)
    ctx->pc = 0x28d300u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d304: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x28d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28d308: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28d308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d30c: 0x14440037  bne         $v0, $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x28D30Cu;
    {
        const bool branch_taken_0x28d30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x28d30c) {
            ctx->pc = 0x28D3ECu;
            return;
        }
    }
    ctx->pc = 0x28D314u;
    // 0x28d314: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28d314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28d318: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28d318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28d31c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28d31cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28d320: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28d320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28d324: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28d324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28d328: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28d328u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28d32c: 0xa2035de9  sb          $v1, 0x5DE9($s0)
    ctx->pc = 0x28d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24041), (uint8_t)GPR_U32(ctx, 3));
    // 0x28d330: 0x26150520  addiu       $s5, $s0, 0x520
    ctx->pc = 0x28d330u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x28d334: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x28d334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28d338: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28d338u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d33c: 0x82025de9  lb          $v0, 0x5DE9($s0)
    ctx->pc = 0x28d33cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
    // 0x28d340: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28d344: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28d344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28d348: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d34c: 0xac222998  sw          $v0, 0x2998($at)
    ctx->pc = 0x28d34cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622998u, _value); } while (0);
    // 0x28d350: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d354: 0x8c222998  lw          $v0, 0x2998($at)
    ctx->pc = 0x28d354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622998u));
    // 0x28d358: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28d358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28d35c: 0x34820087  ori         $v0, $a0, 0x87
    ctx->pc = 0x28d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)135);
    // 0x28d360: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d364: 0xac2229a0  sw          $v0, 0x29A0($at)
    ctx->pc = 0x28d364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6229A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6229A0u, _value); } while (0);
    // 0x28d368: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x28d368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28d36c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d370: 0x8c2329a0  lw          $v1, 0x29A0($at)
    ctx->pc = 0x28d370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6229A0u));
    // 0x28d374: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28d374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d378: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x28d378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x28d37c: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x28d37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x28d380: 0x24070081  addiu       $a3, $zero, 0x81
    ctx->pc = 0x28d380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x28d384: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28D384u;
    SET_GPR_U32(ctx, 31, 0x28D38Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28D384u, 0x28D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D38Cu;
label_28d38c:
    // 0x28d38c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d38cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d390: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x28d390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x28d394: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28d394u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28d398: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x28d398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28d39c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28d3a0: 0x10a30061  beq         $a1, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x28D3A0u;
    {
        const bool branch_taken_0x28d3a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x28d3a0) {
            ctx->pc = 0x28D528u;
            return;
        }
    }
    ctx->pc = 0x28D3A8u;
    // 0x28d3a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d3ac: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28d3acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28d3b0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28d3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28d3b4: 0xac2062e0  sw          $zero, 0x62E0($at)
    ctx->pc = 0x28d3b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28d3b8: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28d3bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d3c0: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x28d3c4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d3c8: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28d3c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28d3cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d3ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d3d0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x28d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28d3d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28d3d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d3d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28d3d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d3dc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28D3DCu;
    SET_GPR_U32(ctx, 31, 0x28D3E4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28D3DCu, 0x28D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3E4u;
label_28d3e4:
    // 0x28d3e4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x28D3E4u;
    {
        const bool branch_taken_0x28d3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3e4) {
            ctx->pc = 0x28D528u;
            return;
        }
    }
    ctx->pc = 0x28D3ECu;
}
