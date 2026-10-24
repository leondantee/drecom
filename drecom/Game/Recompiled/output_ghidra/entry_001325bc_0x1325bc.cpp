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

// Function: entry_001325bc
// Address: 0x1325bc - 0x132614
void entry_001325bc_0x1325bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001325bc_0x1325bc");
#endif

    switch (ctx->pc) {
        case 0x1325dcu: goto label_1325dc;
        case 0x1325ecu: goto label_1325ec;
        default: break;
    }

    ctx->pc = 0x1325bcu;

    // 0x1325bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1325bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1325c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1325c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1325c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1325c8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1325c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1325cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1325ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1325d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1325d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1325d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1325D4u;
    SET_GPR_U32(ctx, 31, 0x1325DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1325D4u, 0x1325DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325DCu;
label_1325dc:
    // 0x1325dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1325dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1325e0: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1325e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1325e4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1325E4u;
    SET_GPR_U32(ctx, 31, 0x1325ECu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1325E4u, 0x1325ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325ECu;
label_1325ec:
    // 0x1325ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1325ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1325f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1325f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1325f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1325F4u;
    {
        const bool branch_taken_0x1325f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1325f4) {
            ctx->pc = 0x132614u;
            return;
        }
    }
    ctx->pc = 0x1325FCu;
    // 0x1325fc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1325fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x132600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132604: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132608: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x13260c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13260Cu;
    {
        const bool branch_taken_0x13260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13260c) {
            ctx->pc = 0x132624u;
            return;
        }
    }
    ctx->pc = 0x132614u;
}
