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

// Function: Scr_parts_env_get_work
// Address: 0x13d040 - 0x13d408
void Scr_parts_env_get_work_0x13d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_env_get_work_0x13d040");
#endif

    switch (ctx->pc) {
        case 0x13d2a8u: goto label_13d2a8;
        case 0x13d30cu: goto label_13d30c;
        case 0x13d320u: goto label_13d320;
        case 0x13d348u: goto label_13d348;
        case 0x13d374u: goto label_13d374;
        default: break;
    }

    ctx->pc = 0x13d040u;

    // 0x13d040: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13d044: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x13d044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x13d048: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13d048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13d04c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13d04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13d050: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13d050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13d054: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13d054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13d058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13d05c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13d060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d06c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x13d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x13d070: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x13d070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x13d074: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x13d074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
    // 0x13d078: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d07c: 0x8c5400a0  lw          $s4, 0xA0($v0)
    ctx->pc = 0x13d07cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x13d080: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x13d080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13d084: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x13d084u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13d088: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d08c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x13d08cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d090: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d094: 0x3056000f  andi        $s6, $v0, 0xF
    ctx->pc = 0x13d094u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d098: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D098u;
    {
        const bool branch_taken_0x13d098 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d098) {
            ctx->pc = 0x13D0B4u;
            goto label_13d0b4;
        }
    }
    ctx->pc = 0x13D0A0u;
    // 0x13d0a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d0a4: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x13d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x13d0a8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d0b0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_13d0b4:
    // 0x13d0b4: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x13d0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d0bc: 0xac520030  sw          $s2, 0x30($v0)
    ctx->pc = 0x13d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 18));
    // 0x13d0c0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x13d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0c4: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x13d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x13d0c8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x13d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x13d0cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d0d0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13d0d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0d8: 0x3057000f  andi        $s7, $v0, 0xF
    ctx->pc = 0x13d0d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d0dc: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D0DCu;
    {
        const bool branch_taken_0x13d0dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d0dc) {
            ctx->pc = 0x13D0F8u;
            goto label_13d0f8;
        }
    }
    ctx->pc = 0x13D0E4u;
    // 0x13d0e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d0e8: 0x571823  subu        $v1, $v0, $s7
    ctx->pc = 0x13d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13d0ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d0f4: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_13d0f8:
    // 0x13d0f8: 0x8fb300c8  lw          $s3, 0xC8($sp)
    ctx->pc = 0x13d0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d100: 0xac530034  sw          $s3, 0x34($v0)
    ctx->pc = 0x13d100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 19));
    // 0x13d104: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x13d104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d108: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x13d108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x13d10c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x13d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13d110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d114: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x13d114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x13d118: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13d11c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13d120: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d124: 0x305e000f  andi        $fp, $v0, 0xF
    ctx->pc = 0x13d124u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d128: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D128u;
    {
        const bool branch_taken_0x13d128 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d128) {
            ctx->pc = 0x13D144u;
            goto label_13d144;
        }
    }
    ctx->pc = 0x13D130u;
    // 0x13d130: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d134: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x13d134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x13d138: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d13c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d140: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_13d144:
    // 0x13d144: 0x8e910008  lw          $s1, 0x8($s4)
    ctx->pc = 0x13d144u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13d148: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x13d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x13d14c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D14Cu;
    {
        const bool branch_taken_0x13d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d14c) {
            ctx->pc = 0x13D168u;
            goto label_13d168;
        }
    }
    ctx->pc = 0x13D154u;
    // 0x13d154: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d158: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13d158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d15c: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x13d15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13d160: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d164: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x13d164u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_13d168:
    // 0x13d168: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x13d168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x13d16c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D16Cu;
    {
        const bool branch_taken_0x13d16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d16c) {
            ctx->pc = 0x13D188u;
            goto label_13d188;
        }
    }
    ctx->pc = 0x13D174u;
    // 0x13d174: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d178: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13d178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d17c: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x13d17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x13d180: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d184: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x13d184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_13d188:
    // 0x13d188: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d18c: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x13d18cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x13d190: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x13d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x13d194: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D194u;
    {
        const bool branch_taken_0x13d194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d194) {
            ctx->pc = 0x13D1A4u;
            goto label_13d1a4;
        }
    }
    ctx->pc = 0x13D19Cu;
    // 0x13d19c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13d1a0: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x13d1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_13d1a4:
    // 0x13d1a4: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d1a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D1A8u;
    {
        const bool branch_taken_0x13d1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d1a8) {
            ctx->pc = 0x13D1B8u;
            goto label_13d1b8;
        }
    }
    ctx->pc = 0x13D1B0u;
    // 0x13d1b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x13d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13d1b4: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x13d1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_13d1b8:
    // 0x13d1b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d1b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d1bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d1c0: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13d1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13d1c4: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d1c8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x13D1C8u;
    {
        const bool branch_taken_0x13d1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d1c8) {
            ctx->pc = 0x13D28Cu;
            goto label_13d28c;
        }
    }
    ctx->pc = 0x13D1D0u;
    // 0x13d1d0: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d1d4: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x13d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x13d1d8: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x13d1d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13d1dc: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13D1DCu;
    {
        const bool branch_taken_0x13d1dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d1dc) {
            ctx->pc = 0x13D230u;
            goto label_13d230;
        }
    }
    ctx->pc = 0x13D1E4u;
    // 0x13d1e4: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d1e8: 0x21a42  srl         $v1, $v0, 9
    ctx->pc = 0x13d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x13d1ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13d1f0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13D1F0u;
    {
        const bool branch_taken_0x13d1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d1f0) {
            ctx->pc = 0x13D214u;
            goto label_13d214;
        }
    }
    ctx->pc = 0x13D1F8u;
    // 0x13d1f8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x13d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x13d1fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x13d1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x13d200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d204: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d208: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13d208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13d20c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13D20Cu;
    {
        const bool branch_taken_0x13d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d20c) {
            ctx->pc = 0x13D28Cu;
            goto label_13d28c;
        }
    }
    ctx->pc = 0x13D214u;
