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
// Address: 0x27bc70 - 0x27bd60
void caseD_0_0x27bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x27bc70");
#endif

    switch (ctx->pc) {
        case 0x27bcccu: goto label_27bccc;
        default: break;
    }

    ctx->pc = 0x27bc70u;

    // 0x27bc70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27bc70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bc74: 0x0  nop
    ctx->pc = 0x27bc74u;
    // NOP
    // 0x27bc78: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x27bc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27bc7c: 0x3c024694  lui         $v0, 0x4694
    ctx->pc = 0x27bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18068 << 16));
    // 0x27bc80: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x27bc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x27bc84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bc88: 0x0  nop
    ctx->pc = 0x27bc88u;
    // NOP
    // 0x27bc8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27bc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27bc90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27bc90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bc94: 0x0  nop
    ctx->pc = 0x27bc94u;
    // NOP
    // 0x27bc98: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27bc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27bc9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27bca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bca4: 0x0  nop
    ctx->pc = 0x27bca4u;
    // NOP
    // 0x27bca8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27bca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27bcac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bcb0: 0x94221b44  lhu         $v0, 0x1B44($at)
    ctx->pc = 0x27bcb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B44u));
    // 0x27bcb4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27bcb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27bcb8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x27bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x27bcbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27bcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x27bcc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27bcc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27bcc4: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x27BCC4u;
    SET_GPR_U32(ctx, 31, 0x27BCCCu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x27BCC4u, 0x27BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCCCu;
label_27bccc:
    // 0x27bccc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x27bcd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bcd4: 0x0  nop
    ctx->pc = 0x27bcd4u;
    // NOP
    // 0x27bcd8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x27bcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x27bcdc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x27bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x27bce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bce4: 0x0  nop
    ctx->pc = 0x27bce4u;
    // NOP
    // 0x27bce8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x27bce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x27bcec: 0x3c024344  lui         $v0, 0x4344
    ctx->pc = 0x27bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17220 << 16));
    // 0x27bcf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bcf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bcf4: 0x0  nop
    ctx->pc = 0x27bcf4u;
    // NOP
    // 0x27bcf8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x27bcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x27bcfc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x27bd00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27bd04: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x27bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bd08: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27bd08u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x27bd0c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x27bd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x27bd10: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x27bd14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bd14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27bd18: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x27bd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bd1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27bd1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x27bd20: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x27bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x27bd24: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x27bd28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27bd2c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x27bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bd30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27bd30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x27bd34: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x27bd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x27bd38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27bd38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bd3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bd40: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B40u, _value); } while (0); }
    // 0x27bd44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bd48: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27bd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B48u));
    // 0x27bd4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27bd50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bd54: 0xa0221b48  sb          $v0, 0x1B48($at)
    ctx->pc = 0x27bd54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B48u, _value); } while (0);
    // 0x27bd58: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x27BD58u;
    {
        const bool branch_taken_0x27bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd58) {
            ctx->pc = 0x27BEA0u;
            return;
        }
    }
    ctx->pc = 0x27BD60u;
}
