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

// Function: entry_0033856c
// Address: 0x33856c - 0x338590
void entry_0033856c_0x33856c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033856c_0x33856c");
#endif

    ctx->pc = 0x33856cu;

    // 0x33856c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x33856cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x338570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338574: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x338574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x338578: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x338578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33857c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338584: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x338584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x338588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x338588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33858c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33858cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x338590u;
}
