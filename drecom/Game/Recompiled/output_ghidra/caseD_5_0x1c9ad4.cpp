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

// Function: caseD_5
// Address: 0x1c9ad4 - 0x1c9b20
void caseD_5_0x1c9ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1c9ad4");
#endif

    ctx->pc = 0x1c9ad4u;

    // 0x1c9ad4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9ad8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c9ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c9adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c9ae0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c9ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1c9ae4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C9AE4u;
    {
        const bool branch_taken_0x1c9ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ae4) {
            ctx->pc = 0x1C9B20u;
            return;
        }
    }
    ctx->pc = 0x1C9AECu;
    // 0x1c9aec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9af0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c9af4: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1c9af8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c9af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c9afc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c9afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1c9b00: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9b04: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c9b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c9b08: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1c9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1c9b0c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1c9b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c9b10: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1c9b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c9b14: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1c9b18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9B18u;
    {
        const bool branch_taken_0x1c9b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b18) {
            ctx->pc = 0x1C9B38u;
            return;
        }
    }
    ctx->pc = 0x1C9B20u;
}
