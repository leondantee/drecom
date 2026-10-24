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

// Function: entry_00286bd0
// Address: 0x286bd0 - 0x286c60
void entry_00286bd0_0x286bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286bd0_0x286bd0");
#endif

    ctx->pc = 0x286bd0u;

    // 0x286bd0: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x286bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x286bd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x286bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286bd8: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x286bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x286bdc: 0x34a25556  ori         $v0, $a1, 0x5556
    ctx->pc = 0x286bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x286be0: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x286be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286be4: 0x927c2  srl         $a0, $t1, 31
    ctx->pc = 0x286be4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x286be8: 0x0  nop
    ctx->pc = 0x286be8u;
    // NOP
    // 0x286bec: 0x1810  mfhi        $v1
    ctx->pc = 0x286becu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x286bf0: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x286bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286bf4: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x286bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x286bf8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x286bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286bfc: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x286bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x286c00: 0x34665556  ori         $a2, $v1, 0x5556
    ctx->pc = 0x286c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x286c04: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x286c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286c08: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x286c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x286c0c: 0x0  nop
    ctx->pc = 0x286c0cu;
    // NOP
    // 0x286c10: 0x2010  mfhi        $a0
    ctx->pc = 0x286c10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x286c14: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x286c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286c18: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x286c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x286c1c: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x286c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x286c20: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x286c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x286c24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x286c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286c28: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x286c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x286c2c: 0x34865556  ori         $a2, $a0, 0x5556
    ctx->pc = 0x286c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x286c30: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x286c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286c34: 0x74fc2  srl         $t1, $a3, 31
    ctx->pc = 0x286c34u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x286c38: 0x0  nop
    ctx->pc = 0x286c38u;
    // NOP
    // 0x286c3c: 0x4010  mfhi        $t0
    ctx->pc = 0x286c3cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x286c40: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x286c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x286c44: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x286c44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x286c48: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x286c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x286c4c: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x286c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x286c50: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x286c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x286c54: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x286c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x286c58: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x286c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x286c5c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x286c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x286c60u;
}
