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

// Function: entry_001db1c0
// Address: 0x1db1c0 - 0x1db294
void entry_001db1c0_0x1db1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db1c0_0x1db1c0");
#endif

    ctx->pc = 0x1db1c0u;

    // 0x1db1c0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1db1c4: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x1db1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x1db1c8: 0xde650000  ld          $a1, 0x0($s3)
    ctx->pc = 0x1db1c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db1cc: 0x513fc  dsll32      $v0, $a1, 15
    ctx->pc = 0x1db1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1db1d0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1db1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1db1d4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1db1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db1d8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1db1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1db1dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1db1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1db1e0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1db1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db1e4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db1e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db1ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db1f0: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x1db1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x1db1f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db1f8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1db1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1db1fc: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x1db1fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1db200: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x1db200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1db204: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1db204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1db208: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1db208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db20c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1db20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1db210: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x1db210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1db214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db218: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1db218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1db21c: 0x90c50008  lbu         $a1, 0x8($a2)
    ctx->pc = 0x1db21cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1db220: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1db220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1db224: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1db224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1db228: 0x2403ff0f  addiu       $v1, $zero, -0xF1
    ctx->pc = 0x1db228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1db22c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x1db22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1db230: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1db230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1db234: 0xa0c20008  sb          $v0, 0x8($a2)
    ctx->pc = 0x1db234u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1db238: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1db238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1db23c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1db23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1db240: 0x90a40009  lbu         $a0, 0x9($a1)
    ctx->pc = 0x1db240u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x1db244: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1db244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1db248: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1db248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1db24c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1db24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1db250: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1db250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db254: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x1db254u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x1db258: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x1db258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1db25c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB25Cu;
    {
        const bool branch_taken_0x1db25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db25c) {
            ctx->pc = 0x1DB294u;
            return;
        }
    }
    ctx->pc = 0x1DB264u;
    // 0x1db264: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1db264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1db268: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1db268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1db26c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1db26cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db270: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1db270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1db274: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1db274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1db278: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1db278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1db27c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db280: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1db280u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1db284: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1db284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1db288: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1db288u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1db28c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DB28Cu;
    {
        const bool branch_taken_0x1db28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db28c) {
            ctx->pc = 0x1DB2C0u;
            return;
        }
    }
    ctx->pc = 0x1DB294u;
}
