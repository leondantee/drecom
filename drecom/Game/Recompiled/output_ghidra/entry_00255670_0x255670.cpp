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

// Function: entry_00255670
// Address: 0x255670 - 0x255968
void entry_00255670_0x255670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255670_0x255670");
#endif

    ctx->pc = 0x255670u;

    // 0x255670: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x255670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x255674: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x255674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x255678: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x255678u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
    // 0x25567c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x25567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x255680: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x255680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255684: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255688: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25568c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x25568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255690: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x255690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255694: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x255694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x255698: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x255698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25569c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25569cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2556a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2556a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2556a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2556a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2556a8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2556a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2556ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2556acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2556b0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2556b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2556b4: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x2556b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x2556b8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2556b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2556bc: 0x34620105  ori         $v0, $v1, 0x105
    ctx->pc = 0x2556bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)261);
    // 0x2556c0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2556c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2556c4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2556c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2556c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2556c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2556cc: 0x34438004  ori         $v1, $v0, 0x8004
    ctx->pc = 0x2556ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x2556d0: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x2556d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x2556d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2556d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2556d8: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x2556d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x2556dc: 0x16113c  dsll32      $v0, $s6, 4
    ctx->pc = 0x2556dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 4));
    // 0x2556e0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2556e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2556e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2556e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2556e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2556e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2556ec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2556ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2556f0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2556f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2556f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2556f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2556f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2556f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2556fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2556fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255700: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x255700u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x255704: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x255704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x255708: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25570c: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x25570cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x255710: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x255710u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x255714: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x255714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x255718: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x255718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x25571c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25571cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255720: 0x34428005  ori         $v0, $v0, 0x8005
    ctx->pc = 0x255720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x255724: 0x3c056800  lui         $a1, 0x6800
    ctx->pc = 0x255724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26624 << 16));
    // 0x255728: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x255728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25572c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x25572cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x255730: 0x17193c  dsll32      $v1, $s7, 4
    ctx->pc = 0x255730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 4));
    // 0x255734: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x255734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x255738: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x255738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x25573c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x25573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255740: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x255740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255744: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x255744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x255748: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25574c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x25574cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x255750: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255754: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x255754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255758: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x255758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25575c: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x25575cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x255760: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x255760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x255764: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x255764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x255768: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x255768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x25576c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x25576cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x255770: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x255770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255774: 0x34438006  ori         $v1, $v0, 0x8006
    ctx->pc = 0x255774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32774);
    // 0x255778: 0x3c026500  lui         $v0, 0x6500
    ctx->pc = 0x255778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
    // 0x25577c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25577cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255780: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x255780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x255784: 0x1e113c  dsll32      $v0, $fp, 4
    ctx->pc = 0x255784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 4));
    // 0x255788: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x25578c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255790: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255794: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x255794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255798: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x255798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25579c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x25579cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2557a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2557a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2557a4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x2557a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x2557a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2557a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2557ac: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2557acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2557b0: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x2557b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x2557b4: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x2557b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x2557b8: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x2557b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x2557bc: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2557bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2557c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2557c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2557c4: 0x34648007  ori         $a0, $v1, 0x8007
    ctx->pc = 0x2557c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32775);
    // 0x2557c8: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x2557c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
    // 0x2557cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2557ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2557d0: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x2557d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2557d4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x2557d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x2557d8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2557d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2557dc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2557dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2557e0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2557e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2557e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2557e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2557e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2557e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2557ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2557ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2557f0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2557f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2557f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2557f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2557f8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2557f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2557fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2557fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255800: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x255800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x255804: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x255804u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x255808: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x255808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x25580c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x25580cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x255810: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x255810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255814: 0x34438008  ori         $v1, $v0, 0x8008
    ctx->pc = 0x255814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x255818: 0x3c026f00  lui         $v0, 0x6F00
    ctx->pc = 0x255818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28416 << 16));
    // 0x25581c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255820: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x255820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x255824: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x255824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x255828: 0x3113c  dsll32      $v0, $v1, 4
    ctx->pc = 0x255828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 4));
    // 0x25582c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x25582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255830: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x255830u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255834: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x255834u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x255838: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x255838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x25583c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x25583cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x255840: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x255840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255844: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x255844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x255848: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x255848u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x25584c: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x25584cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x255850: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x255850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x255854: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x255854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x255858: 0x34620404  ori         $v0, $v1, 0x404
    ctx->pc = 0x255858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x25585c: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x25585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x255860: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x255860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x255864: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x255864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x255868: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x255868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x25586c: 0x26d60240  addiu       $s6, $s6, 0x240
    ctx->pc = 0x25586cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 576));
    // 0x255870: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x255870u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x255874: 0x27de00c0  addiu       $fp, $fp, 0xC0
    ctx->pc = 0x255874u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    // 0x255878: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x255878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25587c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x25587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x255880: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x255880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x255884: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x255884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x255888: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x255888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x25588c: 0x1e40fef6  bgtz        $s2, . + 4 + (-0x10A << 2)
    ctx->pc = 0x25588Cu;
    {
        const bool branch_taken_0x25588c = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x25588c) {
            ctx->pc = 0x255468u;
            return;
        }
    }
    ctx->pc = 0x255894u;
    // 0x255894: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x255894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255898: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x255898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x25589c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x25589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2558a0: 0x266200c0  addiu       $v0, $s3, 0xC0
    ctx->pc = 0x2558a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x2558a4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2558a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2558a8: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x2558a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x2558ac: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2558acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2558b0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2558b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2558b4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2558b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2558b8: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x2558b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2558bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2558bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2558c0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2558c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2558c4: 0x1c40fe96  bgtz        $v0, . + 4 + (-0x16A << 2)
    ctx->pc = 0x2558C4u;
    {
        const bool branch_taken_0x2558c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2558c4) {
            ctx->pc = 0x255320u;
            return;
        }
    }
    ctx->pc = 0x2558CCu;
    // 0x2558cc: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2558d0: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x2558d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2558d4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2558d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2558d8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2558d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2558dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2558dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2558e0: 0x8fb600b8  lw          $s6, 0xB8($sp)
    ctx->pc = 0x2558e0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2558e4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2558e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2558e8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2558e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2558ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2558ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2558f0: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x2558f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x2558f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2558f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2558f8: 0x24570090  addiu       $s7, $v0, 0x90
    ctx->pc = 0x2558f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2558fc: 0xafb700b8  sw          $s7, 0xB8($sp)
    ctx->pc = 0x2558fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 23));
    // 0x255900: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x255904: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x255904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x255908: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x255908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x25590c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x25590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255910: 0x62f02b  sltu        $fp, $v1, $v0
    ctx->pc = 0x255910u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x255914: 0x17c0fe02  bnez        $fp, . + 4 + (-0x1FE << 2)
    ctx->pc = 0x255914u;
    {
        const bool branch_taken_0x255914 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x255914) {
            ctx->pc = 0x255120u;
            return;
        }
    }
    ctx->pc = 0x25591Cu;
    // 0x25591c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x25591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255920: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x255920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255924: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x255924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x255928: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25592c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25592cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255930: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x255930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x255934: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x255934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x255938: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x255938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x25593c: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x25593cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255940: 0x26b20040  addiu       $s2, $s5, 0x40
    ctx->pc = 0x255940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x255944: 0xafb200f8  sw          $s2, 0xF8($sp)
    ctx->pc = 0x255944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 18));
    // 0x255948: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x255948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x25594c: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x25594cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x255950: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x255950u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x255954: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x255954u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x255958: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x255958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25595c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255960: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x255960u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x255964: 0x0  nop
    ctx->pc = 0x255964u;
    // NOP
    ctx->pc = 0x255968u;
}