label_13d214:
    // 0x13d214: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x13d214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x13d218: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x13d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x13d21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d220: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d224: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13d228: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13D228u;
    {
        const bool branch_taken_0x13d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d228) {
            ctx->pc = 0x13D28Cu;
            goto label_13d28c;
        }
    }
    ctx->pc = 0x13D230u;
label_13d230:
    // 0x13d230: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d234: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x13d234u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x13d238: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D238u;
    {
        const bool branch_taken_0x13d238 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13d238) {
            ctx->pc = 0x13D254u;
            goto label_13d254;
        }
    }
    ctx->pc = 0x13D240u;
    // 0x13d240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d244: 0x0  nop
    ctx->pc = 0x13d244u;
    // NOP
    // 0x13d248: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13d248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13d24c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13D24Cu;
    {
        const bool branch_taken_0x13d24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d24c) {
            ctx->pc = 0x13D270u;
            goto label_13d270;
        }
    }
    ctx->pc = 0x13D254u;
label_13d254:
    // 0x13d254: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x13d254u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x13d258: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13d25c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13d25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13d260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d264: 0x0  nop
    ctx->pc = 0x13d264u;
    // NOP
    // 0x13d268: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13d268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13d26c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x13d26cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_13d270:
    // 0x13d270: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x13d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x13d274: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x13d274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x13d278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d27c: 0x0  nop
    ctx->pc = 0x13d27cu;
    // NOP
    // 0x13d280: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13d280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13d284: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d288: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13d288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_13d28c:
    // 0x13d28c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x13d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d290: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d294: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x13d294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x13d298: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x13d298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d29c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x13d29cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13d2a0: 0xc04f504  jal         func_13D410
    ctx->pc = 0x13D2A0u;
    SET_GPR_U32(ctx, 31, 0x13D2A8u);
    ctx->pc = 0x13D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D410u, 0x13D2A0u, 0x13D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2A8u;
label_13d2a8:
    // 0x13d2a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x13d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x13d2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d2b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2b4: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x13d2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x13d2b8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x13d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x13d2bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d2c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2c4: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x13d2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x13d2c8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x13d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x13d2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d2d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2d4: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x13d2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x13d2d8: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x13d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x13d2dc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2e0: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x13d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x13d2e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d2e8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x13d2ec: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13d2f0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x13d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d2f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d2f8: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x13d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x13d2fc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x13d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d300: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x13d300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13d304: 0xc04f504  jal         func_13D410
    ctx->pc = 0x13D304u;
    SET_GPR_U32(ctx, 31, 0x13D30Cu);
    ctx->pc = 0x13D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D410u, 0x13D304u, 0x13D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D30Cu;
label_13d30c:
    // 0x13d30c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d310: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x13d314: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13d318: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x13d318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13d31c: 0x0  nop
    ctx->pc = 0x13d31cu;
    // NOP
label_13d320:
    // 0x13d320: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13d320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13d324: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13d324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d328: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x13d328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13d32c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13d330: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x13d330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d334: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x13d334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13d338: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x13d338u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13d33c: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x13d33cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13d340: 0xc04f5ac  jal         func_13D6B0
    ctx->pc = 0x13D340u;
    SET_GPR_U32(ctx, 31, 0x13D348u);
    ctx->pc = 0x13D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6B0u, 0x13D340u, 0x13D348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D348u;
label_13d348:
    // 0x13d348: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x13d348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x13d34c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13d34cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13d350: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d354: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x13d354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13d358: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13d35c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x13d35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d360: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x13d360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x13d364: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x13d364u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13d368: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x13d368u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13d36c: 0xc04f638  jal         func_13D8E0
    ctx->pc = 0x13D36Cu;
    SET_GPR_U32(ctx, 31, 0x13D374u);
    ctx->pc = 0x13D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D8E0u, 0x13D36Cu, 0x13D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D374u;
label_13d374:
    // 0x13d374: 0x267300c0  addiu       $s3, $s3, 0xC0
    ctx->pc = 0x13d374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x13d378: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x13d378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x13d37c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13d37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d380: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d384: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x13d384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13d388: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x13d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x13d38c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x13d38cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13d394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d398: 0x1c40ffe1  bgtz        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x13D398u;
    {
        const bool branch_taken_0x13d398 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x13d398) {
            ctx->pc = 0x13D320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d320;
        }
    }
    ctx->pc = 0x13D3A0u;
    // 0x13d3a0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d3a4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d3a8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x13d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x13d3ac: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13d3b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D3B0u;
    {
        const bool branch_taken_0x13d3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d3b0) {
            ctx->pc = 0x13D3D0u;
            goto label_13d3d0;
        }
    }
    ctx->pc = 0x13D3B8u;
    // 0x13d3b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d3bc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13d3c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d3c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d3cc: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_13d3d0:
    // 0x13d3d0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d3d4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x13d3d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13d3d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13d3d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13d3dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13d3dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13d3e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13d3e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13d3e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13d3e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d3e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13d3e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d3ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13d3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d3fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x13d3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13d400: 0x3e00008  jr          $ra
    ctx->pc = 0x13D400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D408u;
}
