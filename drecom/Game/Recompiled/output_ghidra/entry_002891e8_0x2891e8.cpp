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

// Function: entry_002891e8
// Address: 0x2891e8 - 0x289278
void entry_002891e8_0x2891e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002891e8_0x2891e8");
#endif

    ctx->pc = 0x2891e8u;

    // 0x2891e8: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2891e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2891ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2891ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2891f0: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x2891f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x2891f4: 0x34c85556  ori         $t0, $a2, 0x5556
    ctx->pc = 0x2891f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x2891f8: 0x1070018  mult        $zero, $t0, $a3
    ctx->pc = 0x2891f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2891fc: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x2891fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x289200: 0x0  nop
    ctx->pc = 0x289200u;
    // NOP
    // 0x289204: 0x4810  mfhi        $t1
    ctx->pc = 0x289204u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x289208: 0x1285821  addu        $t3, $t1, $t0
    ctx->pc = 0x289208u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x28920c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x28920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x289210: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x289210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289214: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x289214u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x289218: 0x35095556  ori         $t1, $t0, 0x5556
    ctx->pc = 0x289218u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x28921c: 0x1230018  mult        $zero, $t1, $v1
    ctx->pc = 0x28921cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289220: 0x357c2  srl         $t2, $v1, 31
    ctx->pc = 0x289220u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x289224: 0x0  nop
    ctx->pc = 0x289224u;
    // NOP
    // 0x289228: 0x6010  mfhi        $t4
    ctx->pc = 0x289228u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x28922c: 0x18a3021  addu        $a2, $t4, $t2
    ctx->pc = 0x28922cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x289230: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x289230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x289234: 0x1633825  or          $a3, $t3, $v1
    ctx->pc = 0x289234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x289238: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x289238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28923c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x28923cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289240: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x289240u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x289244: 0x35065556  ori         $a2, $t0, 0x5556
    ctx->pc = 0x289244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x289248: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x289248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28924c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x28924cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x289250: 0x0  nop
    ctx->pc = 0x289250u;
    // NOP
    // 0x289254: 0x5010  mfhi        $t2
    ctx->pc = 0x289254u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x289258: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x289258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x28925c: 0x24c00  sll         $t1, $v0, 16
    ctx->pc = 0x28925cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x289260: 0x1271825  or          $v1, $t1, $a3
    ctx->pc = 0x289260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x289264: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x289264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289268: 0x74e00  sll         $t1, $a3, 24
    ctx->pc = 0x289268u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x28926c: 0x1231025  or          $v0, $t1, $v1
    ctx->pc = 0x28926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x289270: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x289270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289274: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x289274u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x289278u;
}
