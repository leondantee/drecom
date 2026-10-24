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

// Function: entry_0017a288
// Address: 0x17a288 - 0x17a3d8
void entry_0017a288_0x17a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a288_0x17a288");
#endif

    switch (ctx->pc) {
        case 0x17a370u: goto label_17a370;
        default: break;
    }

    ctx->pc = 0x17a288u;

    // 0x17a288: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x17a288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17a28c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17a28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a290: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x17a290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x17a294: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a298: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x17a298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17a29c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17a2a0: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x17a2a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x17a2a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a2a8: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x17a2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a2ac: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x17a2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x17a2b0: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x17a2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a2b4: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x17a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x17a2b8: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x17a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x17a2bc: 0x93a200ab  lbu         $v0, 0xAB($sp)
    ctx->pc = 0x17a2bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 171)));
    // 0x17a2c0: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x17a2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x17a2c4: 0x21f3e  dsrl32      $v1, $v0, 28
    ctx->pc = 0x17a2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x17a2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a2cc: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x17a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x17a2d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a2d4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x17a2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a2d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a2dc: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x17a2dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a2e0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x17a2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x17a2e4: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x17a2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x17a2e8: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x17a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x17a2ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a2f0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x17a2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a2f4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x17a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x17a2f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17a2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a2fc: 0x97a200a8  lhu         $v0, 0xA8($sp)
    ctx->pc = 0x17a2fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a300: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x17a300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x17a304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a308: 0x97a400a8  lhu         $a0, 0xA8($sp)
    ctx->pc = 0x17a308u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a30c: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x17a30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x17a310: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x17a310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x17a314: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17a314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17a318: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a31c: 0xa7a200a8  sh          $v0, 0xA8($sp)
    ctx->pc = 0x17a31cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a320: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17a324: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17a324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a328: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17a328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17a32c: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x17a32cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a330: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x17a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x17a334: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x17a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x17a338: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x17a338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x17a33c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a340: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x17a340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a344: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17a348: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17a348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a34c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17a34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17a350: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x17a350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a354: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x17a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x17a358: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x17a358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x17a35c: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x17a35cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x17a360: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17a360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a364: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x17a364u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x17a368: 0xc05e990  jal         func_17A640
    ctx->pc = 0x17A368u;
    SET_GPR_U32(ctx, 31, 0x17A370u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x17A368u, 0x17A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A370u;
label_17a370:
    // 0x17a370: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a374: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a378: 0xdfa300a8  ld          $v1, 0xA8($sp)
    ctx->pc = 0x17a378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a37c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x17a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x17a380: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x17a380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x17a384: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x17a384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x17a388: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x17a388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x17a38c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x17a38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17a390: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x17a390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17a394: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x17a394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x17a398: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x17a398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x17a39c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17a39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17a3a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17a3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17a3a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17a3a8: 0xffa200a8  sd          $v0, 0xA8($sp)
    ctx->pc = 0x17a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 2));
    // 0x17a3ac: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17a3b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17a3b4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x17a3b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17a3b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a3bc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17A3BCu;
    {
        const bool branch_taken_0x17a3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a3bc) {
            ctx->pc = 0x17A400u;
            return;
        }
    }
    ctx->pc = 0x17A3C4u;
    // 0x17a3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a3c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A3C8u;
    {
        const bool branch_taken_0x17a3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a3c8) {
            ctx->pc = 0x17A3D8u;
            return;
        }
    }
    ctx->pc = 0x17A3D0u;
    // 0x17a3d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17A3D0u;
    {
        const bool branch_taken_0x17a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a3d0) {
            ctx->pc = 0x17A420u;
            return;
        }
    }
    ctx->pc = 0x17A3D8u;
}
