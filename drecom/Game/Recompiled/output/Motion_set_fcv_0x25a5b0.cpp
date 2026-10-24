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

// Function: Motion_set_fcv
// Address: 0x25a5b0 - 0x25acf8
void Motion_set_fcv_0x25a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_set_fcv_0x25a5b0");
#endif

    switch (ctx->pc) {
        case 0x25a70cu: goto label_25a70c;
        case 0x25a748u: goto label_25a748;
        case 0x25a9f0u: goto label_25a9f0;
        case 0x25aa2cu: goto label_25aa2c;
        case 0x25ac18u: goto label_25ac18;
        case 0x25ac78u: goto label_25ac78;
        case 0x25ac94u: goto label_25ac94;
        case 0x25acc4u: goto label_25acc4;
        default: break;
    }

    ctx->pc = 0x25a5b0u;

    // 0x25a5b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x25a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x25a5b4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x25a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x25a5b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25a5bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25a5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25a5c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25a5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25a5c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25a5c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25a5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25a5cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25a5d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25a5d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a5d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a5dc: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x25a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x25a5e0: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x25a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x25a5e4: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x25a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x25a5e8: 0xa7a70100  sh          $a3, 0x100($sp)
    ctx->pc = 0x25a5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 7));
    // 0x25a5ec: 0xafa80108  sw          $t0, 0x108($sp)
    ctx->pc = 0x25a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 8));
    // 0x25a5f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x25a5f4: 0x2454b888  addiu       $s4, $v0, -0x4778
    ctx->pc = 0x25a5f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949000));
    // 0x25a5f8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x25a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25a5fc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x25a5fcu;
    { uint32_t bits = FAST_READ32(0x38B888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a600: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x25a600u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x38B88Cu));
    // 0x25a604: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25a604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25a608: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x25a608u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a60c: 0xa3a000df  sb          $zero, 0xDF($sp)
    ctx->pc = 0x25a60cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 0));
    // 0x25a610: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x25a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25a614: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x25a614u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25a618: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a61c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x25a61cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a620: 0x329700ff  andi        $s7, $s4, 0xFF
    ctx->pc = 0x25a620u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25a624: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x25a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25a628: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x25a628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x25a62c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25a62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a630: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a634: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x25a634u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a638: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x25a638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25a63c: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x25a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x25a640: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25a640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a644: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x25a644u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a648: 0xa7b400dc  sh          $s4, 0xDC($sp)
    ctx->pc = 0x25a648u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 20));
    // 0x25a64c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x25a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25a650: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x25a650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a654: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x25a654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x25a658: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a65c: 0xa44009ea  sh          $zero, 0x9EA($v0)
    ctx->pc = 0x25a65cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2538), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a660: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x25a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25a664: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25a664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a668: 0xac62036c  sw          $v0, 0x36C($v1)
    ctx->pc = 0x25a668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 876), GPR_U32(ctx, 2));
    // 0x25a66c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a670: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x25a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a674: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x25a674u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a678: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a67c: 0xa44309ec  sh          $v1, 0x9EC($v0)
    ctx->pc = 0x25a67cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2540), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a680: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25a680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a684: 0x8c85036c  lw          $a1, 0x36C($a0)
    ctx->pc = 0x25a684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x25a688: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x25a688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x25a68c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a690: 0xa06209e4  sb          $v0, 0x9E4($v1)
    ctx->pc = 0x25a690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2532), (uint8_t)GPR_U32(ctx, 2));
    // 0x25a694: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a698: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x25a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a69c: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x25a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x25a6a0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a6a4: 0xac430350  sw          $v1, 0x350($v0)
    ctx->pc = 0x25a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 848), GPR_U32(ctx, 3));
    // 0x25a6a8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a6ac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a6b0: 0x904209e4  lbu         $v0, 0x9E4($v0)
    ctx->pc = 0x25a6b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2532)));
    // 0x25a6b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25a6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a6b8: 0x8c820350  lw          $v0, 0x350($a0)
    ctx->pc = 0x25a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x25a6bc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x25a6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a6c0: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x25a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x25a6c4: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x25a6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x25a6c8: 0xa69024  and         $s2, $a1, $a2
    ctx->pc = 0x25a6c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x25a6cc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a6d0: 0xac6005f8  sw          $zero, 0x5F8($v1)
    ctx->pc = 0x25a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1528), GPR_U32(ctx, 0));
    // 0x25a6d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a6d8: 0xac4009d8  sw          $zero, 0x9D8($v0)
    ctx->pc = 0x25a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2520), GPR_U32(ctx, 0));
    // 0x25a6dc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a6e0: 0xa4800a00  sh          $zero, 0xA00($a0)
    ctx->pc = 0x25a6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2560), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a6e4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x25a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a6e8: 0xa4a00a02  sh          $zero, 0xA02($a1)
    ctx->pc = 0x25a6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2562), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a6ec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x25a6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x25a6f0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a6f4: 0xac4005f0  sw          $zero, 0x5F0($v0)
    ctx->pc = 0x25a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1520), GPR_U32(ctx, 0));
    // 0x25a6f8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a6fc: 0xac4005f4  sw          $zero, 0x5F4($v0)
    ctx->pc = 0x25a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 0));
    // 0x25a700: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a700u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a704: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25A704u;
    {
        const bool branch_taken_0x25a704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a704) {
            ctx->pc = 0x25A730u;
            goto label_25a730;
        }
    }
    ctx->pc = 0x25A70Cu;
