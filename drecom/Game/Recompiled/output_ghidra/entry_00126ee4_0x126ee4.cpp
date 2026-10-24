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

// Function: entry_00126ee4
// Address: 0x126ee4 - 0x126f0c
void entry_00126ee4_0x126ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126ee4_0x126ee4");
#endif

    ctx->pc = 0x126ee4u;

    // 0x126ee4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x126ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x126ee8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x126ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x126eec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126EECu;
    {
        const bool branch_taken_0x126eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126eec) {
            ctx->pc = 0x126F0Cu;
            return;
        }
    }
    ctx->pc = 0x126EF4u;
    // 0x126ef4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x126ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x126ef8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x126ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x126efc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x126efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x126f00: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x126f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x126f04: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x126F04u;
    {
        const bool branch_taken_0x126f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126f04) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x126F0Cu;
}
