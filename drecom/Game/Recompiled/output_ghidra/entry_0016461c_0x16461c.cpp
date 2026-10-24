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

// Function: entry_0016461c
// Address: 0x16461c - 0x164630
void entry_0016461c_0x16461c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016461c_0x16461c");
#endif

    ctx->pc = 0x16461cu;

    // 0x16461c: 0x942501c0  lhu         $a1, 0x1C0($at)
    ctx->pc = 0x16461cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 448)));
    // 0x164620: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x164620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164624: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x164628: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x164628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16462c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16462cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->pc = 0x164630u;
}
