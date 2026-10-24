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

// Function: entry_0016ff7c
// Address: 0x16ff7c - 0x1700ec
void entry_0016ff7c_0x16ff7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ff7c_0x16ff7c");
#endif

    ctx->pc = 0x16ff7cu;

    // 0x16ff7c: 0x72a0a628  paddub      $s4, $s5, $zero
    ctx->pc = 0x16ff7cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x16ff80: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ff84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ff88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ff8c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16ff90: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16ff94: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16ff98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ff9c: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x16ff9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16ffa0: 0x30713fff  andi        $s1, $v1, 0x3FFF
    ctx->pc = 0x16ffa0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x16ffa4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ffa8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ffac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ffb0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16ffb4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16ffb8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16ffbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ffc0: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x16ffc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ffc4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x16ffc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ffc8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ffcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ffd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ffd4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16ffd8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16ffdc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16ffe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ffe4: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x16ffe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16ffe8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16ffe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ffec: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x16ffecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16fff0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x16fff0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x16fff4: 0x2831807  srav        $v1, $v1, $s4
    ctx->pc = 0x16fff4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x16fff8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x16fff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x16fffc: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x16fffcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x170000: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x170000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170004: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x170004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170008: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17000c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x17000cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x170010: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x170010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x170014: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x170014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x170018: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17001c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x17001cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x170020: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x170020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x170024: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x170024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170028: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x170028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17002c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170030: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x170030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x170034: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x170034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x170038: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x170038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x17003c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170040: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x170040u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x170044: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x170044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x170048: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x170048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17004c: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x17004cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x170050: 0x2831807  srav        $v1, $v1, $s4
    ctx->pc = 0x170050u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x170054: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x170054u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x170058: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x170058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17005c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17005cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170060: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170064: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x170064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x170068: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x170068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17006c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x17006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x170070: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170074: 0xdc630018  ld          $v1, 0x18($v1)
    ctx->pc = 0x170074u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x170078: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x170078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x17007c: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x17007cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x170080: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x170080u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x170084: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x170084u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x170088: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x170088u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x17008c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x17008cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x170090: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x170090u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x170094: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x170094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x170098: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x170098u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x17009c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x17009cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1700a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1700a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1700a4: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1700a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1700a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1700a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1700ac: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1700acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1700b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1700b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1700b4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x1700b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x1700b8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1700b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1700bc: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1700bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1700c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1700c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1700c4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1700c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1700c8: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1700c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1700cc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1700ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1700d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1700d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1700d4: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1700d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1700d8: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x1700d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x1700dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1700dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1700e0: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1700e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1700e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1700E4u;
    {
        const bool branch_taken_0x1700e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1700e4) {
            ctx->pc = 0x170104u;
            return;
        }
    }
    ctx->pc = 0x1700ECu;
}