label_25a70c:
    // 0x25a70c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a710: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a714: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x25a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25a718: 0xaca00370  sw          $zero, 0x370($a1)
    ctx->pc = 0x25a718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 0));
    // 0x25a71c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x25a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a720: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a724: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25a728: 0xac4004b0  sw          $zero, 0x4B0($v0)
    ctx->pc = 0x25a728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1200), GPR_U32(ctx, 0));
    // 0x25a72c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_25a730:
    // 0x25a730: 0x2a020050  slti        $v0, $s0, 0x50
    ctx->pc = 0x25a730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x25a734: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x25A734u;
    {
        const bool branch_taken_0x25a734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a734) {
            ctx->pc = 0x25A70Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a70c;
        }
    }
    ctx->pc = 0x25A73Cu;
    // 0x25a73c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a73cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a740: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x25A740u;
    {
        const bool branch_taken_0x25a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a740) {
            ctx->pc = 0x25A970u;
            goto label_25a970;
        }
    }
    ctx->pc = 0x25A748u;
label_25a748:
    // 0x25a748: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a74c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x25a750: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25a754: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25a754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25a758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a75c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x25a75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x25a760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25a760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a764: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25a764u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a768: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a76c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x25a770: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25a774: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25a774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a778: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a77c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x25a77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x25a780: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x25A780u;
    {
        const bool branch_taken_0x25a780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a780) {
            ctx->pc = 0x25A8DCu;
            goto label_25a8dc;
        }
    }
    ctx->pc = 0x25A788u;
    // 0x25a788: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a78c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x25a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x25a790: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25a794: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25a794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a798: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25a798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a79c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25a7a0: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25A7A0u;
    {
        const bool branch_taken_0x25a7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a7a0) {
            ctx->pc = 0x25A804u;
            goto label_25a804;
        }
    }
    ctx->pc = 0x25A7A8u;
    // 0x25a7a8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25a7ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A7ACu;
    {
        const bool branch_taken_0x25a7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a7ac) {
            ctx->pc = 0x25A7BCu;
            goto label_25a7bc;
        }
    }
    ctx->pc = 0x25A7B4u;
    // 0x25a7b4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25A7B4u;
    {
        const bool branch_taken_0x25a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a7b4) {
            ctx->pc = 0x25A84Cu;
            goto label_25a84c;
        }
    }
    ctx->pc = 0x25A7BCu;
label_25a7bc:
    // 0x25a7bc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7c0: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x25a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a7c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a7c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25a7cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a7d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a7d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7d8: 0xac4305f0  sw          $v1, 0x5F0($v0)
    ctx->pc = 0x25a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1520), GPR_U32(ctx, 3));
    // 0x25a7dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7e0: 0xa4400600  sh          $zero, 0x600($v0)
    ctx->pc = 0x25a7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1536), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a7e4: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x25a7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a7e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7ec: 0xa44305fe  sh          $v1, 0x5FE($v0)
    ctx->pc = 0x25a7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1534), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a7f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a7f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a7f8: 0xa44305fc  sh          $v1, 0x5FC($v0)
    ctx->pc = 0x25a7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1532), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a7fc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x25A7FCu;
    {
        const bool branch_taken_0x25a7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a7fc) {
            ctx->pc = 0x25A968u;
            goto label_25a968;
        }
    }
    ctx->pc = 0x25A804u;
