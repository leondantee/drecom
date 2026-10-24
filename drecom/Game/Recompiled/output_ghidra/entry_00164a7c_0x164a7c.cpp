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

// Function: entry_00164a7c
// Address: 0x164a7c - 0x164aa0
void entry_00164a7c_0x164a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a7c_0x164a7c");
#endif

    ctx->pc = 0x164a7cu;

    // 0x164a7c: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x164a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x164a80: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x164a80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a84: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x164a84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x164a88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a8c: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x164a8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x164a90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164a98: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a9c: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x164a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x164aa0u;
}
