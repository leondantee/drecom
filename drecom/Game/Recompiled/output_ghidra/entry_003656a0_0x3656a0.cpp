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

// Function: entry_003656a0
// Address: 0x3656a0 - 0x3656e0
void entry_003656a0_0x3656a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003656a0_0x3656a0");
#endif

    ctx->pc = 0x3656a0u;

    // 0x3656a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3656a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3656a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3656a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3656a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3656ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3656acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3656b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3656B0u;
    {
        const bool branch_taken_0x3656b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3656b0) {
            ctx->pc = 0x3656E0u;
            return;
        }
    }
    ctx->pc = 0x3656B8u;
    // 0x3656b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3656b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3656bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3656c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3656c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3656c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3656c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3656c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3656C8u;
    {
        const bool branch_taken_0x3656c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3656c8) {
            ctx->pc = 0x3656E0u;
            return;
        }
    }
    ctx->pc = 0x3656D0u;
    // 0x3656d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3656d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3656d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3656d8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3656d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3656dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3656dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->pc = 0x3656e0u;
}
