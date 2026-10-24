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

// Function: entry_0028cf20
// Address: 0x28cf20 - 0x28d1ec
void entry_0028cf20_0x28cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cf20_0x28cf20");
#endif

    switch (ctx->pc) {
        case 0x28d008u: goto label_28d008;
        case 0x28d028u: goto label_28d028;
        case 0x28d064u: goto label_28d064;
        case 0x28d080u: goto label_28d080;
        case 0x28d0bcu: goto label_28d0bc;
        case 0x28d0d8u: goto label_28d0d8;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d128u: goto label_28d128;
        default: break;
    }

    ctx->pc = 0x28cf20u;

    // 0x28cf20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cf24: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28cf24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28cf28: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x28cf28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x28cf2c: 0x24e2e7d0  addiu       $v0, $a3, -0x1830
    ctx->pc = 0x28cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961104));
    // 0x28cf30: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x28cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x28cf34: 0x26034970  addiu       $v1, $s0, 0x4970
    ctx->pc = 0x28cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 18800));
    // 0x28cf38: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x28cf38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cf3c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28cf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28cf40: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x28cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x28cf44: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x28cf44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x28cf48: 0x34e21009  ori         $v0, $a3, 0x1009
    ctx->pc = 0x28cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4105);
    // 0x28cf4c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x28cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x28cf50: 0x24020730  addiu       $v0, $zero, 0x730
    ctx->pc = 0x28cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1840));
    // 0x28cf54: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x28cf54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28cf58: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x28cf5c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x28cf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x28cf60: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x28cf60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28cf64: 0xffc60008  sd          $a2, 0x8($fp)
    ctx->pc = 0x28cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 6));
    // 0x28cf68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28cf6c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x28cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x28cf70: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x28cf70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x28cf74: 0x34c3103b  ori         $v1, $a2, 0x103B
    ctx->pc = 0x28cf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4155);
    // 0x28cf78: 0xaee30004  sw          $v1, 0x4($s7)
    ctx->pc = 0x28cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
    // 0x28cf7c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28cf80: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x28cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x28cf84: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x28cf84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28cf88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28cf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28cf8c: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x28cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x28cf90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28cf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cf94: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x28cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28cf98: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x28cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x28cf9c: 0x90690004  lbu         $t1, 0x4($v1)
    ctx->pc = 0x28cf9cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28cfa0: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x28cfa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x28cfa4: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x28cfa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28cfa8: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x28cfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x28cfac: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x28cfacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x28cfb0: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x28cfb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x28cfb4: 0xa0660004  sb          $a2, 0x4($v1)
    ctx->pc = 0x28cfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x28cfb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28cfbc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x28cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x28cfc0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28cfc4: 0x34621043  ori         $v0, $v1, 0x1043
    ctx->pc = 0x28cfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x28cfc8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x28cfcc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x28cfccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cfd0: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x28cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x28cfd4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28cfd8: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x28cfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x28cfdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28cfe0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28cfe4: 0x3c037400  lui         $v1, 0x7400
    ctx->pc = 0x28cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29696 << 16));
    // 0x28cfe8: 0x34633a14  ori         $v1, $v1, 0x3A14
    ctx->pc = 0x28cfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14868);
    // 0x28cfec: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x28cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x28cff0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28cff4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28cff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28cff8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28cffc: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x28cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d000: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D000u;
    SET_GPR_U32(ctx, 31, 0x28D008u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D000u, 0x28D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D008u;
label_28d008:
    // 0x28d008: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d008u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d00c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x28d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28d010: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28d014: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28d018: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x28d01c: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x28d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d020: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D020u;
    SET_GPR_U32(ctx, 31, 0x28D028u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D020u, 0x28D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D028u;
label_28d028:
    // 0x28d028: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x28d02c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x28d02cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28d030: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28d030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d034: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28d038: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28d03c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28d03cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28d040: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x28d040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28d044: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x28d044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x28d048: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28d048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28d04c: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x28d04cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28d050: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x28d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28d054: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28d054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28d058: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x28d058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d05c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D05Cu;
    SET_GPR_U32(ctx, 31, 0x28D064u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D05Cu, 0x28D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D064u;
label_28d064:
    // 0x28d064: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28d064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28d068: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x28d068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28d06c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x28d06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28d070: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28d070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x28d074: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x28d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d078: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D078u;
    SET_GPR_U32(ctx, 31, 0x28D080u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D078u, 0x28D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D080u;
label_28d080:
    // 0x28d080: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28d084: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28d084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28d088: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28d088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d08c: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x28d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28d090: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28d090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28d094: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x28d094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28d098: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x28d098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28d09c: 0x2623002c  addiu       $v1, $s1, 0x2C
    ctx->pc = 0x28d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x28d0a0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28d0a4: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28d0a8: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x28d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28d0ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x28d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x28d0b0: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x28d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d0b4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D0B4u;
    SET_GPR_U32(ctx, 31, 0x28D0BCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D0B4u, 0x28D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0BCu;
label_28d0bc:
    // 0x28d0bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28d0c0: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x28d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28d0c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28d0c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28d0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28d0cc: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x28d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d0d0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D0D0u;
    SET_GPR_U32(ctx, 31, 0x28D0D8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D0D0u, 0x28D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0D8u;
label_28d0d8:
    // 0x28d0d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d0dc: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28d0e0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28d0e4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28d0e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28d0e8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28d0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28d0ec: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x28d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x28d0f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28d0f4: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28d0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28d0f8: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x28d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x28d0fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28d100: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x28d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d104: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D104u;
    SET_GPR_U32(ctx, 31, 0x28D10Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D104u, 0x28D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D10Cu;
label_28d10c:
    // 0x28d10c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28d110: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28d114: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28d114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28d118: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28d118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28d11c: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x28d11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d120: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D120u;
    SET_GPR_U32(ctx, 31, 0x28D128u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D120u, 0x28D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D128u;
label_28d128:
    // 0x28d128: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28d128u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d12c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x28d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28d130: 0x24a27900  addiu       $v0, $a1, 0x7900
    ctx->pc = 0x28d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x28d134: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28d134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28d138: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28d138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28d13c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x28d140: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x28d140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x28d144: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28d144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28d148: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28d14c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x28d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x28d150: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28d150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28d154: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x28d154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x28d158: 0x34458080  ori         $a1, $v0, 0x8080
    ctx->pc = 0x28d158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x28d15c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x28d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28d160: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x28d160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x28d164: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d168: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x28d168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d16c: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28D16Cu;
    {
        const bool branch_taken_0x28d16c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d16c) {
            ctx->pc = 0x28D1ECu;
            return;
        }
    }
    ctx->pc = 0x28D174u;
    // 0x28d174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d178: 0x0  nop
    ctx->pc = 0x28d178u;
    // NOP
    // 0x28d17c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x28d17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x28d180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d184: 0x0  nop
    ctx->pc = 0x28d184u;
    // NOP
    // 0x28d188: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x28d188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x28d18c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x28d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x28d190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d194: 0x0  nop
    ctx->pc = 0x28d194u;
    // NOP
    // 0x28d198: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x28d198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x28d19c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1a0: 0x0  nop
    ctx->pc = 0x28d1a0u;
    // NOP
    // 0x28d1a4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x28d1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x28d1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1ac: 0x0  nop
    ctx->pc = 0x28d1acu;
    // NOP
    // 0x28d1b0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x28d1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x28d1b4: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x28d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x28d1b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28d1b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1bc: 0x0  nop
    ctx->pc = 0x28d1bcu;
    // NOP
    // 0x28d1c0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28d1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x28d1c4: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x28d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x28d1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1cc: 0x0  nop
    ctx->pc = 0x28d1ccu;
    // NOP
    // 0x28d1d0: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x28d1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x28d1d4: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x28d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x28d1d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28d1d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1dc: 0x0  nop
    ctx->pc = 0x28d1dcu;
    // NOP
    // 0x28d1e0: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x28d1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x28d1e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28D1E4u;
    {
        const bool branch_taken_0x28d1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d1e4) {
            ctx->pc = 0x28D270u;
            return;
        }
    }
    ctx->pc = 0x28D1ECu;
}
