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

// Function: entry_001d51f4
// Address: 0x1d51f4 - 0x1d5250
void entry_001d51f4_0x1d51f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d51f4_0x1d51f4");
#endif

    ctx->pc = 0x1d51f4u;

label_1d51f4:
    // 0x1d51f4: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x1d51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d51f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d51f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d51fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5200: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d5200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d5204: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d5204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d5208: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1d5208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1d520c: 0x24740020  addiu       $s4, $v1, 0x20
    ctx->pc = 0x1d520cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d5210: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x1d5210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d5214: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d5214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d5218: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d5218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d521c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d521cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d5220: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d5220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d5224: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1d5224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1d5228: 0x24750050  addiu       $s5, $v1, 0x50
    ctx->pc = 0x1d5228u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1d522c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1d522cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5230: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x1d5230u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x1d5234: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1d5234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5238: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x1d5238u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
    // 0x1d523c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d523cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d5240: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d5240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d5244: 0x1640ffeb  bnez        $s2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D5244u;
    {
        const bool branch_taken_0x1d5244 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5244) {
            ctx->pc = 0x1D51F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51f4;
        }
    }
    ctx->pc = 0x1D524Cu;
    // 0x1d524c: 0x0  nop
    ctx->pc = 0x1d524cu;
    // NOP
    ctx->pc = 0x1d5250u;
}
