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

// Function: caseD_2
// Address: 0x277e04 - 0x277e9c
void caseD_2_0x277e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x277e04");
#endif

    ctx->pc = 0x277e04u;

    // 0x277e04: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x277e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277e08: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x277e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x277e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277e10: 0x0  nop
    ctx->pc = 0x277e10u;
    // NOP
    // 0x277e14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277e18: 0x0  nop
    ctx->pc = 0x277e18u;
    // NOP
    // 0x277e1c: 0x45000084  bc1f        . + 4 + (0x84 << 2)
    ctx->pc = 0x277E1Cu;
    {
        const bool branch_taken_0x277e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277e1c) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277E24u;
    // 0x277e24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277e28: 0x0  nop
    ctx->pc = 0x277e28u;
    // NOP
    // 0x277e2c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x277e30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277e34: 0x0  nop
    ctx->pc = 0x277e34u;
    // NOP
    // 0x277e38: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x277e3c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x277e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x277e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277e44: 0x0  nop
    ctx->pc = 0x277e44u;
    // NOP
    // 0x277e48: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x277e4c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x277e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x277e50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x277e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x277e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277e58: 0x0  nop
    ctx->pc = 0x277e58u;
    // NOP
    // 0x277e5c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x277e60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277e64: 0x0  nop
    ctx->pc = 0x277e64u;
    // NOP
    // 0x277e68: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x277e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277e70: 0x0  nop
    ctx->pc = 0x277e70u;
    // NOP
    // 0x277e74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x277e78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277e7c: 0xac201a40  sw          $zero, 0x1A40($at)
    ctx->pc = 0x277e7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A40u, _value); } while (0);
    // 0x277e80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277e84: 0x8c221a38  lw          $v0, 0x1A38($at)
    ctx->pc = 0x277e84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A38u));
    // 0x277e88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277e8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277e90: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A38u, _value); } while (0);
    // 0x277e94: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x277E94u;
    {
        const bool branch_taken_0x277e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277e94) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277E9Cu;
}