label_25a804:
    // 0x25a804: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a808: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x25a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a80c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a810: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25a814: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a818: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a81c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a820: 0xac4305f4  sw          $v1, 0x5F4($v0)
    ctx->pc = 0x25a820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 3));
    // 0x25a824: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a828: 0xa4400606  sh          $zero, 0x606($v0)
    ctx->pc = 0x25a828u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1542), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a82c: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x25a82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a830: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a834: 0xa4430604  sh          $v1, 0x604($v0)
    ctx->pc = 0x25a834u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1540), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a838: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a83c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a840: 0xa4430602  sh          $v1, 0x602($v0)
    ctx->pc = 0x25a840u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1538), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a844: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x25A844u;
    {
        const bool branch_taken_0x25a844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a844) {
            ctx->pc = 0x25A968u;
            goto label_25a968;
        }
    }
    ctx->pc = 0x25A84Cu;
label_25a84c:
    // 0x25a84c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a850: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x25a850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a854: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a858: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25a85c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a860: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a864: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x25a864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a868: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25a868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25a86c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a874: 0xac4404b0  sw          $a0, 0x4B0($v0)
    ctx->pc = 0x25a874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1200), GPR_U32(ctx, 4));
    // 0x25a878: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a87c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a884: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a888: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a88c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a890: 0xa44007ec  sh          $zero, 0x7EC($v0)
    ctx->pc = 0x25a890u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2028), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a894: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x25a894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a898: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a89c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a8a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a8a4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a8a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a8b0: 0xa44407ea  sh          $a0, 0x7EA($v0)
    ctx->pc = 0x25a8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2026), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a8b4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x25a8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25a8b8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a8bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a8c4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a8c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a8d0: 0xa44407e8  sh          $a0, 0x7E8($v0)
    ctx->pc = 0x25a8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2024), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a8d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25A8D4u;
    {
        const bool branch_taken_0x25a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a8d4) {
            ctx->pc = 0x25A968u;
            goto label_25a968;
        }
    }
    ctx->pc = 0x25A8DCu;
label_25a8dc:
    // 0x25a8dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a8e0: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x25a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a8e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a8e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25a8ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a8f0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a8f4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x25a8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a8f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25a8fc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a904: 0xac440370  sw          $a0, 0x370($v0)
    ctx->pc = 0x25a904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 4));
    // 0x25a908: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a90c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a914: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a918: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a91c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a920: 0xa440060c  sh          $zero, 0x60C($v0)
    ctx->pc = 0x25a920u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1548), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a924: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x25a924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a928: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a92c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a934: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a938: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a93c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a940: 0xa444060a  sh          $a0, 0x60A($v0)
    ctx->pc = 0x25a940u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1546), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a944: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x25a944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25a948: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a94c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a954: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a958: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a95c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a960: 0xa4440608  sh          $a0, 0x608($v0)
    ctx->pc = 0x25a960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1544), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a964: 0x0  nop
    ctx->pc = 0x25a964u;
    // NOP
label_25a968:
    // 0x25a968: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25a96c: 0x0  nop
    ctx->pc = 0x25a96cu;
    // NOP
