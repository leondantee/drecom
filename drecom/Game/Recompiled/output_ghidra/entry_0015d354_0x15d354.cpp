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

// Function: entry_0015d354
// Address: 0x15d354 - 0x15d384
void entry_0015d354_0x15d354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d354_0x15d354");
#endif

    switch (ctx->pc) {
        case 0x15d37cu: goto label_15d37c;
        default: break;
    }

    ctx->pc = 0x15d354u;

    // 0x15d354: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d358: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d35c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d360: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d364: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d368: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d36c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x15d370: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15d370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d374: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D374u;
    SET_GPR_U32(ctx, 31, 0x15D37Cu);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D374u, 0x15D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D37Cu;
label_15d37c:
    // 0x15d37c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D37Cu;
    {
        const bool branch_taken_0x15d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d37c) {
            ctx->pc = 0x15D3A8u;
            return;
        }
    }
    ctx->pc = 0x15D384u;
}
