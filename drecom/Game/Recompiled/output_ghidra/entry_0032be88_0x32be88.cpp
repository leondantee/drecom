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

// Function: entry_0032be88
// Address: 0x32be88 - 0x32c030
void entry_0032be88_0x32be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032be88_0x32be88");
#endif

    switch (ctx->pc) {
        case 0x32bf54u: goto label_32bf54;
        case 0x32bfd4u: goto label_32bfd4;
        default: break;
    }

    ctx->pc = 0x32be88u;

    // 0x32be88: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x32be88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x32be8c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x32be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32be90: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x32be90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32be94: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x32be94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x32be98: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x32be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32be9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bea0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x32bea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32bea4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x32bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x32bea8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32beac: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x32beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x32beb0: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x32beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x32beb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32beb8: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x32beb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x32bebc: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x32bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32bec0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32bec4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32bec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32bec8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x32bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32becc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32beccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32bed0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32bed4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bed8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32bed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bedc: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x32bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x32bee0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32bee4: 0x341efff9  ori         $fp, $zero, 0xFFF9
    ctx->pc = 0x32bee4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x32bee8: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x32bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x32beec: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x32beecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x32bef0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x32bef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32bef4: 0x96170002  lhu         $s7, 0x2($s0)
    ctx->pc = 0x32bef4u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x32bef8: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x32bef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x32befc: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x32befcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32bf00: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x32bf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x32bf04: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x32bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x32bf08: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x32bf08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x32bf0c: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x32bf0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32bf10: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x32bf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x32bf14: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x32bf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x32bf18: 0x3c07fff8  lui         $a3, 0xFFF8
    ctx->pc = 0x32bf18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65528 << 16));
    // 0x32bf1c: 0x34e7001f  ori         $a3, $a3, 0x1F
    ctx->pc = 0x32bf1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)31);
    // 0x32bf20: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x32bf20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x32bf24: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x32bf24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32bf28: 0x4ac38  dsll        $s5, $a0, 16
    ctx->pc = 0x32bf28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << 16);
    // 0x32bf2c: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x32bf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x32bf30: 0x872825  or          $a1, $a0, $a3
    ctx->pc = 0x32bf30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x32bf34: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x32bf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x32bf38: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32bf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bf3c: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x32bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x32bf40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32bf44: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32bf48: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x32bf48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x32bf4c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32BF4Cu;
    SET_GPR_U32(ctx, 31, 0x32BF54u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32BF4Cu, 0x32BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF54u;
label_32bf54:
    // 0x32bf54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32bf58: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32bf5c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32bf60: 0x34621009  ori         $v0, $v1, 0x1009
    ctx->pc = 0x32bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x32bf64: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32bf68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32bf6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32bf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32bf70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32bf70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32bf74: 0x22138  dsll        $a0, $v0, 4
    ctx->pc = 0x32bf74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 4);
    // 0x32bf78: 0x3483000a  ori         $v1, $a0, 0xA
    ctx->pc = 0x32bf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x32bf7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x32bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32bf80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32bf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32bf84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32bf84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32bf88: 0x223b8  dsll        $a0, $v0, 14
    ctx->pc = 0x32bf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 14);
    // 0x32bf8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32bf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32bf90: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32bf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32bf94: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x32bf94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x32bf98: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x32bf98u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x32bf9c: 0x61638  dsll        $v0, $a2, 24
    ctx->pc = 0x32bf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 24);
    // 0x32bfa0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32bfa4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x32bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32bfa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32bfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32bfac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32bfacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32bfb0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x32bfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x32bfb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32bfb8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32bfbc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32bfc0: 0x24431a14  addiu       $v1, $v0, 0x1A14
    ctx->pc = 0x32bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32bfc4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32bfc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32bfc8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32bfc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32bfcc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32BFCCu;
    SET_GPR_U32(ctx, 31, 0x32BFD4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32BFCCu, 0x32BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFD4u;
label_32bfd4:
    // 0x32bfd4: 0x265e0010  addiu       $fp, $s2, 0x10
    ctx->pc = 0x32bfd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32bfd8: 0x73c09628  paddub      $s2, $fp, $zero
    ctx->pc = 0x32bfd8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x32bfdc: 0x2623002c  addiu       $v1, $s1, 0x2C
    ctx->pc = 0x32bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x32bfe0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x32bfe0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32bfe4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32bfe8: 0x24570028  addiu       $s7, $v0, 0x28
    ctx->pc = 0x32bfe8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x32bfec: 0xafb700b0  sw          $s7, 0xB0($sp)
    ctx->pc = 0x32bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 23));
    // 0x32bff0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32bff4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32bff8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32bffc: 0x34631043  ori         $v1, $v1, 0x1043
    ctx->pc = 0x32bffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x32c000: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x32c000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x32c004: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x32c004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32c008: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c00c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32C00Cu;
    {
        const bool branch_taken_0x32c00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c00c) {
            ctx->pc = 0x32C04Cu;
            return;
        }
    }
    ctx->pc = 0x32C014u;
    // 0x32c014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c018: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32C018u;
    {
        const bool branch_taken_0x32c018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c018) {
            ctx->pc = 0x32C04Cu;
            return;
        }
    }
    ctx->pc = 0x32C020u;
    // 0x32c020: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C020u;
    {
        const bool branch_taken_0x32c020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c020) {
            ctx->pc = 0x32C030u;
            return;
        }
    }
    ctx->pc = 0x32C028u;
    // 0x32c028: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32C028u;
    {
        const bool branch_taken_0x32c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c028) {
            ctx->pc = 0x32C058u;
            return;
        }
    }
    ctx->pc = 0x32C030u;
}
