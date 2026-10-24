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

// Function: entry_0018b3c4
// Address: 0x18b3c4 - 0x18b418
void entry_0018b3c4_0x18b3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b3c4_0x18b3c4");
#endif

    ctx->pc = 0x18b3c4u;

    // 0x18b3c4: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b3c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b3c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b3cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b3d0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x18b3d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x18b3d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b3d8: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18b3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18b3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b3e0: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x18b3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b3e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18b3e8: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x18b3e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x18b3ec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x18B3ECu;
    {
        const bool branch_taken_0x18b3ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b3ec) {
            ctx->pc = 0x18B418u;
            return;
        }
    }
    ctx->pc = 0x18B3F4u;
    // 0x18b3f4: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b3f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b3f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b3fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b400: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x18b400u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x18b404: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b408: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x18b408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x18b40c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b410: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x18b410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b414: 0x0  nop
    ctx->pc = 0x18b414u;
    // NOP
    ctx->pc = 0x18b418u;
}
