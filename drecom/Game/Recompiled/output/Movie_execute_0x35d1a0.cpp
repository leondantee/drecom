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

// Function: Movie_execute
// Address: 0x35d1a0 - 0x35d558
void Movie_execute_0x35d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_execute_0x35d1a0");
#endif

    switch (ctx->pc) {
        case 0x35d3dcu: goto label_35d3dc;
        case 0x35d41cu: goto label_35d41c;
        case 0x35d448u: goto label_35d448;
        default: break;
    }

    ctx->pc = 0x35d1a0u;

    // 0x35d1a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x35d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x35d1a4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x35d1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x35d1a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x35d1ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35d1b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35d1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35d1b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35d1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35d1b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35d1bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d1c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d1c4: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x35d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x35d1c8: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x35d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x35d1cc: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x35d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x35d1d0: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x35d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x35d1d4: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x35d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
    // 0x35d1d8: 0xafa900b0  sw          $t1, 0xB0($sp)
    ctx->pc = 0x35d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 9));
    // 0x35d1dc: 0xafaa00b8  sw          $t2, 0xB8($sp)
    ctx->pc = 0x35d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 10));
    // 0x35d1e0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x35d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x35d1e4: 0x2476c100  addiu       $s6, $v1, -0x3F00
    ctx->pc = 0x35d1e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x35d1e8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x35d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x35d1ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x35d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35d1f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35d1f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35d1f8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x35d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x35d1fc: 0x24720074  addiu       $s2, $v1, 0x74
    ctx->pc = 0x35d1fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x35d200: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35d200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35d204: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x35d204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35d208: 0x146000c8  bnez        $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x35D208u;
    {
        const bool branch_taken_0x35d208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d208) {
            ctx->pc = 0x35D52Cu;
            goto label_35d52c;
        }
    }
    ctx->pc = 0x35D210u;
    // 0x35d210: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35d210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35d214: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x35d214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x35d218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35d21c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35d220: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x35d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x35d224: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35d224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x35d228: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x35d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x35d22c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x35d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x35d230: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35d234: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x35d234u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x35d238: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d23c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d23cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d240: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x35d240u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d244: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35d248: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x35d248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x35d24c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35d250: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x35d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35d254: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d258: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d258u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d25c: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x35d25cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d260: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x35d260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35d264: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d268: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d268u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d26c: 0xa6420024  sh          $v0, 0x24($s2)
    ctx->pc = 0x35d26cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d270: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x35d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x35d274: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x35d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x35d278: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x35d278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d27c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x35d27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35d280: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d288: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x35d288u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d28c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d290: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d290u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d294: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d298: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d298u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d29c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x35d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x35d2a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35d2a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x35d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x35d2a8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x35d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x35d2ac: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x35d2acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d2b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x35d2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35d2b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d2b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d2b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d2bc: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x35d2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d2c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d2c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d2c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d2c8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x35d2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d2cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35d2ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35d2d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x35d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35d2d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35d2d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x35d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x35d2dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x35d2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x35d2e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x35d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x35d2e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d2e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d2e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d2ec: 0xa6420026  sh          $v0, 0x26($s2)
    ctx->pc = 0x35d2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d2f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x35d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x35d2f4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x35d2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x35d2f8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x35d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x35d2fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d300: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d304: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x35d304u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d308: 0x86420028  lh          $v0, 0x28($s2)
    ctx->pc = 0x35d308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x35d30c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D30Cu;
    {
        const bool branch_taken_0x35d30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d30c) {
            ctx->pc = 0x35D31Cu;
            goto label_35d31c;
        }
    }
    ctx->pc = 0x35D314u;
    // 0x35d314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d318: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x35d318u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
label_35d31c:
    // 0x35d31c: 0x86420026  lh          $v0, 0x26($s2)
    ctx->pc = 0x35d31cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x35d320: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D320u;
    {
        const bool branch_taken_0x35d320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d320) {
            ctx->pc = 0x35D330u;
            goto label_35d330;
        }
    }
    ctx->pc = 0x35D328u;
    // 0x35d328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d32c: 0xa6420026  sh          $v0, 0x26($s2)
    ctx->pc = 0x35d32cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 2));
label_35d330:
    // 0x35d330: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x35d330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x35d334: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x35d334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35d338: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35d33c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d340: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x35d340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35d344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35d344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d348: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x35d348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x35d34c: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x35d34cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x35d350: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x35d350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x35d354: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D354u;
    {
        const bool branch_taken_0x35d354 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d354) {
            ctx->pc = 0x35D368u;
            goto label_35d368;
        }
    }
    ctx->pc = 0x35D35Cu;
    // 0x35d35c: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x35d35cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35d360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35D360u;
    {
        const bool branch_taken_0x35d360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d360) {
            ctx->pc = 0x35D36Cu;
            goto label_35d36c;
        }
    }
    ctx->pc = 0x35D368u;
label_35d368:
    // 0x35d368: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x35d368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_35d36c:
    // 0x35d36c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x35d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x35d370: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x35d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x35d374: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x35d374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x35d378: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x35d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x35d37c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x35d37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x35d380: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35D380u;
    {
        const bool branch_taken_0x35d380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d380) {
            ctx->pc = 0x35D3ACu;
            goto label_35d3ac;
        }
    }
    ctx->pc = 0x35D388u;
    // 0x35d388: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x35d388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x35d38c: 0x24425ec0  addiu       $v0, $v0, 0x5EC0
    ctx->pc = 0x35d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x35d390: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x35d390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x35d394: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x35d394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x35d398: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x35d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x35d39c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x35d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x35d3a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d3a4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x35D3A4u;
    {
        const bool branch_taken_0x35d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d3a4) {
            ctx->pc = 0x35D52Cu;
            goto label_35d52c;
        }
    }
    ctx->pc = 0x35D3ACu;
