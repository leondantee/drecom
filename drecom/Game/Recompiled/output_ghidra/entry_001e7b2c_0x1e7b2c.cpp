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

// Function: entry_001e7b2c
// Address: 0x1e7b2c - 0x1e7c70
void entry_001e7b2c_0x1e7b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7b2c_0x1e7b2c");
#endif

    switch (ctx->pc) {
        case 0x1e7b50u: goto label_1e7b50;
        case 0x1e7b78u: goto label_1e7b78;
        case 0x1e7ba0u: goto label_1e7ba0;
        case 0x1e7bc8u: goto label_1e7bc8;
        case 0x1e7becu: goto label_1e7bec;
        case 0x1e7c10u: goto label_1e7c10;
        default: break;
    }

    ctx->pc = 0x1e7b2cu;

    // 0x1e7b2c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e7b2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7b30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7b34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7b38: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e7b3c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1e7b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7b40: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e7b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e7b44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7b44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7b48: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7B48u;
    SET_GPR_U32(ctx, 31, 0x1E7B50u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7B50u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7B50u) { return; }
    ctx->pc = 0x1E7B50u;
label_1e7b50:
    // 0x1e7b50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7b50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7b54: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e7b54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e7b58: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e7b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7b5c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1e7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e7b60: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e7b64: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1e7b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7b68: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e7b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e7b6c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7b6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7b70: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7B70u;
    SET_GPR_U32(ctx, 31, 0x1E7B78u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7B78u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7B78u) { return; }
    ctx->pc = 0x1E7B78u;
label_1e7b78:
    // 0x1e7b78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7b78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7b7c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e7b7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7b80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7b84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7b88: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e7b8c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e7b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7b90: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e7b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e7b94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7b94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7b98: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7B98u;
    SET_GPR_U32(ctx, 31, 0x1E7BA0u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7BA0u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7BA0u) { return; }
    ctx->pc = 0x1E7BA0u;
label_1e7ba0:
    // 0x1e7ba0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e7ba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7ba4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e7ba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7ba8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7bac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7bb0: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e7bb4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1e7bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e7bb8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e7bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7bbc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7bbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7bc0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7BC0u;
    SET_GPR_U32(ctx, 31, 0x1E7BC8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7BC8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7BC8u) { return; }
    ctx->pc = 0x1E7BC8u;
label_1e7bc8:
    // 0x1e7bc8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1e7bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e7bcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e7bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e7bd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e7bd4: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e7bd8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1e7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e7bdc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e7bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7be0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7be0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7be4: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7BE4u;
    SET_GPR_U32(ctx, 31, 0x1E7BECu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7BECu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7BECu) { return; }
    ctx->pc = 0x1E7BECu;
label_1e7bec:
    // 0x1e7bec: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1e7becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7bf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e7bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e7bf4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e7bf8: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e7bfc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1e7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7c00: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7c04: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7c04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7c08: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7C08u;
    SET_GPR_U32(ctx, 31, 0x1E7C10u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7C10u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7C10u) { return; }
    ctx->pc = 0x1E7C10u;
label_1e7c10:
    // 0x1e7c10: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7c14: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1e7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7c18: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x1e7c18u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c1c: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7c20: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x1e7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7c24: 0x62a823  subu        $s5, $v1, $v0
    ctx->pc = 0x1e7c24u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c28: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7c2c: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1e7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7c30: 0x62b023  subu        $s6, $v1, $v0
    ctx->pc = 0x1e7c30u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c34: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e7c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7c38: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x1e7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7c3c: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x1e7c3cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c40: 0x2b61818  mult        $v1, $s5, $s6
    ctx->pc = 0x1e7c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e7c44: 0x2771018  mult        $v0, $s3, $s7
    ctx->pc = 0x1e7c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e7c48: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x1e7c48u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c4c: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7C4Cu;
    {
        const bool branch_taken_0x1e7c4c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1e7c4c) {
            ctx->pc = 0x1E7C70u;
            return;
        }
    }
    ctx->pc = 0x1E7C54u;
    // 0x1e7c54: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7c58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e7c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7c5c: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1e7c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7c60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e7c64: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e7c64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1e7c68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7C68u;
    {
        const bool branch_taken_0x1e7c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c68) {
            ctx->pc = 0x1E7C88u;
            return;
        }
    }
    ctx->pc = 0x1E7C70u;
}
