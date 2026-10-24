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

// Function: entry_00256030
// Address: 0x256030 - 0x256328
void entry_00256030_0x256030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256030_0x256030");
#endif

    ctx->pc = 0x256030u;

    // 0x256030: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x256030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x256034: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x256034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x256038: 0x1110c3  sra         $v0, $s1, 3
    ctx->pc = 0x256038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 3));
    // 0x25603c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25603cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x256040: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x256040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x256044: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x256044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x256048: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x256048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x25604c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256050: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256054: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x256054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256058: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x256058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25605c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x256060: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x256060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x256064: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256068: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x256068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x25606c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x256070: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x256070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256074: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x256074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x256078: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x256078u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x25607c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x25607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x256080: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x256080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x256084: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x256084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x256088: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x256088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x25608c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x25608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x256090: 0x34438004  ori         $v1, $v0, 0x8004
    ctx->pc = 0x256090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x256094: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x256094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x256098: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25609c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x25609cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2560a0: 0x16113c  dsll32      $v0, $s6, 4
    ctx->pc = 0x2560a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 4));
    // 0x2560a4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2560a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2560a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2560a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2560ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2560acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2560b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2560b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2560b4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2560b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2560b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2560b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2560bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2560bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2560c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2560c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2560c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2560c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2560c8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2560c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2560cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2560ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2560d0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2560d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2560d4: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x2560d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x2560d8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2560d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2560dc: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2560dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2560e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2560e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2560e4: 0x34438005  ori         $v1, $v0, 0x8005
    ctx->pc = 0x2560e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x2560e8: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x2560e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x2560ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2560ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2560f0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2560f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x2560f4: 0x17113c  dsll32      $v0, $s7, 4
    ctx->pc = 0x2560f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 4));
    // 0x2560f8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2560f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2560fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2560fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256100: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256104: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x256104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256108: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x256108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25610c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256110: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256110u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256114: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x256114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x256118: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x256118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25611c: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x25611cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x256120: 0xfe030060  sd          $v1, 0x60($s0)
    ctx->pc = 0x256120u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 3));
    // 0x256124: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x256124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x256128: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x256128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x25612c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x25612cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x256130: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x256130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x256134: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x256134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x256138: 0x34648006  ori         $a0, $v1, 0x8006
    ctx->pc = 0x256138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32774);
    // 0x25613c: 0x3c036500  lui         $v1, 0x6500
    ctx->pc = 0x25613cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25856 << 16));
    // 0x256140: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x256140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x256144: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x256144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x256148: 0x1e113c  dsll32      $v0, $fp, 4
    ctx->pc = 0x256148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 4));
    // 0x25614c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x25614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x256150: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256154: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256158: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x256158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25615c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25615cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x256160: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256164: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x256164u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x256168: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x256168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25616c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256170: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x256170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x256174: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x256174u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x256178: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x256178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x25617c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x25617cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x256180: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x256180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x256184: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x256184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x256188: 0x34438007  ori         $v1, $v0, 0x8007
    ctx->pc = 0x256188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32775);
    // 0x25618c: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x25618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x256190: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256194: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x256194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x256198: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x256198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x25619c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x25619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2561a0: 0x2a93c  dsll32      $s5, $v0, 4
    ctx->pc = 0x2561a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2561a4: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x2561a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x2561a8: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x2561a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2561ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2561acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2561b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2561b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2561b4: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2561b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2561b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2561b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2561bc: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2561bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2561c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2561c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2561c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2561c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2561c8: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x2561c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x2561cc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2561ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2561d0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2561d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2561d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2561d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2561d8: 0x34438008  ori         $v1, $v0, 0x8008
    ctx->pc = 0x2561d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x2561dc: 0x3c026f00  lui         $v0, 0x6F00
    ctx->pc = 0x2561dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28416 << 16));
    // 0x2561e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2561e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2561e4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2561e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x2561e8: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2561e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2561ec: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2561ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2561f0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2561f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2561f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2561f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2561f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2561f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2561fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2561fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256200: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x256200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x256204: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x256204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256208: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x256208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25620c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x25620cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x256210: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x256210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x256214: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x256214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x256218: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x256218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x25621c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x25621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x256220: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x256220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x256224: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x256224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x256228: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x256228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x25622c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x25622cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x256230: 0x26d60240  addiu       $s6, $s6, 0x240
    ctx->pc = 0x256230u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 576));
    // 0x256234: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x256234u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x256238: 0x27de00c0  addiu       $fp, $fp, 0xC0
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    // 0x25623c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x25623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256240: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x256240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x256244: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x256244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x256248: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x256248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x25624c: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x25624cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x256250: 0x1e40fef5  bgtz        $s2, . + 4 + (-0x10B << 2)
    ctx->pc = 0x256250u;
    {
        const bool branch_taken_0x256250 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x256250) {
            ctx->pc = 0x255E28u;
            return;
        }
    }
    ctx->pc = 0x256258u;
    // 0x256258: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25625c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x25625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x256260: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x256260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x256264: 0x266200c0  addiu       $v0, $s3, 0xC0
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x256268: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x256268u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25626c: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x25626cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x256270: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x256274: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x256274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x256278: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x256278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x25627c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x25627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x256280: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256284: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x256284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x256288: 0x1c40fe91  bgtz        $v0, . + 4 + (-0x16F << 2)
    ctx->pc = 0x256288u;
    {
        const bool branch_taken_0x256288 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x256288) {
            ctx->pc = 0x255CD0u;
            return;
        }
    }
    ctx->pc = 0x256290u;
    // 0x256290: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x256290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x256294: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x256294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x256298: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x256298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x25629c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x25629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2562a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2562a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2562a4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2562a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2562a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2562a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2562ac: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x2562acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
    // 0x2562b0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2562b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2562b4: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x2562b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x2562b8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2562b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2562bc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x2562bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2562c0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2562c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2562c4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2562c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2562c8: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x2562c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2562cc: 0xafb600ac  sw          $s6, 0xAC($sp)
    ctx->pc = 0x2562ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 22));
    // 0x2562d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2562d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2562d4: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x2562d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2562d8: 0x1440fdf5  bnez        $v0, . + 4 + (-0x20B << 2)
    ctx->pc = 0x2562D8u;
    {
        const bool branch_taken_0x2562d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2562d8) {
            ctx->pc = 0x255AB0u;
            return;
        }
    }
    ctx->pc = 0x2562E0u;
    // 0x2562e0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2562e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2562e4: 0x2b93c  dsll32      $s7, $v0, 4
    ctx->pc = 0x2562e4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2562e8: 0x17b93e  dsrl32      $s7, $s7, 4
    ctx->pc = 0x2562e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 4));
    // 0x2562ec: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2562ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2562f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2562f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2562f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2562f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2562f8: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x2562f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2562fc: 0xafd7002c  sw          $s7, 0x2C($fp)
    ctx->pc = 0x2562fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 23));
    // 0x256300: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x256304: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x256304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x256308: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x256308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x25630c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x25630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x256310: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x256310u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x256314: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x256314u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x256318: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x256318u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x25631c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x25631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x256320: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x256320u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256324: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x256324u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x256328u;
}
