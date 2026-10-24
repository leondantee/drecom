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

// Function: entry_001fb5f0
// Address: 0x1fb5f0 - 0x1fb628
void entry_001fb5f0_0x1fb5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb5f0_0x1fb5f0");
#endif

    ctx->pc = 0x1fb5f0u;

    // 0x1fb5f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb5f4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fb5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fb5f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb5fc: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fb5fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fb600: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FB600u;
    {
        const bool branch_taken_0x1fb600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb600) {
            ctx->pc = 0x1FB5B4u;
            return;
        }
    }
    ctx->pc = 0x1FB608u;
    // 0x1fb608: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb60c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb610: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fb610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb614: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1fb614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fb618: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb61c: 0xac640364  sw          $a0, 0x364($v1)
    ctx->pc = 0x1fb61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 868), GPR_U32(ctx, 4));
    // 0x1fb620: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x1FB620u;
    {
        const bool branch_taken_0x1fb620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb620) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FB628u;
}
