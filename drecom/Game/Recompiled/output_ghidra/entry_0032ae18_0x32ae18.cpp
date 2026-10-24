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

// Function: entry_0032ae18
// Address: 0x32ae18 - 0x32aed0
void entry_0032ae18_0x32ae18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ae18_0x32ae18");
#endif

    ctx->pc = 0x32ae18u;

    // 0x32ae18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ae1c: 0xa20328b9  sb          $v1, 0x28B9($s0)
    ctx->pc = 0x32ae1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ae20: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x32ae20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x32ae24: 0xa20328ba  sb          $v1, 0x28BA($s0)
    ctx->pc = 0x32ae24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10426), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ae28: 0xae0028bc  sw          $zero, 0x28BC($s0)
    ctx->pc = 0x32ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10428), GPR_U32(ctx, 0));
    // 0x32ae2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ae30: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32ae30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ae34: 0xae0028c4  sw          $zero, 0x28C4($s0)
    ctx->pc = 0x32ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 0));
    // 0x32ae38: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32ae3c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32ae40: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32ae44: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32ae48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32ae4c: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32ae50: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x32ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32ae54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32ae54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ae58: 0x0  nop
    ctx->pc = 0x32ae58u;
    // NOP
    // 0x32ae5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32ae5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32ae60: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ae60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ae64: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32ae68: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ae68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ae6c: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32ae6cu;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ae70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32ae70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ae74: 0x0  nop
    ctx->pc = 0x32ae74u;
    // NOP
    // 0x32ae78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32ae78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32ae7c: 0x0  nop
    ctx->pc = 0x32ae7cu;
    // NOP
    // 0x32ae80: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x32AE80u;
    {
        const bool branch_taken_0x32ae80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32ae80) {
            ctx->pc = 0x32AED0u;
            return;
        }
    }
    ctx->pc = 0x32AE88u;
    // 0x32ae88: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ae88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ae8c: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32ae8cu;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ae90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32ae94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32ae94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ae98: 0x0  nop
    ctx->pc = 0x32ae98u;
    // NOP
    // 0x32ae9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32ae9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32aea0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aea4: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32aea8: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32aeac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32aeacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32aeb0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aeb4: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aeb4u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32aeb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32aeb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32aebc: 0x0  nop
    ctx->pc = 0x32aebcu;
    // NOP
    // 0x32aec0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aec4: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32aec8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32AEC8u;
    {
        const bool branch_taken_0x32aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aec8) {
            ctx->pc = 0x32AF10u;
            return;
        }
    }
    ctx->pc = 0x32AED0u;
}
