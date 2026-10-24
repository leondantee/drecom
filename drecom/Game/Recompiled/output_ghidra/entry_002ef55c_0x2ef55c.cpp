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

// Function: entry_002ef55c
// Address: 0x2ef55c - 0x2ef584
void entry_002ef55c_0x2ef55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef55c_0x2ef55c");
#endif

    ctx->pc = 0x2ef55cu;

    // 0x2ef55c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef560: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ef560u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef564: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x2ef564u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x2ef568: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2ef568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2ef56c: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x2ef56cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ef570: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef574: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ef574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef578: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x2ef578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ef57c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2ef57cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ef580: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2ef580u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2ef584u;
}
