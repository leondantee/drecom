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

// Function: entry_00287c10
// Address: 0x287c10 - 0x287cb0
void entry_00287c10_0x287c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287c10_0x287c10");
#endif

    ctx->pc = 0x287c10u;

    // 0x287c10: 0x8e465dc0  lw          $a2, 0x5DC0($s2)
    ctx->pc = 0x287c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x287c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x287c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287c18: 0x14c30025  bne         $a2, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x287C18u;
    {
        const bool branch_taken_0x287c18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x287c18) {
            ctx->pc = 0x287CB0u;
            return;
        }
    }
    ctx->pc = 0x287C20u;
    // 0x287c20: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x287c20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287c24: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x287c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287c28: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x287c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x287c2c: 0x344b5556  ori         $t3, $v0, 0x5556
    ctx->pc = 0x287c2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x287c30: 0x1680018  mult        $zero, $t3, $t0
    ctx->pc = 0x287c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287c34: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x287c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x287c38: 0x0  nop
    ctx->pc = 0x287c38u;
    // NOP
    // 0x287c3c: 0x3010  mfhi        $a2
    ctx->pc = 0x287c3cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x287c40: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x287c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x287c44: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x287c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287c48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287c4c: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x287c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x287c50: 0x34e85556  ori         $t0, $a3, 0x5556
    ctx->pc = 0x287c50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x287c54: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x287c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287c58: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x287c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x287c5c: 0x0  nop
    ctx->pc = 0x287c5cu;
    // NOP
    // 0x287c60: 0x3010  mfhi        $a2
    ctx->pc = 0x287c60u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x287c64: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x287c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x287c68: 0x65200  sll         $t2, $a2, 8
    ctx->pc = 0x287c68u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x287c6c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x287c6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x287c70: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x287c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287c74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287c78: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x287c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x287c7c: 0x34855556  ori         $a1, $a0, 0x5556
    ctx->pc = 0x287c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x287c80: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x287c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287c84: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x287c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x287c88: 0x0  nop
    ctx->pc = 0x287c88u;
    // NOP
    // 0x287c8c: 0x3810  mfhi        $a3
    ctx->pc = 0x287c8cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x287c90: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x287c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x287c94: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x287c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x287c98: 0x893025  or          $a2, $a0, $t1
    ctx->pc = 0x287c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x287c9c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x287c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x287ca0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x287ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x287ca4: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x287ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x287ca8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x287ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287cac: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x287cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x287cb0u;
}