label_25a970:
    // 0x25a970: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a974: 0x904209e4  lbu         $v0, 0x9E4($v0)
    ctx->pc = 0x25a974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2532)));
    // 0x25a978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25a978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a97c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x25a97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25a980: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x25A980u;
    {
        const bool branch_taken_0x25a980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a980) {
            ctx->pc = 0x25A748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a748;
        }
    }
    ctx->pc = 0x25A988u;
    // 0x25a988: 0x12e00031  beqz        $s7, . + 4 + (0x31 << 2)
    ctx->pc = 0x25A988u;
    {
        const bool branch_taken_0x25a988 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a988) {
            ctx->pc = 0x25AA50u;
            goto label_25aa50;
        }
    }
    ctx->pc = 0x25A990u;
    // 0x25a990: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x25a990u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a994: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a998: 0xa05709e5  sb          $s7, 0x9E5($v0)
    ctx->pc = 0x25a998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2533), (uint8_t)GPR_U32(ctx, 23));
    // 0x25a99c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9a0: 0xa05709e6  sb          $s7, 0x9E6($v0)
    ctx->pc = 0x25a9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2534), (uint8_t)GPR_U32(ctx, 23));
    // 0x25a9a4: 0x97a20100  lhu         $v0, 0x100($sp)
    ctx->pc = 0x25a9a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25a9a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a9ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25a9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25a9b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25A9B0u;
    {
        const bool branch_taken_0x25a9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a9b0) {
            ctx->pc = 0x25A9E0u;
            goto label_25a9e0;
        }
    }
    ctx->pc = 0x25A9B8u;
    // 0x25a9b8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25a9c0: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x25a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a9c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9c8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x25a9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a9cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a9ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25a9d0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9d4: 0xe44009c8  swc1        $f0, 0x9C8($v0)
    ctx->pc = 0x25a9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2504), bits); }
    // 0x25a9d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25A9D8u;
    {
        const bool branch_taken_0x25a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a9d8) {
            ctx->pc = 0x25A9F0u;
            goto label_25a9f0;
        }
    }
    ctx->pc = 0x25A9E0u;
label_25a9e0:
    // 0x25a9e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9e4: 0xc44009cc  lwc1        $f0, 0x9CC($v0)
    ctx->pc = 0x25a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a9e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9ec: 0xe44009c8  swc1        $f0, 0x9C8($v0)
    ctx->pc = 0x25a9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2504), bits); }
label_25a9f0:
    // 0x25a9f0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x25a9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x25a9f4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x25a9f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a9f8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9fc: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x25a9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25aa00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25aa04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25aa08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25aa0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25aa10: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25aa14: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x25aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x25aa18: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x25aa18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25aa1c: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x25aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x25aa20: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x25aa20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25aa24: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25AA24u;
    SET_GPR_U32(ctx, 31, 0x25AA2Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25AA2Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25AA2Cu) { return; }
    ctx->pc = 0x25AA2Cu;
label_25aa2c:
    // 0x25aa2c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x25aa2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25aa30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa34: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x25aa34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x25aa38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25aa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25aa3c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x25aa3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25aa40: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x25AA40u;
    {
        const bool branch_taken_0x25aa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25aa40) {
            ctx->pc = 0x25A9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a9f0;
        }
    }
    ctx->pc = 0x25AA48u;
    // 0x25aa48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25AA48u;
    {
        const bool branch_taken_0x25aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aa48) {
            ctx->pc = 0x25AA64u;
            goto label_25aa64;
        }
    }
    ctx->pc = 0x25AA50u;
label_25aa50:
    // 0x25aa50: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa54: 0xa04009e5  sb          $zero, 0x9E5($v0)
    ctx->pc = 0x25aa54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2533), (uint8_t)GPR_U32(ctx, 0));
    // 0x25aa58: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x25aa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x25aa5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa60: 0xa04309e6  sb          $v1, 0x9E6($v0)
    ctx->pc = 0x25aa60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2534), (uint8_t)GPR_U32(ctx, 3));
