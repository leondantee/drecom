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

// Function: entry_00286c60
// Address: 0x286c60 - 0x286d00
void entry_00286c60_0x286c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286c60_0x286c60");
#endif

    ctx->pc = 0x286c60u;

    // 0x286c60: 0x8e435dc0  lw          $v1, 0x5DC0($s2)
    ctx->pc = 0x286c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x286c64: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x286c64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286c68: 0x146a0025  bne         $v1, $t2, . + 4 + (0x25 << 2)
    ctx->pc = 0x286C68u;
    {
        const bool branch_taken_0x286c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x286c68) {
            ctx->pc = 0x286D00u;
            return;
        }
    }
    ctx->pc = 0x286C70u;
    // 0x286c70: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x286c74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x286c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286c78: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x286c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x286c7c: 0x34ab5556  ori         $t3, $a1, 0x5556
    ctx->pc = 0x286c7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x286c80: 0x1660018  mult        $zero, $t3, $a2
    ctx->pc = 0x286c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286c84: 0x64fc2  srl         $t1, $a2, 31
    ctx->pc = 0x286c84u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x286c88: 0x0  nop
    ctx->pc = 0x286c88u;
    // NOP
    // 0x286c8c: 0x3010  mfhi        $a2
    ctx->pc = 0x286c8cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x286c90: 0xc92021  addu        $a0, $a2, $t1
    ctx->pc = 0x286c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x286c94: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x286c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x286c98: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x286c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286c9c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x286c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x286ca0: 0x34685556  ori         $t0, $v1, 0x5556
    ctx->pc = 0x286ca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x286ca4: 0x1020018  mult        $zero, $t0, $v0
    ctx->pc = 0x286ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286ca8: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x286ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x286cac: 0x0  nop
    ctx->pc = 0x286cacu;
    // NOP
    // 0x286cb0: 0x3010  mfhi        $a2
    ctx->pc = 0x286cb0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x286cb4: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x286cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x286cb8: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x286cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x286cbc: 0x834825  or          $t1, $a0, $v1
    ctx->pc = 0x286cbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x286cc0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x286cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x286cc4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286cc8: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x286cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x286ccc: 0x34e55556  ori         $a1, $a3, 0x5556
    ctx->pc = 0x286cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x286cd0: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x286cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286cd4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x286cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x286cd8: 0x0  nop
    ctx->pc = 0x286cd8u;
    // NOP
    // 0x286cdc: 0x2010  mfhi        $a0
    ctx->pc = 0x286cdcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x286ce0: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x286ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x286ce4: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x286ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x286ce8: 0x693825  or          $a3, $v1, $t1
    ctx->pc = 0x286ce8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x286cec: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x286cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x286cf0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x286cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x286cf4: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x286cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x286cf8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x286cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x286cfc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x286cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x286d00u;
}
