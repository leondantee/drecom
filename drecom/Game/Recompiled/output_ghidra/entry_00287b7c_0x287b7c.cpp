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

// Function: entry_00287b7c
// Address: 0x287b7c - 0x287c10
void entry_00287b7c_0x287b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287b7c_0x287b7c");
#endif

    ctx->pc = 0x287b7cu;

    // 0x287b7c: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x287b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287b80: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x287b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287b84: 0x3c0c5555  lui         $t4, 0x5555
    ctx->pc = 0x287b84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)21845 << 16));
    // 0x287b88: 0x358a5556  ori         $t2, $t4, 0x5556
    ctx->pc = 0x287b88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)21846);
    // 0x287b8c: 0x1490018  mult        $zero, $t2, $t1
    ctx->pc = 0x287b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287b90: 0x937c2  srl         $a2, $t1, 31
    ctx->pc = 0x287b90u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x287b94: 0x0  nop
    ctx->pc = 0x287b94u;
    // NOP
    // 0x287b98: 0x1810  mfhi        $v1
    ctx->pc = 0x287b98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287b9c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x287b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x287ba0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x287ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287ba4: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x287ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287ba8: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x287ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x287bac: 0x35065556  ori         $a2, $t0, 0x5556
    ctx->pc = 0x287bacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x287bb0: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x287bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287bb4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x287bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x287bb8: 0x0  nop
    ctx->pc = 0x287bb8u;
    // NOP
    // 0x287bbc: 0x5010  mfhi        $t2
    ctx->pc = 0x287bbcu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x287bc0: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x287bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x287bc4: 0x24a00  sll         $t1, $v0, 8
    ctx->pc = 0x287bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x287bc8: 0xe91825  or          $v1, $a3, $t1
    ctx->pc = 0x287bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x287bcc: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x287bccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287bd0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x287bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287bd4: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x287bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x287bd8: 0x35025556  ori         $v0, $t0, 0x5556
    ctx->pc = 0x287bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x287bdc: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x287bdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287be0: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x287be0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x287be4: 0x0  nop
    ctx->pc = 0x287be4u;
    // NOP
    // 0x287be8: 0x3010  mfhi        $a2
    ctx->pc = 0x287be8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x287bec: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x287becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x287bf0: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x287bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x287bf4: 0xe34825  or          $t1, $a3, $v1
    ctx->pc = 0x287bf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x287bf8: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x287bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x287bfc: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x287bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x287c00: 0x691025  or          $v0, $v1, $t1
    ctx->pc = 0x287c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x287c04: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x287c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287c08: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x287c08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x287c0c: 0x0  nop
    ctx->pc = 0x287c0cu;
    // NOP
    ctx->pc = 0x287c10u;
}
