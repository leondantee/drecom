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

// Function: entry_0018cb68
// Address: 0x18cb68 - 0x18cb94
void entry_0018cb68_0x18cb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cb68_0x18cb68");
#endif

    ctx->pc = 0x18cb68u;

    // 0x18cb68: 0x9202036b  lbu         $v0, 0x36B($s0)
    ctx->pc = 0x18cb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 875)));
    // 0x18cb6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cb70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18CB70u;
    {
        const bool branch_taken_0x18cb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb70) {
            ctx->pc = 0x18CBA0u;
            return;
        }
    }
    ctx->pc = 0x18CB78u;
    // 0x18cb78: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CB78u;
    {
        const bool branch_taken_0x18cb78 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cb78) {
            ctx->pc = 0x18CB94u;
            return;
        }
    }
    ctx->pc = 0x18CB80u;
    // 0x18cb80: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18cb84: 0xae020350  sw          $v0, 0x350($s0)
    ctx->pc = 0x18cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
    // 0x18cb88: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18cb88u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18cb8c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x18CB8Cu;
    {
        const bool branch_taken_0x18cb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb8c) {
            ctx->pc = 0x18CC78u;
            return;
        }
    }
    ctx->pc = 0x18CB94u;
}
