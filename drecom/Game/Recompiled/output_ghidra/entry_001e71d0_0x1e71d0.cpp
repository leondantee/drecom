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

// Function: entry_001e71d0
// Address: 0x1e71d0 - 0x1e7200
void entry_001e71d0_0x1e71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e71d0_0x1e71d0");
#endif

    ctx->pc = 0x1e71d0u;

    // 0x1e71d0: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e71d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e71d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e71d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e71d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e71d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e71dc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E71DCu;
    {
        const bool branch_taken_0x1e71dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e71dc) {
            ctx->pc = 0x1E7200u;
            return;
        }
    }
    ctx->pc = 0x1E71E4u;
    // 0x1e71e4: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e71e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e71e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e71e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e71ec: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e71ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e71f0: 0x90630220  lbu         $v1, 0x220($v1)
    ctx->pc = 0x1e71f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x1e71f4: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1E71F4u;
    {
        const bool branch_taken_0x1e71f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e71f4) {
            ctx->pc = 0x1E7320u;
            return;
        }
    }
    ctx->pc = 0x1E71FCu;
    // 0x1e71fc: 0x0  nop
    ctx->pc = 0x1e71fcu;
    // NOP
    ctx->pc = 0x1e7200u;
}
