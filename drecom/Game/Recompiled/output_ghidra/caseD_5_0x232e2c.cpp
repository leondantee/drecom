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

// Function: caseD_5
// Address: 0x232e2c - 0x232e98
void caseD_5_0x232e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x232e2c");
#endif

    ctx->pc = 0x232e2cu;

    // 0x232e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x232e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232e30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232e34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x232e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x232e38: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x232e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x232e3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232e40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x232e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x232e44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232e48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x232e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x232e4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232e50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x232e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x232e54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x232e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x232e58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232e5c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x232e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x232e60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232e64: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x232e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x232e68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x232e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x232e6c: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x232e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x232e70: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x232e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x232e74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232e78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x232e78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x232e7c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x232e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x232e80: 0x2470ec70  addiu       $s0, $v1, -0x1390
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x232e84: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x232e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x232e88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232e8c: 0x0  nop
    ctx->pc = 0x232e8cu;
    // NOP
    // 0x232e90: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x232e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EED40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EED40u, _value); } while (0); }
    // 0x232e94: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x232e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EED44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EED44u, _value); } while (0); }
    ctx->pc = 0x232e98u;
}
