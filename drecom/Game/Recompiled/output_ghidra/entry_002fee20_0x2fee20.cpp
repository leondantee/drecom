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

// Function: entry_002fee20
// Address: 0x2fee20 - 0x2fee78
void entry_002fee20_0x2fee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fee20_0x2fee20");
#endif

    ctx->pc = 0x2fee20u;

    // 0x2fee20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fee24: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fee28: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x2fee28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2fee2c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FEE2Cu;
    {
        const bool branch_taken_0x2fee2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fee2c) {
            ctx->pc = 0x2FEE78u;
            return;
        }
    }
    ctx->pc = 0x2FEE34u;
    // 0x2fee34: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fee38: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fee3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee40: 0x0  nop
    ctx->pc = 0x2fee40u;
    // NOP
    // 0x2fee44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2fee44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fee48: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2fee48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2fee4c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2fee4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2fee50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee54: 0x0  nop
    ctx->pc = 0x2fee54u;
    // NOP
    // 0x2fee58: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2fee58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fee5c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2fee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2fee60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee64: 0x0  nop
    ctx->pc = 0x2fee64u;
    // NOP
    // 0x2fee68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fee68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fee6c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fee6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fee70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEE70u;
    {
        const bool branch_taken_0x2fee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fee70) {
            ctx->pc = 0x2FEE88u;
            return;
        }
    }
    ctx->pc = 0x2FEE78u;
}
