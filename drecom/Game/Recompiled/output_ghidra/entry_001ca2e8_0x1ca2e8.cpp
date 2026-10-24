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

// Function: entry_001ca2e8
// Address: 0x1ca2e8 - 0x1ca334
void entry_001ca2e8_0x1ca2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca2e8_0x1ca2e8");
#endif

    ctx->pc = 0x1ca2e8u;

    // 0x1ca2e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca2ec: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ca2ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ca2f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ca2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca2f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1ca2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1ca2f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CA2F8u;
    {
        const bool branch_taken_0x1ca2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2f8) {
            ctx->pc = 0x1CA334u;
            return;
        }
    }
    ctx->pc = 0x1CA300u;
    // 0x1ca300: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca304: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ca304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca308: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1ca30c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ca30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ca310: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ca310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ca314: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca318: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ca318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca31c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1ca31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1ca320: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ca320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca324: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ca324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ca328: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ca328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ca32c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA32Cu;
    {
        const bool branch_taken_0x1ca32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca32c) {
            ctx->pc = 0x1CA34Cu;
            return;
        }
    }
    ctx->pc = 0x1CA334u;
}
