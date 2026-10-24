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

// Function: entry_001b1420
// Address: 0x1b1420 - 0x1b1468
void entry_001b1420_0x1b1420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1420_0x1b1420");
#endif

    ctx->pc = 0x1b1420u;

    // 0x1b1420: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x1b1420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b1424: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x1b1424u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1428: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x1b1428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1b142c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b142cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1430: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b1430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1434: 0x3c38821  addu        $s1, $fp, $v1
    ctx->pc = 0x1b1434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1b1438: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1b1438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1b143c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1440: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b1440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1444: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1b1444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1b1448: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1b1448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b144c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b144cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b1450: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1b1450u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b1454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1458: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1b1458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1b145c: 0x8c700028  lw          $s0, 0x28($v1)
    ctx->pc = 0x1b145cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1b1460: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B1460u;
    {
        const bool branch_taken_0x1b1460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1460) {
            ctx->pc = 0x1B1490u;
            return;
        }
    }
    ctx->pc = 0x1B1468u;
}