label_25aa64:
    // 0x25aa64: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa68: 0xa04009e7  sb          $zero, 0x9E7($v0)
    ctx->pc = 0x25aa68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 0));
    // 0x25aa6c: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x25aa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x25aa70: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x25aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x25aa74: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa78: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x25aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x25aa7c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa80: 0x944209ec  lhu         $v0, 0x9EC($v0)
    ctx->pc = 0x25aa80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2540)));
    // 0x25aa84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25aa88: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x25aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x25aa8c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa90: 0xac4309fc  sw          $v1, 0x9FC($v0)
    ctx->pc = 0x25aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2556), GPR_U32(ctx, 3));
    // 0x25aa94: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa98: 0xa45e09ee  sh          $fp, 0x9EE($v0)
    ctx->pc = 0x25aa98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 30));
    // 0x25aa9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aaa0: 0xa44009f0  sh          $zero, 0x9F0($v0)
    ctx->pc = 0x25aaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2544), (uint16_t)GPR_U32(ctx, 0));
    // 0x25aaa4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aaa8: 0x944209ec  lhu         $v0, 0x9EC($v0)
    ctx->pc = 0x25aaa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2540)));
    // 0x25aaac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25aaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25aab0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25aab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25aab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aab8: 0x0  nop
    ctx->pc = 0x25aab8u;
    // NOP
    // 0x25aabc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25aabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25aac0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aac4: 0xe44009d4  swc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25aac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2516), bits); }
    // 0x25aac8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x25aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25aacc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aad0: 0xac4309f4  sw          $v1, 0x9F4($v0)
    ctx->pc = 0x25aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2548), GPR_U32(ctx, 3));
    // 0x25aad4: 0x97a30100  lhu         $v1, 0x100($sp)
    ctx->pc = 0x25aad4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25aad8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aadc: 0xa44309e0  sh          $v1, 0x9E0($v0)
    ctx->pc = 0x25aadcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x25aae0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aae4: 0x8c5409f8  lw          $s4, 0x9F8($v0)
    ctx->pc = 0x25aae4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2552)));
    // 0x25aae8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aaec: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x25aaecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25aaf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25aaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25aaf4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25aaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25aaf8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25AAF8u;
    {
        const bool branch_taken_0x25aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aaf8) {
            ctx->pc = 0x25AB3Cu;
            goto label_25ab3c;
        }
    }
    ctx->pc = 0x25AB00u;
    // 0x25ab00: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x25ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25ab04: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x25ab04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25ab08: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab0c: 0x8c6209fc  lw          $v0, 0x9FC($v1)
    ctx->pc = 0x25ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2556)));
    // 0x25ab10: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x25ab10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25ab14: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25AB14u;
    {
        const bool branch_taken_0x25ab14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ab14) {
            ctx->pc = 0x25AB70u;
            goto label_25ab70;
        }
    }
    ctx->pc = 0x25AB1Cu;
    // 0x25ab1c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab20: 0x8c4209fc  lw          $v0, 0x9FC($v0)
    ctx->pc = 0x25ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25ab24: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x25ab24u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25ab28: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x25ab28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ab2c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab30: 0xa05709e7  sb          $s7, 0x9E7($v0)
    ctx->pc = 0x25ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 23));
    // 0x25ab34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25AB34u;
    {
        const bool branch_taken_0x25ab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab34) {
            ctx->pc = 0x25AB70u;
            goto label_25ab70;
        }
    }
    ctx->pc = 0x25AB3Cu;
label_25ab3c:
    // 0x25ab3c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x25ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25ab40: 0x282082b  sltu        $at, $s4, $v0
    ctx->pc = 0x25ab40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25ab44: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x25AB44u;
    {
        const bool branch_taken_0x25ab44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab44) {
            ctx->pc = 0x25AB68u;
            goto label_25ab68;
        }
    }
    ctx->pc = 0x25AB4Cu;
    // 0x25ab4c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab50: 0x8c4209fc  lw          $v0, 0x9FC($v0)
    ctx->pc = 0x25ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25ab54: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x25ab54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25ab58: 0x73c0a628  paddub      $s4, $fp, $zero
    ctx->pc = 0x25ab58u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x25ab5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ab60: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ab64: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x25ab64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
label_25ab68:
    // 0x25ab68: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x25ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25ab6c: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x25ab6cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_25ab70:
    // 0x25ab70: 0x141202  srl         $v0, $s4, 8
    ctx->pc = 0x25ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x25ab74: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AB74u;
    {
        const bool branch_taken_0x25ab74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25ab74) {
            ctx->pc = 0x25AB90u;
            goto label_25ab90;
        }
    }
    ctx->pc = 0x25AB7Cu;
    // 0x25ab7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ab7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ab80: 0x0  nop
    ctx->pc = 0x25ab80u;
    // NOP
    // 0x25ab84: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25ab84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25ab88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AB88u;
    {
        const bool branch_taken_0x25ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab88) {
            ctx->pc = 0x25ABACu;
            goto label_25abac;
        }
    }
    ctx->pc = 0x25AB90u;
