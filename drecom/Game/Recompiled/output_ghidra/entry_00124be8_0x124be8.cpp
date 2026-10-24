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

// Function: entry_00124be8
// Address: 0x124be8 - 0x124c40
void entry_00124be8_0x124be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124be8_0x124be8");
#endif

    ctx->pc = 0x124be8u;

    // 0x124be8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124bec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124bf0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x124bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x124bf4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124bf8: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x124BF8u;
    {
        const bool branch_taken_0x124bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124bf8) {
            ctx->pc = 0x124DE8u;
            return;
        }
    }
    ctx->pc = 0x124C00u;
    // 0x124c00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c04: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x124c04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x124c08: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x124c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x124c0c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x124c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x124c10: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x124C10u;
    {
        const bool branch_taken_0x124c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124c10) {
            ctx->pc = 0x124DE8u;
            return;
        }
    }
    ctx->pc = 0x124C18u;
    // 0x124c18: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x124c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x124c1c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x124c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x124c20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x124C20u;
    {
        const bool branch_taken_0x124c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c20) {
            ctx->pc = 0x124C40u;
            return;
        }
    }
    ctx->pc = 0x124C28u;
    // 0x124c28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c2c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x124c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x124c30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x124c34: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x124c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x124c38: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x124C38u;
    {
        const bool branch_taken_0x124c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c38) {
            ctx->pc = 0x124DE8u;
            return;
        }
    }
    ctx->pc = 0x124C40u;
}
