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

// Function: entry_0033be68
// Address: 0x33be68 - 0x33beb0
void entry_0033be68_0x33be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033be68_0x33be68");
#endif

    ctx->pc = 0x33be68u;

    // 0x33be68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33be6c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x33be6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x33be70: 0x8613000e  lh          $s3, 0xE($s0)
    ctx->pc = 0x33be70u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x33be74: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x33be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x33be78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33be78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33be7c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33be80: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x33be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33be84: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33be88: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x33be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x33be8c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x33be8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x33be90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33BE90u;
    {
        const bool branch_taken_0x33be90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33be90) {
            ctx->pc = 0x33BEB0u;
            return;
        }
    }
    ctx->pc = 0x33BE98u;
    // 0x33be98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33be98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33be9c: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x33be9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x33bea0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33bea4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x33bea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33bea8: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x33BEA8u;
    {
        const bool branch_taken_0x33bea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bea8) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BEB0u;
}
