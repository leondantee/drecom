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

// Function: entry_00108c4c
// Address: 0x108c4c - 0x108c64
void entry_00108c4c_0x108c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108c4c_0x108c4c");
#endif

    ctx->pc = 0x108c4cu;

    // 0x108c4c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x108c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x108c50: 0x102280  sll         $a0, $s0, 10
    ctx->pc = 0x108c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
    // 0x108c54: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x108c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x108c58: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x108c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x108c5c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x108c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x108c60: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x108c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->pc = 0x108c64u;
}
