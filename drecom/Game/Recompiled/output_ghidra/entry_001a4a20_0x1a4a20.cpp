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

// Function: entry_001a4a20
// Address: 0x1a4a20 - 0x1a4aec
void entry_001a4a20_0x1a4a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4a20_0x1a4a20");
#endif

    switch (ctx->pc) {
        case 0x1a4aa8u: goto label_1a4aa8;
        case 0x1a4ae0u: goto label_1a4ae0;
        default: break;
    }

    ctx->pc = 0x1a4a20u;

    // 0x1a4a20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4a24: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4a24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4a28: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a4a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4a2c: 0x30a50800  andi        $a1, $a1, 0x800
    ctx->pc = 0x1a4a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x1a4a30: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1A4A30u;
    {
        const bool branch_taken_0x1a4a30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a30) {
            ctx->pc = 0x1A4B34u;
            return;
        }
    }
    ctx->pc = 0x1A4A38u;
    // 0x1a4a38: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4a3c: 0x8ca4030c  lw          $a0, 0x30C($a1)
    ctx->pc = 0x1a4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 780)));
    // 0x1a4a40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4a44: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a4a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4a48: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a4a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a4a4c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a4a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4a50: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4a54: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1a4a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4a58: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1a4a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1a4a5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4a60: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A4A60u;
    {
        const bool branch_taken_0x1a4a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a60) {
            ctx->pc = 0x1A4AECu;
            return;
        }
    }
    ctx->pc = 0x1A4A68u;
    // 0x1a4a68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4a6c: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a4a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a4a70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4a74: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a4a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4a78: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a4a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a4a7c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a4a80: 0x2483cca0  addiu       $v1, $a0, -0x3360
    ctx->pc = 0x1a4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a4a84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a4a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a4a88: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x1a4a88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a4a8c: 0x72408e28  paddub      $s1, $s2, $zero
    ctx->pc = 0x1a4a8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a4a90: 0x26230018  addiu       $v1, $s1, 0x18
    ctx->pc = 0x1a4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1a4a94: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a4a94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a4a98: 0x30653fff  andi        $a1, $v1, 0x3FFF
    ctx->pc = 0x1a4a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1a4a9c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1a4a9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a4aa0: 0xc05e3d4  jal         func_178F50
    ctx->pc = 0x1A4AA0u;
    SET_GPR_U32(ctx, 31, 0x1A4AA8u);
    ctx->pc = 0x178F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F50u, 0x1A4AA0u, 0x1A4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AA8u;
label_1a4aa8:
    // 0x1a4aa8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a4aa8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a4aac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4ab0: 0x8c83030c  lw          $v1, 0x30C($a0)
    ctx->pc = 0x1a4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 780)));
    // 0x1a4ab4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4ab8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a4ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a4abc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a4ac0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4ac4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4ac8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a4ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4acc: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1a4accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1a4ad0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1a4ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4ad4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1a4ad4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a4ad8: 0xc05e4ac  jal         func_1792B0
    ctx->pc = 0x1A4AD8u;
    SET_GPR_U32(ctx, 31, 0x1A4AE0u);
    ctx->pc = 0x1792B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1792B0u, 0x1A4AD8u, 0x1A4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AE0u;
label_1a4ae0:
    // 0x1a4ae0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a4ae0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a4ae4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A4AE4u;
    {
        const bool branch_taken_0x1a4ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ae4) {
            ctx->pc = 0x1A4B34u;
            return;
        }
    }
    ctx->pc = 0x1A4AECu;
}
