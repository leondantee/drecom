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

// Function: entry_0021cdcc
// Address: 0x21cdcc - 0x21cdec
void entry_0021cdcc_0x21cdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cdcc_0x21cdcc");
#endif

    ctx->pc = 0x21cdccu;

    // 0x21cdcc: 0x93a200c8  lbu         $v0, 0xC8($sp)
    ctx->pc = 0x21cdccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21cdd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21cdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21cdd4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CDD4u;
    {
        const bool branch_taken_0x21cdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cdd4) {
            ctx->pc = 0x21CDECu;
            return;
        }
    }
    ctx->pc = 0x21CDDCu;
    // 0x21cddc: 0x24140034  addiu       $s4, $zero, 0x34
    ctx->pc = 0x21cddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x21cde0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x21cde0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21cde4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21CDE4u;
    {
        const bool branch_taken_0x21cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cde4) {
            ctx->pc = 0x21CDF4u;
            return;
        }
    }
    ctx->pc = 0x21CDECu;
}
