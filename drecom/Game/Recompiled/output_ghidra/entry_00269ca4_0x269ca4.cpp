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

// Function: entry_00269ca4
// Address: 0x269ca4 - 0x269d7c
void entry_00269ca4_0x269ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00269ca4_0x269ca4");
#endif

    switch (ctx->pc) {
        case 0x269d54u: goto label_269d54;
        default: break;
    }

    ctx->pc = 0x269ca4u;

    // 0x269ca4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269ca8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x269ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269cac: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x269cacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x269cb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x269cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269cb4: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x269cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x269cb8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x269cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x269cbc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x269cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x269cc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x269cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269cc4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x269cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x269cc8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x269cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x269ccc: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x269cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x269cd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269cd4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x269cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x269cd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x269cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x269cdc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x269cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x269ce0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269ce4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x269ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x269ce8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269cec: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x269cecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x269cf0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x269cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x269cf4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x269cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x269cf8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269cfc: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x269cfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x269d00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269d04: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x269d04u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269d08: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x269d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x269d0c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x269d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x269d10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269d14: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269d18: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x269d18u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269d1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x269d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269d20: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x269d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x269d24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269d28: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x269d28u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269d2c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x269d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x269d30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x269d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x269d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269d38: 0x0  nop
    ctx->pc = 0x269d38u;
    // NOP
    // 0x269d3c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x269d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x269d40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x269d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269d44: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x269d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x269d48: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x269d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269d4c: 0xc09a574  jal         func_2695D0
    ctx->pc = 0x269D4Cu;
    SET_GPR_U32(ctx, 31, 0x269D54u);
    ctx->pc = 0x2695D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2695D0u, 0x269D4Cu, 0x269D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D54u;
label_269d54:
    // 0x269d54: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x269d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x269d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269d5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269d60: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x269d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x269d64: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x269d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x269d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269d6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269d70: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x269d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x269d74: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x269D74u;
    {
        const bool branch_taken_0x269d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d74) {
            ctx->pc = 0x26A0A4u;
            return;
        }
    }
    ctx->pc = 0x269D7Cu;
}
