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

// Function: entry_0032cab4
// Address: 0x32cab4 - 0x32ccb0
void entry_0032cab4_0x32cab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032cab4_0x32cab4");
#endif

    switch (ctx->pc) {
        case 0x32cb44u: goto label_32cb44;
        case 0x32cb60u: goto label_32cb60;
        case 0x32cb94u: goto label_32cb94;
        case 0x32cbb0u: goto label_32cbb0;
        case 0x32cbe4u: goto label_32cbe4;
        case 0x32cc00u: goto label_32cc00;
        case 0x32cc34u: goto label_32cc34;
        case 0x32cc50u: goto label_32cc50;
        default: break;
    }

    ctx->pc = 0x32cab4u;

    // 0x32cab4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32cab8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32cabc: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x32cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x32cac0: 0x34433a14  ori         $v1, $v0, 0x3A14
    ctx->pc = 0x32cac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x32cac4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x32cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x32cac8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32cacc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32caccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cad0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x32cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x32cad4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32cad8: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x32cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x32cadc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x32cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32cae0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32cae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32cae4: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x32cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x32cae8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32caec: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32caecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32caf0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32caf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32caf8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cafc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32cafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x32cb00: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb04: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x32cb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x32cb08: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb0c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x32cb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x32cb10: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32cb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb14: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x32cb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x32cb18: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb1c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32cb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x32cb20: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb24: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x32cb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x32cb28: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb2c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x32cb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x32cb30: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32cb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb34: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x32cb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x32cb38: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x32cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cb3c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CB3Cu;
    SET_GPR_U32(ctx, 31, 0x32CB44u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CB3Cu, 0x32CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB44u;
label_32cb44:
    // 0x32cb44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cb48: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32cb4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cb50: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x32cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x32cb54: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x32cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cb58: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CB58u;
    SET_GPR_U32(ctx, 31, 0x32CB60u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CB58u, 0x32CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB60u;
label_32cb60:
    // 0x32cb60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32cb64: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32cb68: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cb6c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x32cb6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x32cb70: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32cb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cb74: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x32cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32cb78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cb7c: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32cb80: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x32cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32cb84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cb88: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x32cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cb8c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CB8Cu;
    SET_GPR_U32(ctx, 31, 0x32CB94u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CB8Cu, 0x32CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB94u;
label_32cb94:
    // 0x32cb94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cb98: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32cb9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cba0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x32cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x32cba4: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x32cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cba8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CBA8u;
    SET_GPR_U32(ctx, 31, 0x32CBB0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CBA8u, 0x32CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBB0u;
label_32cbb0:
    // 0x32cbb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32cbb4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32cbb8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cbbc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x32cbbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x32cbc0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32cbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cbc4: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32cbc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cbcc: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32cbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32cbd0: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x32cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x32cbd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cbd8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x32cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cbdc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CBDCu;
    SET_GPR_U32(ctx, 31, 0x32CBE4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CBDCu, 0x32CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBE4u;
label_32cbe4:
    // 0x32cbe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cbe8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32cbec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cbf0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x32cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x32cbf4: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x32cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cbf8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CBF8u;
    SET_GPR_U32(ctx, 31, 0x32CC00u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CBF8u, 0x32CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC00u;
label_32cc00:
    // 0x32cc00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32cc04: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32cc08: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cc0c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x32cc0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x32cc10: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32cc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cc14: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x32cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x32cc18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cc1c: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32cc20: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x32cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x32cc24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cc28: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x32cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cc2c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CC2Cu;
    SET_GPR_U32(ctx, 31, 0x32CC34u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CC2Cu, 0x32CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC34u;
label_32cc34:
    // 0x32cc34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cc38: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32cc3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cc40: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x32cc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x32cc44: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x32cc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cc48: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CC48u;
    SET_GPR_U32(ctx, 31, 0x32CC50u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CC48u, 0x32CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC50u;
label_32cc50:
    // 0x32cc50: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32cc54: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x32cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32cc58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cc5c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x32cc5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32cc60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32cc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32cc64: 0x2607004c  addiu       $a3, $s0, 0x4C
    ctx->pc = 0x32cc64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x32cc68: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x32cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x32cc6c: 0x3406fffc  ori         $a2, $zero, 0xFFFC
    ctx->pc = 0x32cc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32cc70: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x32cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x32cc74: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32cc78: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x32cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32cc7c: 0x2463e870  addiu       $v1, $v1, -0x1790
    ctx->pc = 0x32cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961264));
    // 0x32cc80: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x32cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x32cc84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32cc88: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x32cc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x32cc8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32cc90: 0x92622830  lbu         $v0, 0x2830($s3)
    ctx->pc = 0x32cc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10288)));
    // 0x32cc94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CC94u;
    {
        const bool branch_taken_0x32cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cc94) {
            ctx->pc = 0x32CCB0u;
            return;
        }
    }
    ctx->pc = 0x32CC9Cu;
    // 0x32cc9c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32cca0: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32cca4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32cca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32cca8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32CCA8u;
    SET_GPR_U32(ctx, 31, 0x32CCB0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32CCA8u, 0x32CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCB0u;
}