label_35d3ac:
    // 0x35d3ac: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x35d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x35d3b0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x35d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35d3b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d3b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d3bc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x35d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x35d3c0: 0x86420024  lh          $v0, 0x24($s2)
    ctx->pc = 0x35d3c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x35d3c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d3c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d3c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d3cc: 0xaec2006c  sw          $v0, 0x6C($s6)
    ctx->pc = 0x35d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 2));
    // 0x35d3d0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x35d3d0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35d3d4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x35D3D4u;
    {
        const bool branch_taken_0x35d3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d3d4) {
            ctx->pc = 0x35D4F8u;
            goto label_35d4f8;
        }
    }
    ctx->pc = 0x35D3DCu;
label_35d3dc:
    // 0x35d3dc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x35d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d3e0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x35d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x35d3e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x35d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x35d3e8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x35d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x35d3ec: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x35d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x35d3f0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x35d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x35d3f4: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x35d3f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x35d3f8: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x35d3f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d3fc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x35d3fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x35d400: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x35d400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x35d404: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x35d404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d408: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x35d408u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x35d40c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x35d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x35d410: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x35d410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x35d414: 0xc0d779c  jal         func_35DE70
    ctx->pc = 0x35D414u;
    SET_GPR_U32(ctx, 31, 0x35D41Cu);
    ctx->pc = 0x35DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DE70u, 0x35D414u, 0x35D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D41Cu;
label_35d41c:
    // 0x35d41c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x35d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x35d420: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x35d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x35d424: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x35d424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x35d428: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x35d428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x35d42c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d434: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x35d434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x35d438: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x35d438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x35d43c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x35d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x35d440: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x35d440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35d444: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x35d444u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_35d448:
    // 0x35d448: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d44c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35d450: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35d450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35d454: 0x21f02  srl         $v1, $v0, 28
    ctx->pc = 0x35d454u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x35d458: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x35d458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35d45c: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x35D45Cu;
    {
        const bool branch_taken_0x35d45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d45c) {
            ctx->pc = 0x35D4F4u;
            goto label_35d4f4;
        }
    }
    ctx->pc = 0x35D464u;
    // 0x35d464: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35d468: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x35D468u;
    {
        const bool branch_taken_0x35d468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d468) {
            ctx->pc = 0x35D4D0u;
            goto label_35d4d0;
        }
    }
    ctx->pc = 0x35D470u;
    // 0x35d470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d474: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D474u;
    {
        const bool branch_taken_0x35d474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d474) {
            ctx->pc = 0x35D484u;
            goto label_35d484;
        }
    }
    ctx->pc = 0x35D47Cu;
    // 0x35d47c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x35D47Cu;
    {
        const bool branch_taken_0x35d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d47c) {
            ctx->pc = 0x35D448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d448;
        }
    }
    ctx->pc = 0x35D484u;
label_35d484:
    // 0x35d484: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x35d484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d488: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x35d488u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35d48c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D48Cu;
    {
        const bool branch_taken_0x35d48c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d48c) {
            ctx->pc = 0x35D4A0u;
            goto label_35d4a0;
        }
    }
    ctx->pc = 0x35D494u;
    // 0x35d494: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35d494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35d498: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35D498u;
    {
        const bool branch_taken_0x35d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d498) {
            ctx->pc = 0x35D4B0u;
            goto label_35d4b0;
        }
    }
    ctx->pc = 0x35D4A0u;
label_35d4a0:
    // 0x35d4a0: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x35d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x35d4a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x35d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x35d4a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x35d4a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d4ac: 0x0  nop
    ctx->pc = 0x35d4acu;
    // NOP
label_35d4b0:
    // 0x35d4b0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x35d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x35d4b4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x35d4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x35d4b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x35d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x35d4bc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x35d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35d4c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35d4c4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x35d4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35d4c8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x35D4C8u;
    {
        const bool branch_taken_0x35d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d4c8) {
            ctx->pc = 0x35D448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d448;
        }
    }
    ctx->pc = 0x35D4D0u;
label_35d4d0:
    // 0x35d4d0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x35d4d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d4d4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x35d4d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35d4d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35d4dc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x35d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x35d4e0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x35d4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x35d4e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x35d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x35d4e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35d4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35d4ec: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x35D4ECu;
    {
        const bool branch_taken_0x35d4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d4ec) {
            ctx->pc = 0x35D448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d448;
        }
    }
    ctx->pc = 0x35D4F4u;
label_35d4f4:
    // 0x35d4f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x35d4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_35d4f8:
    // 0x35d4f8: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x35d4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35d4fc: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x35D4FCu;
    {
        const bool branch_taken_0x35d4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d4fc) {
            ctx->pc = 0x35D3DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d3dc;
        }
    }
    ctx->pc = 0x35D504u;
    // 0x35d504: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x35d504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x35d508: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x35d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35d50c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35d510: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d514: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x35d514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35d518: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35d518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d51c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x35d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x35d520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d524: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x35D524u;
    {
        const bool branch_taken_0x35d524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d524) {
            ctx->pc = 0x35D52Cu;
            goto label_35d52c;
        }
    }
    ctx->pc = 0x35D52Cu;
label_35d52c:
    // 0x35d52c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x35d52cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35d530: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35d530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35d534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35d534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35d538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d53c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35d53cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35d540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d54c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x35d54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35d550: 0x3e00008  jr          $ra
    ctx->pc = 0x35D550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D558u;
}
