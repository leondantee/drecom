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

// Function: entry_00266ec8
// Address: 0x266ec8 - 0x266ef8
void entry_00266ec8_0x266ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266ec8_0x266ec8");
#endif

    ctx->pc = 0x266ec8u;

    // 0x266ec8: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x266ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x266ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266ed0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x266ed4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266ED4u;
    {
        const bool branch_taken_0x266ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ed4) {
            ctx->pc = 0x266EF8u;
            return;
        }
    }
    ctx->pc = 0x266EDCu;
    // 0x266edc: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x266edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266ee0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x266ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x266ee4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x266ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x266ee8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x266ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x266eec: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266ef0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x266ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x266ef4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x266ef8u;
}
