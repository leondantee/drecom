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

// Function: entry_00289dc0
// Address: 0x289dc0 - 0x289e50
void entry_00289dc0_0x289dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289dc0_0x289dc0");
#endif

    ctx->pc = 0x289dc0u;

    // 0x289dc0: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x289dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289dc4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x289dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289dc8: 0x3c0b5555  lui         $t3, 0x5555
    ctx->pc = 0x289dc8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)21845 << 16));
    // 0x289dcc: 0x35695556  ori         $t1, $t3, 0x5556
    ctx->pc = 0x289dccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)21846);
    // 0x289dd0: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x289dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289dd4: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x289dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x289dd8: 0x0  nop
    ctx->pc = 0x289dd8u;
    // NOP
    // 0x289ddc: 0x4010  mfhi        $t0
    ctx->pc = 0x289ddcu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x289de0: 0x1034821  addu        $t1, $t0, $v1
    ctx->pc = 0x289de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x289de4: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x289de4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x289de8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x289de8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289dec: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x289decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x289df0: 0x34cc5556  ori         $t4, $a2, 0x5556
    ctx->pc = 0x289df0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x289df4: 0x1880018  mult        $zero, $t4, $t0
    ctx->pc = 0x289df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289df8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x289df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x289dfc: 0x0  nop
    ctx->pc = 0x289dfcu;
    // NOP
    // 0x289e00: 0x3810  mfhi        $a3
    ctx->pc = 0x289e00u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x289e04: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x289e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x289e08: 0x35a00  sll         $t3, $v1, 8
    ctx->pc = 0x289e08u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x289e0c: 0x12b3025  or          $a2, $t1, $t3
    ctx->pc = 0x289e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x289e10: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x289e10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x289e14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x289e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289e18: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x289e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x289e1c: 0x344a5556  ori         $t2, $v0, 0x5556
    ctx->pc = 0x289e1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x289e20: 0x1480018  mult        $zero, $t2, $t0
    ctx->pc = 0x289e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289e24: 0x84fc2  srl         $t1, $t0, 31
    ctx->pc = 0x289e24u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x289e28: 0x0  nop
    ctx->pc = 0x289e28u;
    // NOP
    // 0x289e2c: 0x1810  mfhi        $v1
    ctx->pc = 0x289e2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x289e30: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x289e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x289e34: 0x74c00  sll         $t1, $a3, 16
    ctx->pc = 0x289e34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x289e38: 0x1261025  or          $v0, $t1, $a2
    ctx->pc = 0x289e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x289e3c: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x289e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289e40: 0x83e00  sll         $a3, $t0, 24
    ctx->pc = 0x289e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x289e44: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x289e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x289e48: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x289e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289e4c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x289e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x289e50u;
}
