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

// Function: entry_002df7ac
// Address: 0x2df7ac - 0x2df808
void entry_002df7ac_0x2df7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df7ac_0x2df7ac");
#endif

    switch (ctx->pc) {
        case 0x2df7ccu: goto label_2df7cc;
        default: break;
    }

    ctx->pc = 0x2df7acu;

    // 0x2df7ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df7b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df7b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2df7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2df7b8: 0x2406050d  addiu       $a2, $zero, 0x50D
    ctx->pc = 0x2df7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
    // 0x2df7bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df7c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2df7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df7c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DF7C4u;
    SET_GPR_U32(ctx, 31, 0x2DF7CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DF7C4u, 0x2DF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF7CCu;
label_2df7cc:
    // 0x2df7cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df7d0: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2df7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2df7d4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2df7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2df7d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2df7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2df7dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2df7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df7e0: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2df7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x2df7e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df7e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2df7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2df7ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2df7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2df7f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2df7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df7f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF7F4u;
    {
        const bool branch_taken_0x2df7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df7f4) {
            ctx->pc = 0x2DF808u;
            return;
        }
    }
    ctx->pc = 0x2DF7FCu;
    // 0x2df7fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2df7fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df800: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df804: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2df804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x2df808u;
}
