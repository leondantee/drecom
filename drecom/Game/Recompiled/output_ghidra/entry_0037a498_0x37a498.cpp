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

// Function: entry_0037a498
// Address: 0x37a498 - 0x37a5b0
void entry_0037a498_0x37a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a498_0x37a498");
#endif

    switch (ctx->pc) {
        case 0x37a51cu: goto label_37a51c;
        case 0x37a594u: goto label_37a594;
        default: break;
    }

    ctx->pc = 0x37a498u;

    // 0x37a498: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x37a498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x37a49c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37a4a0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x37a4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37a4a4: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x37a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x37a4a8: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x37a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37a4ac: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37a4b0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37a4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37a4b4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x37a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x37a4b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x37a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x37a4bc: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x37a4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37a4c0: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x37a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37a4c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37a4c8: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x37a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x37a4cc: 0x24447000  addiu       $a0, $v0, 0x7000
    ctx->pc = 0x37a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37a4d0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x37a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x37a4d4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x37a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37a4d8: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x37a4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x37a4dc: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x37a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x37a4e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x37a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37a4e4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x37a4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a4e8: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x37a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x37a4ec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x37a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x37a4f0: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x37a4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37a4f4: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x37a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37a4f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37a4fc: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x37a4fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x37a500: 0x26c6e640  addiu       $a2, $s6, -0x19C0
    ctx->pc = 0x37a500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960704));
    // 0x37a504: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x37a504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x37a508: 0x27c2001c  addiu       $v0, $fp, 0x1C
    ctx->pc = 0x37a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37a50c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37a50cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a510: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37a510u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37a514: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37A514u;
    SET_GPR_U32(ctx, 31, 0x37A51Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37A514u, 0x37A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A51Cu;
label_37a51c:
    // 0x37a51c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37a520: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x37a520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x37a524: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37a524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37a528: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x37a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x37a52c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x37a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x37a530: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37a534: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x37a534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37a538: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x37a538u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x37a53c: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x37a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x37a540: 0x3447000a  ori         $a3, $v0, 0xA
    ctx->pc = 0x37a540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x37a544: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37a548: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x37a548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37a54c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x37a54cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x37a550: 0x613b8  dsll        $v0, $a2, 14
    ctx->pc = 0x37a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 14);
    // 0x37a554: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x37a554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x37a558: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37a55c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37a55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37a560: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37a560u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37a564: 0x33e38  dsll        $a3, $v1, 24
    ctx->pc = 0x37a564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 24);
    // 0x37a568: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x37a568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x37a56c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37a570: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37a570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37a574: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37a574u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37a578: 0x220bc  dsll32      $a0, $v0, 2
    ctx->pc = 0x37a578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 2));
    // 0x37a57c: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x37a57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x37a580: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37a580u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37a584: 0x27c4001c  addiu       $a0, $fp, 0x1C
    ctx->pc = 0x37a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37a588: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37a588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37a58c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37A58Cu;
    SET_GPR_U32(ctx, 31, 0x37A594u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37A58Cu, 0x37A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A594u;
label_37a594:
    // 0x37a594: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x37a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x37a598: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x37a598u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a59c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x37a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37a5a0: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x37a5a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37a5a4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x37a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37a5a8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x37a5a8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a5ac: 0x0  nop
    ctx->pc = 0x37a5acu;
    // NOP
    ctx->pc = 0x37a5b0u;
}
