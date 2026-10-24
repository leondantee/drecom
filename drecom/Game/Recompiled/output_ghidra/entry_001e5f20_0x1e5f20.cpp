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

// Function: entry_001e5f20
// Address: 0x1e5f20 - 0x1e5fb0
void entry_001e5f20_0x1e5f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5f20_0x1e5f20");
#endif

    ctx->pc = 0x1e5f20u;

    // 0x1e5f20: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e5f24: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e5f24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e5f28: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f2c: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x1e5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e5f30: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5f30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f34: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5f34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5f38: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5f3c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e5f40: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f44: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1e5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e5f48: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5f48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f4c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5f50: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5f54: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e5f58: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f5c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1e5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e5f60: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5f60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f64: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5f64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5f68: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f6c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1e5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e5f70: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5f70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f74: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5f74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5f78: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5f7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e5f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e5f80: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e5f80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5f84: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e5f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5f88: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e5f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e5f8c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5F8Cu;
    {
        const bool branch_taken_0x1e5f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e5f8c) {
            ctx->pc = 0x1E5FB0u;
            return;
        }
    }
    ctx->pc = 0x1E5F94u;
    // 0x1e5f94: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e5f94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5f98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5f9c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e5fa0: 0x906301b0  lbu         $v1, 0x1B0($v1)
    ctx->pc = 0x1e5fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1e5fa4: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1E5FA4u;
    {
        const bool branch_taken_0x1e5fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5fa4) {
            ctx->pc = 0x1E6088u;
            return;
        }
    }
    ctx->pc = 0x1E5FACu;
    // 0x1e5fac: 0x0  nop
    ctx->pc = 0x1e5facu;
    // NOP
    ctx->pc = 0x1e5fb0u;
}
