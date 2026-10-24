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

// Function: Warp_move
// Address: 0x269c30 - 0x26a0b8
void Warp_move_0x269c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Warp_move_0x269c30");
#endif

    switch (ctx->pc) {
        case 0x269d54u: goto label_269d54;
        case 0x269dc8u: goto label_269dc8;
        case 0x269e48u: goto label_269e48;
        case 0x269e98u: goto label_269e98;
        case 0x26a05cu: goto label_26a05c;
        default: break;
    }

    ctx->pc = 0x269c30u;

    // 0x269c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x269c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x269c34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x269c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x269c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269c3c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x269c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x269c40: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x269c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x269c44: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x269c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x269c48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x269c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269c4c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x269c4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x269c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x269c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x269c54: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x269c54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x269c58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269c5c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x269c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x269c60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x269c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x269c64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x269c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x269c68: 0x10830109  beq         $a0, $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x269C68u;
    {
        const bool branch_taken_0x269c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x269c68) {
            ctx->pc = 0x26A090u;
            goto label_26a090;
        }
    }
    ctx->pc = 0x269C70u;
    // 0x269c70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x269c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x269c74: 0x108300cd  beq         $a0, $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x269C74u;
    {
        const bool branch_taken_0x269c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x269c74) {
            ctx->pc = 0x269FACu;
            goto label_269fac;
        }
    }
    ctx->pc = 0x269C7Cu;
    // 0x269c7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x269c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269c80: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x269C80u;
    {
        const bool branch_taken_0x269c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x269c80) {
            ctx->pc = 0x269DFCu;
            goto label_269dfc;
        }
    }
    ctx->pc = 0x269C88u;
    // 0x269c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269c8c: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x269C8Cu;
    {
        const bool branch_taken_0x269c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x269c8c) {
            ctx->pc = 0x269D7Cu;
            goto label_269d7c;
        }
    }
    ctx->pc = 0x269C94u;
    // 0x269c94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269C94u;
    {
        const bool branch_taken_0x269c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c94) {
            ctx->pc = 0x269CA4u;
            goto label_269ca4;
        }
    }
    ctx->pc = 0x269C9Cu;
    // 0x269c9c: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x269C9Cu;
    {
        const bool branch_taken_0x269c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c9c) {
            ctx->pc = 0x26A0A4u;
            goto label_26a0a4;
        }
    }
    ctx->pc = 0x269CA4u;
label_269ca4:
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
            goto label_26a0a4;
        }
    }
    ctx->pc = 0x269D7Cu;
label_269d7c:
    // 0x269d7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269d80: 0x3c023f8b  lui         $v0, 0x3F8B
    ctx->pc = 0x269d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16267 << 16));
    // 0x269d84: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x269d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x269d88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269d8c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x269d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269d90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269d94: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x269d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x269d98: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x269d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269d9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x269d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269da0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269da4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x269da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269da8: 0xc4ac0028  lwc1        $f12, 0x28($a1)
    ctx->pc = 0x269da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269dac: 0xc48d002c  lwc1        $f13, 0x2C($a0)
    ctx->pc = 0x269dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x269db0: 0xc46e002c  lwc1        $f14, 0x2C($v1)
    ctx->pc = 0x269db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x269db4: 0xc44f002c  lwc1        $f15, 0x2C($v0)
    ctx->pc = 0x269db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x269db8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x269db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269dbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x269dbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269dc0: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x269DC0u;
    SET_GPR_U32(ctx, 31, 0x269DC8u);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x269DC0u, 0x269DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269DC8u;
label_269dc8:
    // 0x269dc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269dcc: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x269dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x269dd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x269dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x269dd4: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x269dd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x269dd8: 0x142000b2  bnez        $at, . + 4 + (0xB2 << 2)
    ctx->pc = 0x269DD8u;
    {
        const bool branch_taken_0x269dd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x269dd8) {
            ctx->pc = 0x26A0A4u;
            goto label_26a0a4;
        }
    }
    ctx->pc = 0x269DE0u;
    // 0x269de0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x269de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269de4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269de8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x269de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x269dec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269df0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x269df0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x269df4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x269DF4u;
    {
        const bool branch_taken_0x269df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269df4) {
            ctx->pc = 0x26A0A4u;
            goto label_26a0a4;
        }
    }
    ctx->pc = 0x269DFCu;
label_269dfc:
    // 0x269dfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e00: 0x3c023f8e  lui         $v0, 0x3F8E
    ctx->pc = 0x269e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16270 << 16));
    // 0x269e04: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x269e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x269e08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269e0c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x269e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269e10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269e14: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x269e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x269e18: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x269e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x269e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x269e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e28: 0xc4ac0028  lwc1        $f12, 0x28($a1)
    ctx->pc = 0x269e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269e2c: 0xc48d002c  lwc1        $f13, 0x2C($a0)
    ctx->pc = 0x269e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x269e30: 0xc46e002c  lwc1        $f14, 0x2C($v1)
    ctx->pc = 0x269e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x269e34: 0xc44f002c  lwc1        $f15, 0x2C($v0)
    ctx->pc = 0x269e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x269e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x269e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269e3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x269e3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269e40: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x269E40u;
    SET_GPR_U32(ctx, 31, 0x269E48u);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x269E40u, 0x269E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E48u;
