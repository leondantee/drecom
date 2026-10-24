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

// Function: entry_002709ec
// Address: 0x2709ec - 0x270a10
void entry_002709ec_0x2709ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002709ec_0x2709ec");
#endif

    ctx->pc = 0x2709ecu;

    // 0x2709ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709f0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2709f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2709f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2709f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2709f8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2709f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2709fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2709FCu;
    {
        const bool branch_taken_0x2709fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709fc) {
            ctx->pc = 0x270A10u;
            return;
        }
    }
    ctx->pc = 0x270A04u;
    // 0x270a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270a08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a0c: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x270a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
    ctx->pc = 0x270a10u;
}
