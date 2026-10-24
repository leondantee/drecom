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

// Function: entry_002572cc
// Address: 0x2572cc - 0x257308
void entry_002572cc_0x2572cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002572cc_0x2572cc");
#endif

    ctx->pc = 0x2572ccu;

    // 0x2572cc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2572ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2572d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2572d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2572d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2572d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2572d8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2572D8u;
    {
        const bool branch_taken_0x2572d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2572d8) {
            ctx->pc = 0x257350u;
            return;
        }
    }
    ctx->pc = 0x2572E0u;
    // 0x2572e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2572e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2572e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2572e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2572e8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2572e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2572ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2572ECu;
    {
        const bool branch_taken_0x2572ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2572ec) {
            ctx->pc = 0x257308u;
            return;
        }
    }
    ctx->pc = 0x2572F4u;
    // 0x2572f4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2572f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2572f8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2572f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2572fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2572FCu;
    {
        const bool branch_taken_0x2572fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2572fc) {
            ctx->pc = 0x257320u;
            return;
        }
    }
    ctx->pc = 0x257304u;
    // 0x257304: 0x0  nop
    ctx->pc = 0x257304u;
    // NOP
    ctx->pc = 0x257308u;
}
