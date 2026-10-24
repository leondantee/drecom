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

// Function: entry_0025a9f0
// Address: 0x25a9f0 - 0x25aa50
void entry_0025a9f0_0x25a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a9f0_0x25a9f0");
#endif

    switch (ctx->pc) {
        case 0x25aa2cu: goto label_25aa2c;
        default: break;
    }

    ctx->pc = 0x25a9f0u;

label_25a9f0:
    // 0x25a9f0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x25a9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x25a9f4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x25a9f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a9f8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9fc: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x25a9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25aa00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25aa04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25aa08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25aa0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25aa10: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25aa14: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x25aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x25aa18: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x25aa18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25aa1c: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x25aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x25aa20: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x25aa20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25aa24: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25AA24u;
    SET_GPR_U32(ctx, 31, 0x25AA2Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25AA2Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25AA2Cu) { return; }
    ctx->pc = 0x25AA2Cu;
label_25aa2c:
    // 0x25aa2c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x25aa2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25aa30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa34: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x25aa34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x25aa38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25aa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25aa3c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x25aa3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25aa40: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x25AA40u;
    {
        const bool branch_taken_0x25aa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25aa40) {
            ctx->pc = 0x25A9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a9f0;
        }
    }
    ctx->pc = 0x25AA48u;
    // 0x25aa48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25AA48u;
    {
        const bool branch_taken_0x25aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aa48) {
            ctx->pc = 0x25AA64u;
            return;
        }
    }
    ctx->pc = 0x25AA50u;
}
