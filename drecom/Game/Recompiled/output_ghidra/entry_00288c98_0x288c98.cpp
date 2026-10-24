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

// Function: entry_00288c98
// Address: 0x288c98 - 0x288d28
void entry_00288c98_0x288c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00288c98_0x288c98");
#endif

    ctx->pc = 0x288c98u;

    // 0x288c98: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x288c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288c9c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x288c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288ca0: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x288ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x288ca4: 0x346b5556  ori         $t3, $v1, 0x5556
    ctx->pc = 0x288ca4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x288ca8: 0x1680018  mult        $zero, $t3, $t0
    ctx->pc = 0x288ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288cac: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x288cacu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x288cb0: 0x0  nop
    ctx->pc = 0x288cb0u;
    // NOP
    // 0x288cb4: 0x4810  mfhi        $t1
    ctx->pc = 0x288cb4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x288cb8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x288cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x288cbc: 0x8faa00d4  lw          $t2, 0xD4($sp)
    ctx->pc = 0x288cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288cc0: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x288cc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288cc4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x288cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x288cc8: 0x34665556  ori         $a2, $v1, 0x5556
    ctx->pc = 0x288cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x288ccc: 0xca0018  mult        $zero, $a2, $t2
    ctx->pc = 0x288cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288cd0: 0xa3fc2  srl         $a3, $t2, 31
    ctx->pc = 0x288cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x288cd4: 0x0  nop
    ctx->pc = 0x288cd4u;
    // NOP
    // 0x288cd8: 0x1810  mfhi        $v1
    ctx->pc = 0x288cd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x288cdc: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x288cdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x288ce0: 0xb3200  sll         $a2, $t3, 8
    ctx->pc = 0x288ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x288ce4: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x288ce4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x288ce8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x288ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288cec: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x288cecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288cf0: 0x3c095555  lui         $t1, 0x5555
    ctx->pc = 0x288cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21845 << 16));
    // 0x288cf4: 0x35225556  ori         $v0, $t1, 0x5556
    ctx->pc = 0x288cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)21846);
    // 0x288cf8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x288cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288cfc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x288cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x288d00: 0x0  nop
    ctx->pc = 0x288d00u;
    // NOP
    // 0x288d04: 0x3810  mfhi        $a3
    ctx->pc = 0x288d04u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x288d08: 0xe34821  addu        $t1, $a3, $v1
    ctx->pc = 0x288d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x288d0c: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x288d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x288d10: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x288d10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x288d14: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x288d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x288d18: 0x73600  sll         $a2, $a3, 24
    ctx->pc = 0x288d18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x288d1c: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x288d1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x288d20: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x288d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288d24: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x288d24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x288d28u;
}
