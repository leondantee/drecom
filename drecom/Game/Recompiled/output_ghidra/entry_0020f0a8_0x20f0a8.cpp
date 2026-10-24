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

// Function: entry_0020f0a8
// Address: 0x20f0a8 - 0x20f30c
void entry_0020f0a8_0x20f0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f0a8_0x20f0a8");
#endif

    switch (ctx->pc) {
        case 0x20f174u: goto label_20f174;
        case 0x20f1b0u: goto label_20f1b0;
        case 0x20f1e4u: goto label_20f1e4;
        case 0x20f250u: goto label_20f250;
        case 0x20f2a4u: goto label_20f2a4;
        case 0x20f2fcu: goto label_20f2fc;
        default: break;
    }

    ctx->pc = 0x20f0a8u;

    // 0x20f0a8: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f0ac: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x20f0acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20f0b0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x20f0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x20f0b4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x20f0b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20f0b8: 0x14200094  bnez        $at, . + 4 + (0x94 << 2)
    ctx->pc = 0x20F0B8u;
    {
        const bool branch_taken_0x20f0b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f0b8) {
            ctx->pc = 0x20F30Cu;
            return;
        }
    }
    ctx->pc = 0x20F0C0u;
    // 0x20f0c0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f0c4: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x20f0c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20f0c8: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x20f0c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20f0cc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20f0ccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x20f0d0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f0d4: 0x8464127e  lh          $a0, 0x127E($v1)
    ctx->pc = 0x20f0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x20f0d8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x20f0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x20f0dc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20f0dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x20f0e0: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x20f0e0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20f0e4: 0x0  nop
    ctx->pc = 0x20f0e4u;
    // NOP
    // 0x20f0e8: 0x0  nop
    ctx->pc = 0x20f0e8u;
    // NOP
    // 0x20f0ec: 0x3010  mfhi        $a2
    ctx->pc = 0x20f0ecu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x20f0f0: 0x14c00086  bnez        $a2, . + 4 + (0x86 << 2)
    ctx->pc = 0x20F0F0u;
    {
        const bool branch_taken_0x20f0f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f0f0) {
            ctx->pc = 0x20F30Cu;
            return;
        }
    }
    ctx->pc = 0x20F0F8u;
    // 0x20f0f8: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20f0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x20f0fc: 0x24c4a330  addiu       $a0, $a2, -0x5CD0
    ctx->pc = 0x20f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943536));
    // 0x20f100: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x20f100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20f104: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x20f104u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x38A330u));
    // 0x20f108: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x20f108u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x20f10c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20f110: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20f110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x20f114: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20f114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20f118: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x20f118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f11c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x20f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20f120: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x20f120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x20f124: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x20f124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x20f128: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20f12c: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x20f12cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x20f130: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x20f130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x20f134: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x20f134u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20f138: 0x1265021  addu        $t2, $t1, $a2
    ctx->pc = 0x20f138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x20f13c: 0x3144ff00  andi        $a0, $t2, 0xFF00
    ctx->pc = 0x20f13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65280);
    // 0x20f140: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x20f140u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x20f144: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x20f144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20f148: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20f14c: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x20f14cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20f150: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x20f150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x20f154: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x20f154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x20f158: 0x24860028  addiu       $a2, $a0, 0x28
    ctx->pc = 0x20f158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x20f15c: 0x64c3c  dsll32      $t1, $a2, 16
    ctx->pc = 0x20f15cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20f160: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20f160u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x20f164: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f164u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f168: 0xa549127e  sh          $t1, 0x127E($t2)
    ctx->pc = 0x20f168u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4734), (uint16_t)GPR_U32(ctx, 9));
    // 0x20f16c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20F16Cu;
    SET_GPR_U32(ctx, 31, 0x20F174u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F16Cu, 0x20F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F174u;
label_20f174:
    // 0x20f174: 0x3c0645da  lui         $a2, 0x45DA
    ctx->pc = 0x20f174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17882 << 16));
    // 0x20f178: 0x34c5c000  ori         $a1, $a2, 0xC000
    ctx->pc = 0x20f178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x20f17c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x20f17cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f180: 0x0  nop
    ctx->pc = 0x20f180u;
    // NOP
    // 0x20f184: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x20f184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x20f188: 0x3c05c5fa  lui         $a1, 0xC5FA
    ctx->pc = 0x20f188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50682 << 16));
    // 0x20f18c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f18cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f190: 0x0  nop
    ctx->pc = 0x20f190u;
    // NOP
    // 0x20f194: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20f194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20f198: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20f198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20f19c: 0xe420a310  swc1        $f0, -0x5CF0($at)
    ctx->pc = 0x20f19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A310u, _value); } while (0); }
    // 0x20f1a0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20f1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20f1a4: 0xe420a300  swc1        $f0, -0x5D00($at)
    ctx->pc = 0x20f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A300u, _value); } while (0); }
    // 0x20f1a8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x20F1A8u;
    SET_GPR_U32(ctx, 31, 0x20F1B0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20F1A8u, 0x20F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1B0u;
label_20f1b0:
    // 0x20f1b0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x20f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x20f1b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f1b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f1b8: 0x0  nop
    ctx->pc = 0x20f1b8u;
    // NOP
    // 0x20f1bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20f1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f1c0: 0x3c074684  lui         $a3, 0x4684
    ctx->pc = 0x20f1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18052 << 16));
    // 0x20f1c4: 0x34e6d000  ori         $a2, $a3, 0xD000
    ctx->pc = 0x20f1c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53248);
    // 0x20f1c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20f1c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f1cc: 0x0  nop
    ctx->pc = 0x20f1ccu;
    // NOP
    // 0x20f1d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x20f1d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f1d4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20f1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20f1d8: 0xe421a304  swc1        $f1, -0x5CFC($at)
    ctx->pc = 0x20f1d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A304u, _value); } while (0); }
    // 0x20f1dc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20F1DCu;
    SET_GPR_U32(ctx, 31, 0x20F1E4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F1DCu, 0x20F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1E4u;
label_20f1e4:
    // 0x20f1e4: 0x3c0a45da  lui         $t2, 0x45DA
    ctx->pc = 0x20f1e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17882 << 16));
    // 0x20f1e8: 0x3549c000  ori         $t1, $t2, 0xC000
    ctx->pc = 0x20f1e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)49152);
    // 0x20f1ec: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x20f1ecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f1f0: 0x0  nop
    ctx->pc = 0x20f1f0u;
    // NOP
    // 0x20f1f4: 0x46006342  mul.s       $f13, $f12, $f0
    ctx->pc = 0x20f1f4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x20f1f8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20f1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20f1fc: 0xe42da308  swc1        $f13, -0x5CF8($at)
    ctx->pc = 0x20f1fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A308u, _value); } while (0); }
    // 0x20f200: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20f204: 0x3c09442f  lui         $t1, 0x442F
    ctx->pc = 0x20f204u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17455 << 16));
    // 0x20f208: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x20f208u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f20c: 0x3c0a43b4  lui         $t2, 0x43B4
    ctx->pc = 0x20f20cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17332 << 16));
    // 0x20f210: 0x448a6800  mtc1        $t2, $f13
    ctx->pc = 0x20f210u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f214: 0x3c074348  lui         $a3, 0x4348
    ctx->pc = 0x20f214u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17224 << 16));
    // 0x20f218: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x20f218u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f21c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20f21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f220: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20f220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f224: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20f228: 0x2466a300  addiu       $a2, $v1, -0x5D00
    ctx->pc = 0x20f228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
    // 0x20f22c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20f22cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f230: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20f230u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f234: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20f238: 0x2469a310  addiu       $t1, $v1, -0x5CF0
    ctx->pc = 0x20f238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x20f23c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x20f23cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x20f240: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x20f240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20f244: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f244u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f248: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20F248u;
    SET_GPR_U32(ctx, 31, 0x20F250u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F248u, 0x20F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F250u;
label_20f250:
    // 0x20f250: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20f250u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20f254: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x20f254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
    // 0x20f258: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x20f258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f25c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20f260: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x20f260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x20f264: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x20f264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
    // 0x20f268: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20f268u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f26c: 0x3c0943c8  lui         $t1, 0x43C8
    ctx->pc = 0x20f26cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17352 << 16));
    // 0x20f270: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x20f270u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f274: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20f274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f278: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20f278u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f27c: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x20f27cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x20f280: 0x2546a300  addiu       $a2, $t2, -0x5D00
    ctx->pc = 0x20f280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943488));
    // 0x20f284: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20f284u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f288: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20f288u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f28c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20f290: 0x2469a310  addiu       $t1, $v1, -0x5CF0
    ctx->pc = 0x20f290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x20f294: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x20f294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20f298: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f298u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f29c: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20F29Cu;
    SET_GPR_U32(ctx, 31, 0x20F2A4u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F29Cu, 0x20F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2A4u;
label_20f2a4:
    // 0x20f2a4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x20f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20f2a8: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x20f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x20f2ac: 0x3c064411  lui         $a2, 0x4411
    ctx->pc = 0x20f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17425 << 16));
    // 0x20f2b0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20f2b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f2b4: 0x3c07435c  lui         $a3, 0x435C
    ctx->pc = 0x20f2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17244 << 16));
    // 0x20f2b8: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x20f2b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f2bc: 0x3c08435c  lui         $t0, 0x435C
    ctx->pc = 0x20f2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17244 << 16));
    // 0x20f2c0: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x20f2c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f2c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20f2c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f2c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20f2c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f2cc: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x20f2ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x20f2d0: 0x252aa300  addiu       $t2, $t1, -0x5D00
    ctx->pc = 0x20f2d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943488));
    // 0x20f2d4: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x20f2d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20f2d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20f2d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f2dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20f2dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f2e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20f2e4: 0x244aa310  addiu       $t2, $v0, -0x5CF0
    ctx->pc = 0x20f2e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943504));
    // 0x20f2e8: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x20f2e8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20f2ec: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x20f2ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20f2f0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f2f0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f2f4: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20F2F4u;
    SET_GPR_U32(ctx, 31, 0x20F2FCu);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F2F4u, 0x20F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2FCu;
label_20f2fc:
    // 0x20f2fc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x20f2fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20f300: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20f300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f304: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f308: 0xa468127a  sh          $t0, 0x127A($v1)
    ctx->pc = 0x20f308u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 8));
    ctx->pc = 0x20f30cu;
}
