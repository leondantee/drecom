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

// Function: entry_0018bfc0
// Address: 0x18bfc0 - 0x18bff0
void entry_0018bfc0_0x18bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bfc0_0x18bfc0");
#endif

    ctx->pc = 0x18bfc0u;

    // 0x18bfc0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x18bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x18bfc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18BFC4u;
    {
        const bool branch_taken_0x18bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bfc4) {
            ctx->pc = 0x18BFF0u;
            return;
        }
    }
    ctx->pc = 0x18BFCCu;
    // 0x18bfcc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x18bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x18bfd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18bfd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18bfd4: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x18bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x18bfd8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18bfdc: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18bfdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18bfe0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x18bfe4: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18bfe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x18bfe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18BFE8u;
    {
        const bool branch_taken_0x18bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bfe8) {
            ctx->pc = 0x18BFFCu;
            return;
        }
    }
    ctx->pc = 0x18BFF0u;
}
