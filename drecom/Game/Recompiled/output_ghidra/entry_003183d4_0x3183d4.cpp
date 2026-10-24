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

// Function: entry_003183d4
// Address: 0x3183d4 - 0x31840c
void entry_003183d4_0x3183d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003183d4_0x3183d4");
#endif

    switch (ctx->pc) {
        case 0x3183ecu: goto label_3183ec;
        default: break;
    }

    ctx->pc = 0x3183d4u;

    // 0x3183d4: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x3183d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x3183d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3183d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3183dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3183dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3183e0: 0xe44012d0  swc1        $f0, 0x12D0($v0)
    ctx->pc = 0x3183e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4816), bits); }
    // 0x3183e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3183E4u;
    SET_GPR_U32(ctx, 31, 0x3183ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3183E4u, 0x3183ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183ECu;
label_3183ec:
    // 0x3183ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3183ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3183f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3183f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3183f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3183F4u;
    {
        const bool branch_taken_0x3183f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3183f4) {
            ctx->pc = 0x31840Cu;
            return;
        }
    }
    ctx->pc = 0x3183FCu;
    // 0x3183fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3183fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x318400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318404: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318408: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x318408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x31840cu;
}
