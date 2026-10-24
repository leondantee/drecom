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

// Function: entry_0032afe0
// Address: 0x32afe0 - 0x32b0a0
void entry_0032afe0_0x32afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032afe0_0x32afe0");
#endif

    ctx->pc = 0x32afe0u;

    // 0x32afe0: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32afe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32afe4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32afe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32afe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32afec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32afecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32aff0: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32aff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32aff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32aff8: 0x0  nop
    ctx->pc = 0x32aff8u;
    // NOP
    // 0x32affc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32affcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b000: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b004: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b00c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b010: 0xc46028f0  lwc1        $f0, 0x28F0($v1)
    ctx->pc = 0x32b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32b014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b018: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b01c: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32b020: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b024: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b024u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b02c: 0x0  nop
    ctx->pc = 0x32b02cu;
    // NOP
    // 0x32b030: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b034: 0x0  nop
    ctx->pc = 0x32b034u;
    // NOP
    // 0x32b038: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x32B038u;
    {
        const bool branch_taken_0x32b038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b038) {
            ctx->pc = 0x32B0A0u;
            return;
        }
    }
    ctx->pc = 0x32B040u;
    // 0x32b040: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b044: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b044u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b048: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32b048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32b04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b050: 0x0  nop
    ctx->pc = 0x32b050u;
    // NOP
    // 0x32b054: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32b054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32b058: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b05c: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32b060: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b068: 0x0  nop
    ctx->pc = 0x32b068u;
    // NOP
    // 0x32b06c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b070: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b078: 0x0  nop
    ctx->pc = 0x32b078u;
    // NOP
    // 0x32b07c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x32b07cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32b080: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b084: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b084u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b088: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32b088u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b08c: 0x0  nop
    ctx->pc = 0x32b08cu;
    // NOP
    // 0x32b090: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b094: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32b098: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x32B098u;
    {
        const bool branch_taken_0x32b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b098) {
            ctx->pc = 0x32B0F4u;
            return;
        }
    }
    ctx->pc = 0x32B0A0u;
}