label_25ab90:
    // 0x25ab90: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25ab94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ab94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ab98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25ab98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25ab9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ab9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aba0: 0x0  nop
    ctx->pc = 0x25aba0u;
    // NOP
    // 0x25aba4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25aba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25aba8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25aba8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25abac:
    // 0x25abac: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x25abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25abb0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25ABB0u;
    {
        const bool branch_taken_0x25abb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25abb0) {
            ctx->pc = 0x25ABCCu;
            goto label_25abcc;
        }
    }
    ctx->pc = 0x25ABB8u;
    // 0x25abb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25abb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25abbc: 0x0  nop
    ctx->pc = 0x25abbcu;
    // NOP
    // 0x25abc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25abc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25abc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25ABC4u;
    {
        const bool branch_taken_0x25abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abc4) {
            ctx->pc = 0x25ABE8u;
            goto label_25abe8;
        }
    }
    ctx->pc = 0x25ABCCu;
label_25abcc:
    // 0x25abcc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25abccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25abd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25abd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25abd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25abd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25abd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25abd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25abdc: 0x0  nop
    ctx->pc = 0x25abdcu;
    // NOP
    // 0x25abe0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25abe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25abe4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25abe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25abe8:
    // 0x25abe8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x25abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x25abec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25abecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25abf0: 0x0  nop
    ctx->pc = 0x25abf0u;
    // NOP
    // 0x25abf4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25abf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25abf8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25abf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25abfc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac00: 0xe46009d0  swc1        $f0, 0x9D0($v1)
    ctx->pc = 0x25ac00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2512), bits); }
    // 0x25ac04: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25ac0c: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x25ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25ac10: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25AC10u;
    SET_GPR_U32(ctx, 31, 0x25AC18u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25AC18u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25AC18u) { return; }
    ctx->pc = 0x25AC18u;
label_25ac18:
    // 0x25ac18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac1c: 0xc46009d0  lwc1        $f0, 0x9D0($v1)
    ctx->pc = 0x25ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ac20: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25ac20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25ac24: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac28: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25ac28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ac2c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x25ac2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x25ac30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac34: 0x944309e0  lhu         $v1, 0x9E0($v0)
    ctx->pc = 0x25ac34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25ac38: 0xa7a300a8  sh          $v1, 0xA8($sp)
    ctx->pc = 0x25ac38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ac3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ac40: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x25ac40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ac44: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac48: 0x8c8205f0  lw          $v0, 0x5F0($a0)
    ctx->pc = 0x25ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1520)));
    // 0x25ac4c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x25ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x25ac50: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac54: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x25ac54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x25ac58: 0xa3a300c0  sb          $v1, 0xC0($sp)
    ctx->pc = 0x25ac58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 3));
    // 0x25ac5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac60: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x25ac60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25ac64: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x25ac64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25ac68: 0x244502e0  addiu       $a1, $v0, 0x2E0
    ctx->pc = 0x25ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x25ac6c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x25ac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25ac70: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25AC70u;
    SET_GPR_U32(ctx, 31, 0x25AC78u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25AC70u, 0x25AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC78u;
label_25ac78:
    // 0x25ac78: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25ac78u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25ac7c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x25ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac80: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac84: 0x246402f0  addiu       $a0, $v1, 0x2F0
    ctx->pc = 0x25ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x25ac88: 0x244502e0  addiu       $a1, $v0, 0x2E0
    ctx->pc = 0x25ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x25ac8c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25AC8Cu;
    SET_GPR_U32(ctx, 31, 0x25AC94u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25AC94u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25AC94u) { return; }
    ctx->pc = 0x25AC94u;
label_25ac94:
    // 0x25ac94: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25ac94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25ac98: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25ac9c: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aca0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25aca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25aca4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25aca8: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x25aca8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x25acac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25acb0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x25acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25acb4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x25acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25acb8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x25acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25acbc: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25ACBCu;
    SET_GPR_U32(ctx, 31, 0x25ACC4u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25ACBCu, 0x25ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACC4u;
label_25acc4:
    // 0x25acc4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x25acc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25acc8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25acc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25accc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25acccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25acd0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25acd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25acd4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25acd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25acd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25acd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25acdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25acdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ace0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25ace0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ace4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ace4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ace8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ace8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25acec: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x25acecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x25acf0: 0x3e00008  jr          $ra
    ctx->pc = 0x25ACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ACF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ACF8u;
}
