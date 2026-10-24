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

// Function: entry_002a2188
// Address: 0x2a2188 - 0x2a2208
void entry_002a2188_0x2a2188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2188_0x2a2188");
#endif

    switch (ctx->pc) {
        case 0x2a2194u: goto label_2a2194;
        case 0x2a21a0u: goto label_2a21a0;
        default: break;
    }

    ctx->pc = 0x2a2188u;

    // 0x2a2188: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a2188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a218c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A218Cu;
    SET_GPR_U32(ctx, 31, 0x2A2194u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A218Cu, 0x2A2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2194u;
label_2a2194:
    // 0x2a2194: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a2194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2198: 0xc0aa380  jal         func_2A8E00
    ctx->pc = 0x2A2198u;
    SET_GPR_U32(ctx, 31, 0x2A21A0u);
    ctx->pc = 0x2A8E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E00u, 0x2A2198u, 0x2A21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A21A0u;
label_2a21a0:
    // 0x2a21a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a21a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a21ac: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A21ACu;
    {
        const bool branch_taken_0x2a21ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a21ac) {
            ctx->pc = 0x2A2208u;
            return;
        }
    }
    ctx->pc = 0x2A21B4u;
    // 0x2a21b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a21bc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2a21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a21c0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A21C0u;
    {
        const bool branch_taken_0x2a21c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a21c0) {
            ctx->pc = 0x2A2208u;
            return;
        }
    }
    ctx->pc = 0x2A21C8u;
    // 0x2a21c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a21c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a21cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a21d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a21d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a21d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a21d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a21dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a21e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a21e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a21e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a21ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a21f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a21f8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a21f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a21fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a21fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2200: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2204: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2a2204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    ctx->pc = 0x2a2208u;
}
