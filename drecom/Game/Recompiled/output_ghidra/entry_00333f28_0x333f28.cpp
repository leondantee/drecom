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

// Function: entry_00333f28
// Address: 0x333f28 - 0x333fc8
void entry_00333f28_0x333f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333f28_0x333f28");
#endif

    ctx->pc = 0x333f28u;

    // 0x333f28: 0x8e445dc0  lw          $a0, 0x5DC0($s2)
    ctx->pc = 0x333f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x333f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333f30: 0x14820025  bne         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x333F30u;
    {
        const bool branch_taken_0x333f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x333f30) {
            ctx->pc = 0x333FC8u;
            return;
        }
    }
    ctx->pc = 0x333F38u;
    // 0x333f38: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x333f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x333f3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x333f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333f40: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x333f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x333f44: 0x34a45556  ori         $a0, $a1, 0x5556
    ctx->pc = 0x333f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x333f48: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x333f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333f4c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x333f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x333f50: 0x0  nop
    ctx->pc = 0x333f50u;
    // NOP
    // 0x333f54: 0x1810  mfhi        $v1
    ctx->pc = 0x333f54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333f58: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x333f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333f5c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x333f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x333f60: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x333f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333f64: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x333f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x333f68: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x333f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x333f6c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x333f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333f70: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x333f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x333f74: 0x0  nop
    ctx->pc = 0x333f74u;
    // NOP
    // 0x333f78: 0x3810  mfhi        $a3
    ctx->pc = 0x333f78u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x333f7c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x333f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x333f80: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x333f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x333f84: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x333f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x333f88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x333f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x333f8c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x333f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333f90: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x333f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x333f94: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x333f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x333f98: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x333f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333f9c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x333f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x333fa0: 0x0  nop
    ctx->pc = 0x333fa0u;
    // NOP
    // 0x333fa4: 0x1810  mfhi        $v1
    ctx->pc = 0x333fa4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333fa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x333fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333fac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x333facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333fb0: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x333fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x333fb4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x333fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x333fb8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x333fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x333fbc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x333fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333fc0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x333fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x333fc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x333fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x333fc8u;
}
