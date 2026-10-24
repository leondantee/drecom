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

// Function: caseD_0
// Address: 0x2328c8 - 0x232940
void caseD_0_0x2328c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2328c8");
#endif

    ctx->pc = 0x2328c8u;

    // 0x2328c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2328c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2328cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2328ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2328d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2328d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2328d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2328d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2328d8: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x2328d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2328dc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2328dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2328e0: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x2328e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x2328e4: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x2328e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2328e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2328e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2328ec: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2328ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2328f0: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x2328f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2328f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2328f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2328f8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2328f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2328fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2328fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232900: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232904: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x232904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x232908: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x232908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23290c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23290cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232910: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232914: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x232914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x232918: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x232918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x23291c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23291cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232920: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232924: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x232924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x232928: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x232928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x23292c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23292cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232930: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232934: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x232934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x232938: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23293c: 0xac4013fc  sw          $zero, 0x13FC($v0)
    ctx->pc = 0x23293cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5116), GPR_U32(ctx, 0));
    ctx->pc = 0x232940u;
}
