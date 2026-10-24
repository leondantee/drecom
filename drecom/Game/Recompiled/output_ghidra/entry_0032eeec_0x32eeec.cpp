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

// Function: entry_0032eeec
// Address: 0x32eeec - 0x32ef80
void entry_0032eeec_0x32eeec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032eeec_0x32eeec");
#endif

    ctx->pc = 0x32eeecu;

    // 0x32eeec: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x32eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32eef0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32eef4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x32eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x32eef8: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x32eef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x32eefc: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x32eefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ef00: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x32ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32ef04: 0x0  nop
    ctx->pc = 0x32ef04u;
    // NOP
    // 0x32ef08: 0x1010  mfhi        $v0
    ctx->pc = 0x32ef08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32ef0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ef10: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x32ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32ef14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32ef18: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x32ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x32ef1c: 0x34c35556  ori         $v1, $a2, 0x5556
    ctx->pc = 0x32ef1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x32ef20: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x32ef20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ef24: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x32ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32ef28: 0x0  nop
    ctx->pc = 0x32ef28u;
    // NOP
    // 0x32ef2c: 0x1810  mfhi        $v1
    ctx->pc = 0x32ef2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32ef30: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x32ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ef34: 0x53200  sll         $a2, $a1, 8
    ctx->pc = 0x32ef34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x32ef38: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32ef38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32ef3c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x32ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32ef40: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x32ef40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32ef44: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x32ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x32ef48: 0x34a35556  ori         $v1, $a1, 0x5556
    ctx->pc = 0x32ef48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x32ef4c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x32ef4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ef50: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x32ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32ef54: 0x0  nop
    ctx->pc = 0x32ef54u;
    // NOP
    // 0x32ef58: 0x2010  mfhi        $a0
    ctx->pc = 0x32ef58u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32ef5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32ef60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32ef64: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x32ef64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32ef68: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x32ef68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32ef6c: 0x72600  sll         $a0, $a3, 24
    ctx->pc = 0x32ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x32ef70: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x32ef70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32ef74: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32ef78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32ef7c: 0x0  nop
    ctx->pc = 0x32ef7cu;
    // NOP
    ctx->pc = 0x32ef80u;
}
