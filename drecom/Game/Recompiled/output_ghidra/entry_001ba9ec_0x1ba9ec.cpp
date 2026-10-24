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

// Function: entry_001ba9ec
// Address: 0x1ba9ec - 0x1baa64
void entry_001ba9ec_0x1ba9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba9ec_0x1ba9ec");
#endif

    ctx->pc = 0x1ba9ecu;

    // 0x1ba9ec: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba9f0: 0xace01b60  sw          $zero, 0x1B60($a3)
    ctx->pc = 0x1ba9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7008), GPR_U32(ctx, 0));
    // 0x1ba9f4: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1ba9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba9f8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1ba9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1ba9fc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1ba9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1baa00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1baa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1baa04: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BAA04u;
    {
        const bool branch_taken_0x1baa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa04) {
            ctx->pc = 0x1BAA6Cu;
            return;
        }
    }
    ctx->pc = 0x1BAA0Cu;
    // 0x1baa0c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1baa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1baa10: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1baa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1baa14: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1baa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1baa18: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1baa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1baa1c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1baa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1baa20: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1baa20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1baa24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1baa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1baa28: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x1baa28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x1baa2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1baa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1baa30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1baa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1baa34: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BAA34u;
    {
        const bool branch_taken_0x1baa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1baa34) {
            ctx->pc = 0x1BAA64u;
            return;
        }
    }
    ctx->pc = 0x1BAA3Cu;
    // 0x1baa3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1baa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baa40: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAA40u;
    {
        const bool branch_taken_0x1baa40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1baa40) {
            ctx->pc = 0x1BAA64u;
            return;
        }
    }
    ctx->pc = 0x1BAA48u;
    // 0x1baa48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1baa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1baa4c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAA4Cu;
    {
        const bool branch_taken_0x1baa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1baa4c) {
            ctx->pc = 0x1BAA6Cu;
            return;
        }
    }
    ctx->pc = 0x1BAA54u;
    // 0x1baa54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAA54u;
    {
        const bool branch_taken_0x1baa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa54) {
            ctx->pc = 0x1BAA6Cu;
            return;
        }
    }
    ctx->pc = 0x1BAA5Cu;
    // 0x1baa5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAA5Cu;
    {
        const bool branch_taken_0x1baa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa5c) {
            ctx->pc = 0x1BAA6Cu;
            return;
        }
    }
    ctx->pc = 0x1BAA64u;
}
