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

// Function: entry_0015d540
// Address: 0x15d540 - 0x15d570
void entry_0015d540_0x15d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d540_0x15d540");
#endif

    switch (ctx->pc) {
        case 0x15d568u: goto label_15d568;
        default: break;
    }

    ctx->pc = 0x15d540u;

    // 0x15d540: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d548: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d54c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d550: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d554: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d558: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x15d55c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15d55cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d560: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D560u;
    SET_GPR_U32(ctx, 31, 0x15D568u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D560u, 0x15D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D568u;
label_15d568:
    // 0x15d568: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D568u;
    {
        const bool branch_taken_0x15d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d568) {
            ctx->pc = 0x15D594u;
            return;
        }
    }
    ctx->pc = 0x15D570u;
}
