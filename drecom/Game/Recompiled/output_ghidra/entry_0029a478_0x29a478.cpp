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

// Function: entry_0029a478
// Address: 0x29a478 - 0x29a488
void entry_0029a478_0x29a478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a478_0x29a478");
#endif

    ctx->pc = 0x29a478u;

    // 0x29a478: 0x131042  srl         $v0, $s3, 1
    ctx->pc = 0x29a478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x29a47c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x29a47cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29a484: 0x0  nop
    ctx->pc = 0x29a484u;
    // NOP
    ctx->pc = 0x29a488u;
}
