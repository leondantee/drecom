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

// Function: entry_0015d0b4
// Address: 0x15d0b4 - 0x15d0e4
void entry_0015d0b4_0x15d0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d0b4_0x15d0b4");
#endif

    switch (ctx->pc) {
        case 0x15d0dcu: goto label_15d0dc;
        default: break;
    }

    ctx->pc = 0x15d0b4u;

    // 0x15d0b4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d0b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d0bc: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d0c0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d0c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d0c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d0cc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x15d0d0: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15d0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d0d4: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D0D4u;
    SET_GPR_U32(ctx, 31, 0x15D0DCu);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D0D4u, 0x15D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D0DCu;
label_15d0dc:
    // 0x15d0dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D0DCu;
    {
        const bool branch_taken_0x15d0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0dc) {
            ctx->pc = 0x15D108u;
            return;
        }
    }
    ctx->pc = 0x15D0E4u;
}
