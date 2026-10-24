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

// Function: entry_0028e7c0
// Address: 0x28e7c0 - 0x28e804
void entry_0028e7c0_0x28e7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e7c0_0x28e7c0");
#endif

    ctx->pc = 0x28e7c0u;

    // 0x28e7c0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e7c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e7c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e7cc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28E7CCu;
    {
        const bool branch_taken_0x28e7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e7cc) {
            ctx->pc = 0x28E804u;
            return;
        }
    }
    ctx->pc = 0x28E7D4u;
    // 0x28e7d4: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x28e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x28e7d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28e7dc: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x28e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x28e7e0: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x28e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x28e7e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e7e8: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x28e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x28e7ec: 0x2643002c  addiu       $v1, $s2, 0x2C
    ctx->pc = 0x28e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x28e7f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28e7f4: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x28e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x28e7f8: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x28e7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x28e7fc: 0x26450038  addiu       $a1, $s2, 0x38
    ctx->pc = 0x28e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x28e800: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x28e800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x28e804u;
}