label_269e48:
    // 0x269e48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269e4c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x269e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x269e50: 0xc4610194  lwc1        $f1, 0x194($v1)
    ctx->pc = 0x269e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269e54: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x269e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x269e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269e5c: 0x0  nop
    ctx->pc = 0x269e5cu;
    // NOP
    // 0x269e60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x269e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269e64: 0xe4600194  swc1        $f0, 0x194($v1)
    ctx->pc = 0x269e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 404), bits); }
    // 0x269e68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269e6c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x269e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x269e70: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x269e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269e74: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x269e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x269e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269e7c: 0x0  nop
    ctx->pc = 0x269e7cu;
    // NOP
    // 0x269e80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x269e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269e84: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x269e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x269e88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269e8c: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x269e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x269e90: 0xc056518  jal         func_159460
    ctx->pc = 0x269E90u;
    SET_GPR_U32(ctx, 31, 0x269E98u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x269E90u, 0x269E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E98u;
label_269e98:
    // 0x269e98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269e9c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x269e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x269ea0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x269ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x269ea4: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x269ea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x269ea8: 0x1420007e  bnez        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x269EA8u;
    {
        const bool branch_taken_0x269ea8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x269ea8) {
            ctx->pc = 0x26A0A4u;
            goto label_26a0a4;
        }
    }
    ctx->pc = 0x269EB0u;
    // 0x269eb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x269eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x269eb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269eb8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x269eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x269ebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269ec0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x269ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x269ec4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269ec8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x269ec8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ecc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x269eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x269ed0: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x269ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x269ed4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x269ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269ed8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269edc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x269edcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ee0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x269ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269ee4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x269ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x269ee8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269eec: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x269eecu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ef0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x269ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x269ef4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x269ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x269ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269efc: 0x0  nop
    ctx->pc = 0x269efcu;
    // NOP
    // 0x269f00: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x269f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x269f04: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x269f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x269f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269f0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269f10: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x269f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x269f14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269f18: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x269f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269f1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269f20: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x269f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x269f24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269f28: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x269f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269f2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269f30: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x269f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x269f34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269f38: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x269f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269f3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x269f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x269f40: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x269f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x269f44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x269f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x269f48: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x269f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x269f4c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x269f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x269f50: 0xa20010a8  sb          $zero, 0x10A8($s0)
    ctx->pc = 0x269f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x269f54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269f58: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x269f58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x269f5c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x269f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x269f60: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x269f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x269f64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269f68: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x269f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x269f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269f70: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x269f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x269f74: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x269f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x269f78: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x269f78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x269f7c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x269f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x269f80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x269f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x269f84: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x269f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x269f88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269f8c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x269f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x269f90: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x269f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x269f94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x269f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x269f98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x269f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x269f9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x269f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x269fa0: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x269fa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x269fa4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x269FA4u;
    {
        const bool branch_taken_0x269fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fa4) {
            ctx->pc = 0x26A0A4u;
            goto label_26a0a4;
        }
    }
    ctx->pc = 0x269FACu;
label_269fac:
    // 0x269fac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x269facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269fb0: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x269fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269fb4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x269fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x269fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269fbc: 0x0  nop
    ctx->pc = 0x269fbcu;
    // NOP
    // 0x269fc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x269fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269fc4: 0x0  nop
    ctx->pc = 0x269fc4u;
    // NOP
    // 0x269fc8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x269FC8u;
    {
        const bool branch_taken_0x269fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269fc8) {
            ctx->pc = 0x269FF4u;
            goto label_269ff4;
        }
    }
    ctx->pc = 0x269FD0u;
    // 0x269fd0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269fd4: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x269fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x269fd8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x269fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x269fdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269fe0: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x269fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269fe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269fe8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x269fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x269fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269FECu;
    {
        const bool branch_taken_0x269fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fec) {
            ctx->pc = 0x26A010u;
            goto label_26a010;
        }
    }
    ctx->pc = 0x269FF4u;
label_269ff4:
    // 0x269ff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269ff8: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x269ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x269ffc: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x269ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x26a000: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a004: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x26a004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a00c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x26a00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_26a010:
    // 0x26a010: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a014: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x26a014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x26a018: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x26a018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x26a01c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a020: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x26a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a024: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a028: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x26a028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x26a02c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a030: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26a030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a03c: 0xc4ac0028  lwc1        $f12, 0x28($a1)
    ctx->pc = 0x26a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a040: 0xc48d002c  lwc1        $f13, 0x2C($a0)
    ctx->pc = 0x26a040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a044: 0xc46e002c  lwc1        $f14, 0x2C($v1)
    ctx->pc = 0x26a044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26a048: 0xc44f002c  lwc1        $f15, 0x2C($v0)
    ctx->pc = 0x26a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x26a04c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a050: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26a050u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26a054: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x26A054u;
    SET_GPR_U32(ctx, 31, 0x26A05Cu);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x26A054u, 0x26A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A05Cu;
label_26a05c:
    // 0x26a05c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a060: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x26a060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a064: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26a064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26a068: 0x28610051  slti        $at, $v1, 0x51
    ctx->pc = 0x26a068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x26a06c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x26A06Cu;
    {
        const bool branch_taken_0x26a06c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a06c) {
            ctx->pc = 0x26A0A4u;
            goto label_26a0a4;
        }
    }
    ctx->pc = 0x26A074u;
    // 0x26a074: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26a074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26a078: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a07c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x26a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x26a080: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a084: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x26a084u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a088: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A088u;
    {
        const bool branch_taken_0x26a088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a088) {
            ctx->pc = 0x26A0A4u;
            goto label_26a0a4;
        }
    }
    ctx->pc = 0x26A090u;
label_26a090:
    // 0x26a090: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a094: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26a094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a098: 0x306400fd  andi        $a0, $v1, 0xFD
    ctx->pc = 0x26a098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x26a09c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a0a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26a0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_26a0a4:
    // 0x26a0a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x26a0a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a0ac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26a0acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x26A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A0B8u;
}
