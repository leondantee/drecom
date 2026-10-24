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

// Function: entry_00111804
// Address: 0x111804 - 0x111838
void entry_00111804_0x111804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111804_0x111804");
#endif

    ctx->pc = 0x111804u;

    // 0x111804: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x111804u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x111808: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x111808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x11180c: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x11180cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x111810: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x111810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111814: 0xf32025  or          $a0, $a3, $s3
    ctx->pc = 0x111814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x111818: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x111818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x11181c: 0x85380b  movn        $a3, $a0, $a1
    ctx->pc = 0x11181cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x111820: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x111820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x111824: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x111824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111828: 0x6a03c  dsll32      $s4, $a2, 0
    ctx->pc = 0x111828u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11182c: 0x2828025  or          $s0, $s4, $v0
    ctx->pc = 0x11182cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x111830: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x111830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111834: 0x0  nop
    ctx->pc = 0x111834u;
    // NOP
    ctx->pc = 0x111838u;
}
