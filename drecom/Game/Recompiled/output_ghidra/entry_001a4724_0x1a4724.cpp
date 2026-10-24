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

// Function: entry_001a4724
// Address: 0x1a4724 - 0x1a474c
void entry_001a4724_0x1a4724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4724_0x1a4724");
#endif

    ctx->pc = 0x1a4724u;

    // 0x1a4724: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4728: 0x90630312  lbu         $v1, 0x312($v1)
    ctx->pc = 0x1a4728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 786)));
    // 0x1a472c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a472cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4730: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1a4730u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a4734: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4734u;
    {
        const bool branch_taken_0x1a4734 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a4734) {
            ctx->pc = 0x1A474Cu;
            return;
        }
    }
    ctx->pc = 0x1A473Cu;
    // 0x1a473c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4740: 0x90830312  lbu         $v1, 0x312($a0)
    ctx->pc = 0x1a4740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 786)));
    // 0x1a4744: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1a4744u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a4748: 0xa0830312  sb          $v1, 0x312($a0)
    ctx->pc = 0x1a4748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 786), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a474cu;
}
