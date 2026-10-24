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

// Function: entry_00256ffc
// Address: 0x256ffc - 0x257028
void entry_00256ffc_0x256ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256ffc_0x256ffc");
#endif

    ctx->pc = 0x256ffcu;

    // 0x256ffc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x256ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x257000: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x257000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x257004: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x257004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x257008: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257008u;
    {
        const bool branch_taken_0x257008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257008) {
            ctx->pc = 0x257028u;
            return;
        }
    }
    ctx->pc = 0x257010u;
    // 0x257010: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x257010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x257014: 0x3443080b  ori         $v1, $v0, 0x80B
    ctx->pc = 0x257014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2059);
    // 0x257018: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25701c: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x25701cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x257020: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x257020u;
    {
        const bool branch_taken_0x257020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257020) {
            ctx->pc = 0x257038u;
            return;
        }
    }
    ctx->pc = 0x257028u;
}
