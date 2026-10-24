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

// Function: entry_00288d28
// Address: 0x288d28 - 0x288dc8
void entry_00288d28_0x288d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00288d28_0x288d28");
#endif

    ctx->pc = 0x288d28u;

    // 0x288d28: 0x8e495dc0  lw          $t1, 0x5DC0($s2)
    ctx->pc = 0x288d28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x288d2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x288d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288d30: 0x15260025  bne         $t1, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x288D30u;
    {
        const bool branch_taken_0x288d30 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        if (branch_taken_0x288d30) {
            ctx->pc = 0x288DC8u;
            return;
        }
    }
    ctx->pc = 0x288D38u;
    // 0x288d38: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x288d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288d3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288d40: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x288d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x288d44: 0x34ca5556  ori         $t2, $a2, 0x5556
    ctx->pc = 0x288d44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x288d48: 0x1430018  mult        $zero, $t2, $v1
    ctx->pc = 0x288d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288d4c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x288d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x288d50: 0x0  nop
    ctx->pc = 0x288d50u;
    // NOP
    // 0x288d54: 0x4010  mfhi        $t0
    ctx->pc = 0x288d54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x288d58: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x288d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x288d5c: 0x8fab00d4  lw          $t3, 0xD4($sp)
    ctx->pc = 0x288d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288d60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x288d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288d64: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x288d64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x288d68: 0x34c35556  ori         $v1, $a2, 0x5556
    ctx->pc = 0x288d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x288d6c: 0x6b0018  mult        $zero, $v1, $t3
    ctx->pc = 0x288d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288d70: 0xb4fc2  srl         $t1, $t3, 31
    ctx->pc = 0x288d70u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x288d74: 0x0  nop
    ctx->pc = 0x288d74u;
    // NOP
    // 0x288d78: 0x1810  mfhi        $v1
    ctx->pc = 0x288d78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x288d7c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x288d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x288d80: 0x24200  sll         $t0, $v0, 8
    ctx->pc = 0x288d80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x288d84: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x288d84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x288d88: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x288d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288d8c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x288d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288d90: 0x3c0a5555  lui         $t2, 0x5555
    ctx->pc = 0x288d90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)21845 << 16));
    // 0x288d94: 0x35465556  ori         $a2, $t2, 0x5556
    ctx->pc = 0x288d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21846);
    // 0x288d98: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x288d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288d9c: 0x34fc2  srl         $t1, $v1, 31
    ctx->pc = 0x288d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x288da0: 0x0  nop
    ctx->pc = 0x288da0u;
    // NOP
    // 0x288da4: 0x1810  mfhi        $v1
    ctx->pc = 0x288da4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x288da8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x288da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x288dac: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x288dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x288db0: 0xa72025  or          $a0, $a1, $a3
    ctx->pc = 0x288db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x288db4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x288db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x288db8: 0x33e00  sll         $a3, $v1, 24
    ctx->pc = 0x288db8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x288dbc: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x288dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x288dc0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x288dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288dc4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x288dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x288dc8u;
}
