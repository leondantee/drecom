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

// Function: entry_0016fb88
// Address: 0x16fb88 - 0x16fd0c
void entry_0016fb88_0x16fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fb88_0x16fb88");
#endif

    ctx->pc = 0x16fb88u;

    // 0x16fb88: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x16fb88u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x16fb8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fb90: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fb94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fb98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb9c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fba0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fba4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fba8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fbac: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x16fbacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16fbb0: 0x30723fff  andi        $s2, $v1, 0x3FFF
    ctx->pc = 0x16fbb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x16fbb4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fbb8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fbbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fbc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fbc4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fbc8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fbcc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fbd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fbd4: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x16fbd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16fbd8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16fbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16fbdc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x16fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fbe0: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x16fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x16fbe4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16fbe8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16fbec: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x16fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16fbf0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x16fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x16fbf4: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x16fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x16fbf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16fbfc: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x16fbfcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x16fc00: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16fc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16fc04: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x16fc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16fc08: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x16fc08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x16fc0c: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x16fc0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x16fc10: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x16fc10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x16fc14: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x16fc14u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x16fc18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fc1c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fc20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fc24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fc28: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fc2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fc30: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fc34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fc38: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x16fc38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16fc3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16fc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16fc40: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x16fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fc44: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x16fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x16fc48: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16fc4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16fc50: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x16fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16fc54: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x16fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x16fc58: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x16fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x16fc5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16fc60: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x16fc60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x16fc64: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16fc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16fc68: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x16fc68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16fc6c: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x16fc6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x16fc70: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x16fc70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x16fc74: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x16fc74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x16fc78: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fc7c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fc80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fc84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fc88: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fc8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fc90: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fc94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fc98: 0xdc630018  ld          $v1, 0x18($v1)
    ctx->pc = 0x16fc98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16fc9c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x16fc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x16fca0: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x16fca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x16fca4: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x16fca4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16fca8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x16fca8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x16fcac: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x16fcacu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x16fcb0: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x16fcb0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x16fcb4: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x16fcb4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x16fcb8: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x16fcb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x16fcbc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x16fcbcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x16fcc0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x16fcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x16fcc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16fcc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16fcc8: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x16fcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x16fccc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16fcccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16fcd0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x16fcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x16fcd4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16fcd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16fcd8: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x16fcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x16fcdc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x16fcdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x16fce0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x16fce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x16fce4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16fce4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16fce8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x16fce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x16fcec: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x16fcecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x16fcf0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fcf4: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fcf8: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fcfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fd00: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x16fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x16fd04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16FD04u;
    {
        const bool branch_taken_0x16fd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fd04) {
            ctx->pc = 0x16FD20u;
            return;
        }
    }
    ctx->pc = 0x16FD0Cu;
}
