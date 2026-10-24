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

// Function: entry_00255570
// Address: 0x255570 - 0x255644
void entry_00255570_0x255570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255570_0x255570");
#endif

    ctx->pc = 0x255570u;

    // 0x255570: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x255570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x255574: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x255574u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x255578: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x255578u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25557c: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x25557cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x255580: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x255580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x255584: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255588: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x255588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x25558c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25558cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255590: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x255590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x255594: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255598: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25559c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2555a0: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x2555a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x2555a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2555a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2555a8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2555a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2555ac: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2555acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2555b0: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x2555b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2555b4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2555b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2555b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2555b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2555bc: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2555bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2555c0: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x2555c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2555c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2555c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2555c8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2555c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2555cc: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2555ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2555d0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2555d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2555d4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2555d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2555d8: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x2555d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x2555dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2555dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2555e0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2555e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2555e4: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x2555e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2555e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2555e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2555ec: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2555ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2555f0: 0x90850009  lbu         $a1, 0x9($a0)
    ctx->pc = 0x2555f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x2555f4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2555f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2555f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2555f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2555fc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2555fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x255600: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x255600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255604: 0xa0820009  sb          $v0, 0x9($a0)
    ctx->pc = 0x255604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x255608: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x255608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x25560c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25560Cu;
    {
        const bool branch_taken_0x25560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25560c) {
            ctx->pc = 0x255644u;
            return;
        }
    }
    ctx->pc = 0x255614u;
    // 0x255614: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x255614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x255618: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25561c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x25561cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255620: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x255620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x255624: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x255624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x255628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x255628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25562c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x255630: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x255630u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x255634: 0x30467fff  andi        $a2, $v0, 0x7FFF
    ctx->pc = 0x255634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x255638: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x255638u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x25563c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25563Cu;
    {
        const bool branch_taken_0x25563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25563c) {
            ctx->pc = 0x255670u;
            return;
        }
    }
    ctx->pc = 0x255644u;
}
