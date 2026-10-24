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

// Function: entry_0013ed98
// Address: 0x13ed98 - 0x13f4ac
void entry_0013ed98_0x13ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ed98_0x13ed98");
#endif

    switch (ctx->pc) {
        case 0x13ee0cu: goto label_13ee0c;
        case 0x13ef28u: goto label_13ef28;
        case 0x13ef54u: goto label_13ef54;
        case 0x13f038u: goto label_13f038;
        case 0x13f150u: goto label_13f150;
        case 0x13f188u: goto label_13f188;
        case 0x13f26cu: goto label_13f26c;
        case 0x13f384u: goto label_13f384;
        case 0x13f3b4u: goto label_13f3b4;
        default: break;
    }

    ctx->pc = 0x13ed98u;

    // 0x13ed98: 0x8fa6166c  lw          $a2, 0x166C($sp)
    ctx->pc = 0x13ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13ed9c: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x13ed9cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13eda0: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x13eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x13eda4: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x13eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eda8: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13edac: 0xaca20210  sw          $v0, 0x210($a1)
    ctx->pc = 0x13edacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 528), GPR_U32(ctx, 2));
    // 0x13edb0: 0x8fa2166c  lw          $v0, 0x166C($sp)
    ctx->pc = 0x13edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13edb4: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x13edb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x13edb8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x13edb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x13edbc: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13edc0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13edc4: 0xac450214  sw          $a1, 0x214($v0)
    ctx->pc = 0x13edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 5));
    // 0x13edc8: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x13edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13edcc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x13edccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13edd0: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13edd4: 0xac440218  sw          $a0, 0x218($v0)
    ctx->pc = 0x13edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 4));
    // 0x13edd8: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eddc: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x13eddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ede0: 0xacc0021c  sw          $zero, 0x21C($a2)
    ctx->pc = 0x13ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 540), GPR_U32(ctx, 0));
    // 0x13ede4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ede8: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13edec: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x13edecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13edf0: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13edf4: 0x24a501b0  addiu       $a1, $a1, 0x1B0
    ctx->pc = 0x13edf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13edf8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13edf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13edfc: 0x24460210  addiu       $a2, $v0, 0x210
    ctx->pc = 0x13edfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x13ee00: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13ee00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13ee04: 0xc0675e4  jal         func_19D790
    ctx->pc = 0x13EE04u;
    SET_GPR_U32(ctx, 31, 0x13EE0Cu);
    ctx->pc = 0x19D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D790u, 0x13EE04u, 0x13EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE0Cu;
label_13ee0c:
    // 0x13ee0c: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x13ee0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ee10: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x13ee10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ee14: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x13ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee18: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13ee1c: 0xac4601e0  sw          $a2, 0x1E0($v0)
    ctx->pc = 0x13ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 6));
    // 0x13ee20: 0x92a40001  lbu         $a0, 0x1($s5)
    ctx->pc = 0x13ee20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x13ee24: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x13ee24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13ee28: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee2c: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x13ee2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ee30: 0xad0501e4  sw          $a1, 0x1E4($t0)
    ctx->pc = 0x13ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 484), GPR_U32(ctx, 5));
    // 0x13ee34: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x13ee34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x13ee38: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x13ee38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ee3c: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee40: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ee44: 0xac4401e8  sw          $a0, 0x1E8($v0)
    ctx->pc = 0x13ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 4));
    // 0x13ee48: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x13ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13ee4c: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13ee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee50: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ee54: 0xac4401ec  sw          $a0, 0x1EC($v0)
    ctx->pc = 0x13ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 4));
    // 0x13ee58: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x13ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ee5c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee60: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ee64: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x13ee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x13ee68: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x13ee68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ee6c: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13ee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee70: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ee74: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x13ee74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x13ee78: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x13ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ee7c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee80: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ee84: 0xe4400158  swc1        $f0, 0x158($v0)
    ctx->pc = 0x13ee84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
    // 0x13ee88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13ee8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ee8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ee90: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee94: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ee98: 0xe440015c  swc1        $f0, 0x15C($v0)
    ctx->pc = 0x13ee98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 348), bits); }
    // 0x13ee9c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x13ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eea0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x13eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eea4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13eea8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x13eea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x13eeac: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x13eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eeb0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eeb4: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x13eeb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13eeb8: 0xe4e00184  swc1        $f0, 0x184($a3)
    ctx->pc = 0x13eeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 388), bits); }
    // 0x13eebc: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x13eebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eec0: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x13eec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eec4: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x13eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13eec8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x13eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x13eecc: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x13eeccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x13eed0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x13eed0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13eed4: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x13eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eed8: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13eedc: 0xe4a0018c  swc1        $f0, 0x18C($a1)
    ctx->pc = 0x13eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 396), bits); }
    // 0x13eee0: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x13eee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eee4: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13eee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13eee8: 0x114100  sll         $t0, $s1, 4
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eeec: 0x11d1021  addu        $v0, $t0, $sp
    ctx->pc = 0x13eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x13eef0: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x13eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eef4: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x13eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13eef8: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x13eef8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13eefc: 0xd14021  addu        $t0, $a2, $s1
    ctx->pc = 0x13eefcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x13ef00: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x13ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x13ef04: 0x9d4821  addu        $t1, $a0, $sp
    ctx->pc = 0x13ef04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13ef08: 0x8fa51678  lw          $a1, 0x1678($sp)
    ctx->pc = 0x13ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5752)));
    // 0x13ef0c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13ef0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ef10: 0x24e50150  addiu       $a1, $a3, 0x150
    ctx->pc = 0x13ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
    // 0x13ef14: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x13ef14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x13ef18: 0x246701e0  addiu       $a3, $v1, 0x1E0
    ctx->pc = 0x13ef18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x13ef1c: 0x25281590  addiu       $t0, $t1, 0x1590
    ctx->pc = 0x13ef1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 5520));
    // 0x13ef20: 0xc05da54  jal         func_176950
    ctx->pc = 0x13EF20u;
    SET_GPR_U32(ctx, 31, 0x13EF28u);
    ctx->pc = 0x176950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176950u, 0x13EF20u, 0x13EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF28u;
label_13ef28:
    // 0x13ef28: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x13ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ef2c: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x13ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13ef30: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x13ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13ef34: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ef38: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ef3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ef40: 0x246415b0  addiu       $a0, $v1, 0x15B0
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5552));
    // 0x13ef44: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x13ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13ef48: 0x24460150  addiu       $a2, $v0, 0x150
    ctx->pc = 0x13ef48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x13ef4c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x13EF4Cu;
    SET_GPR_U32(ctx, 31, 0x13EF54u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x13EF4Cu, 0x13EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF54u;
label_13ef54:
    // 0x13ef54: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x13ef54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ef58: 0xdd4021  addu        $t0, $a2, $sp
    ctx->pc = 0x13ef58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13ef5c: 0x25020150  addiu       $v0, $t0, 0x150
    ctx->pc = 0x13ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x13ef60: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x13ef60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ef64: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ef68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ef6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ef70: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ef74: 0x24be1570  addiu       $fp, $a1, 0x1570
    ctx->pc = 0x13ef74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 5488));
    // 0x13ef78: 0x7fc40000  sq          $a0, 0x0($fp)
    ctx->pc = 0x13ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 4));
    // 0x13ef7c: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x13ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ef80: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x13ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13ef84: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x13ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x13ef88: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13ef88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ef8c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ef90: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x13ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x13ef94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13ef98: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x13ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13ef9c: 0x24671580  addiu       $a3, $v1, 0x1580
    ctx->pc = 0x13ef9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5504));
    // 0x13efa0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x13efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x13efa4: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x13efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13efa8: 0xdd2821  addu        $a1, $a2, $sp
    ctx->pc = 0x13efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13efac: 0x24a401b0  addiu       $a0, $a1, 0x1B0
    ctx->pc = 0x13efacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13efb0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x13efb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13efb4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13efb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13efbc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x13efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13efc0: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13efc4: 0x24a215a0  addiu       $v0, $a1, 0x15A0
    ctx->pc = 0x13efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
    // 0x13efc8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13efcc: 0x8fa3166c  lw          $v1, 0x166C($sp)
    ctx->pc = 0x13efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13efd0: 0x9462fffc  lhu         $v0, -0x4($v1)
    ctx->pc = 0x13efd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x13efd4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x13efd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13efd8: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13efdc: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x13efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13efe0: 0xacc40210  sw          $a0, 0x210($a2)
    ctx->pc = 0x13efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 528), GPR_U32(ctx, 4));
    // 0x13efe4: 0x8fa7166c  lw          $a3, 0x166C($sp)
    ctx->pc = 0x13efe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13efe8: 0x94e2fffe  lhu         $v0, -0x2($a3)
    ctx->pc = 0x13efe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x13efec: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x13efecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13eff0: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13eff4: 0xbdf021  addu        $fp, $a1, $sp
    ctx->pc = 0x13eff4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13eff8: 0xafc40214  sw          $a0, 0x214($fp)
    ctx->pc = 0x13eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 532), GPR_U32(ctx, 4));
    // 0x13effc: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x13effcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13f000: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f004: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f008: 0xac880218  sw          $t0, 0x218($a0)
    ctx->pc = 0x13f008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 8));
    // 0x13f00c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f010: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f014: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x13f014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x13f018: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x13f018u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f01c: 0xfd2821  addu        $a1, $a3, $sp
    ctx->pc = 0x13f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x13f020: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f024: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f028: 0x24a401b0  addiu       $a0, $a1, 0x1B0
    ctx->pc = 0x13f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13f02c: 0x24450210  addiu       $a1, $v0, 0x210
    ctx->pc = 0x13f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x13f030: 0xc0675e4  jal         func_19D790
    ctx->pc = 0x13F030u;
    SET_GPR_U32(ctx, 31, 0x13F038u);
    ctx->pc = 0x19D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D790u, 0x13F030u, 0x13F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F038u;
label_13f038:
    // 0x13f038: 0x92a4fffc  lbu         $a0, -0x4($s5)
    ctx->pc = 0x13f038u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967292)));
    // 0x13f03c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x13f03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13f040: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x13f040u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f044: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13f044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f048: 0xace501e0  sw          $a1, 0x1E0($a3)
    ctx->pc = 0x13f048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 5));
    // 0x13f04c: 0x92a4fffd  lbu         $a0, -0x3($s5)
    ctx->pc = 0x13f04cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967293)));
    // 0x13f050: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x13f050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13f054: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f058: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f05c: 0xac4501e4  sw          $a1, 0x1E4($v0)
    ctx->pc = 0x13f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 5));
    // 0x13f060: 0x92a3fffe  lbu         $v1, -0x2($s5)
    ctx->pc = 0x13f060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967294)));
    // 0x13f064: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13f064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13f068: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f06c: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x13f06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f070: 0xacc401e8  sw          $a0, 0x1E8($a2)
    ctx->pc = 0x13f070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 488), GPR_U32(ctx, 4));
    // 0x13f074: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x13f074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13f078: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f07c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f080: 0xac8701ec  sw          $a3, 0x1EC($a0)
    ctx->pc = 0x13f080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 492), GPR_U32(ctx, 7));
    // 0x13f084: 0xc680fff4  lwc1        $f0, -0xC($s4)
    ctx->pc = 0x13f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f088: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f08c: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f090: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x13f090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x13f094: 0xc680fff8  lwc1        $f0, -0x8($s4)
    ctx->pc = 0x13f094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f098: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x13f098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f09c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13f0a0: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x13f0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x13f0a4: 0xc680fffc  lwc1        $f0, -0x4($s4)
    ctx->pc = 0x13f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f0a8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x13f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0ac: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f0b0: 0xe4a00158  swc1        $f0, 0x158($a1)
    ctx->pc = 0x13f0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 344), bits); }
    // 0x13f0b4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x13f0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x13f0b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x13f0b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f0bc: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x13f0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0c0: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x13f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x13f0c4: 0xe440015c  swc1        $f0, 0x15C($v0)
    ctx->pc = 0x13f0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 348), bits); }
    // 0x13f0c8: 0xc6e0fff4  lwc1        $f0, -0xC($s7)
    ctx->pc = 0x13f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f0cc: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x13f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0d0: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f0d4: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x13f0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x13f0d8: 0xc6e0fff8  lwc1        $f0, -0x8($s7)
    ctx->pc = 0x13f0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f0dc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0e0: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x13f0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f0e4: 0xe5000184  swc1        $f0, 0x184($t0)
    ctx->pc = 0x13f0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 388), bits); }
    // 0x13f0e8: 0xc6e0fffc  lwc1        $f0, -0x4($s7)
    ctx->pc = 0x13f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f0ec: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0f0: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f0f4: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x13f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x13f0f8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13f0fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13f0fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f100: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x13f100u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f104: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13f104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f108: 0xe4e0018c  swc1        $f0, 0x18C($a3)
    ctx->pc = 0x13f108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 396), bits); }
    // 0x13f10c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f110: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x13f110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f114: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f114u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f118: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f11c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f120: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x13f120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f124: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x13f124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f128: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x13f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x13f12c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x13f12cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13f130: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f134: 0x8fa41678  lw          $a0, 0x1678($sp)
    ctx->pc = 0x13f134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5752)));
    // 0x13f138: 0x25050150  addiu       $a1, $t0, 0x150
    ctx->pc = 0x13f138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x13f13c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x13f140: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x13f140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
    // 0x13f144: 0x24681590  addiu       $t0, $v1, 0x1590
    ctx->pc = 0x13f144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 5520));
    // 0x13f148: 0xc05da54  jal         func_176950
    ctx->pc = 0x13F148u;
    SET_GPR_U32(ctx, 31, 0x13F150u);
    ctx->pc = 0x176950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176950u, 0x13F148u, 0x13F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F150u;
label_13f150:
    // 0x13f150: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x13f150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f154: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x13f154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x13f158: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x13f158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13f15c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f160: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x13f160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f164: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x13f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f168: 0x246615b0  addiu       $a2, $v1, 0x15B0
    ctx->pc = 0x13f168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5552));
    // 0x13f16c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13f16cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f170: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x13f170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13f174: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x13f174u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13f178: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x13f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x13f17c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13f17cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f180: 0xc04f958  jal         func_13E560
    ctx->pc = 0x13F180u;
    SET_GPR_U32(ctx, 31, 0x13F188u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x13F180u, 0x13F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F188u;
label_13f188:
    // 0x13f188: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f18c: 0xbd8821  addu        $s1, $a1, $sp
    ctx->pc = 0x13f18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f190: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x13f194: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x13f194u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f198: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13f198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f19c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x13f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13f1a0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13f1a4: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x13f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f1a8: 0x24d11570  addiu       $s1, $a2, 0x1570
    ctx->pc = 0x13f1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 5488));
    // 0x13f1ac: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x13f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
    // 0x13f1b0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f1b4: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f1b8: 0x24910180  addiu       $s1, $a0, 0x180
    ctx->pc = 0x13f1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x13f1bc: 0x7a300000  lq          $s0, 0x0($s1)
    ctx->pc = 0x13f1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f1c0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f1c4: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x13f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x13f1c8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x13f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13f1cc: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f1d0: 0x24a61580  addiu       $a2, $a1, 0x1580
    ctx->pc = 0x13f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5504));
    // 0x13f1d4: 0x7cd00000  sq          $s0, 0x0($a2)
    ctx->pc = 0x13f1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 16));
    // 0x13f1d8: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x13f1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f1dc: 0xfd2821  addu        $a1, $a3, $sp
    ctx->pc = 0x13f1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x13f1e0: 0x24a601b0  addiu       $a2, $a1, 0x1B0
    ctx->pc = 0x13f1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13f1e4: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x13f1e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13f1e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f1ec: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x13f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13f1f0: 0x49100  sll         $s2, $a0, 4
    ctx->pc = 0x13f1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13f1f4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x13f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x13f1f8: 0x244515a0  addiu       $a1, $v0, 0x15A0
    ctx->pc = 0x13f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5536));
    // 0x13f1fc: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x13f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x13f200: 0x8fa6166c  lw          $a2, 0x166C($sp)
    ctx->pc = 0x13f200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13f204: 0x94c4fff8  lhu         $a0, -0x8($a2)
    ctx->pc = 0x13f204u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x13f208: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x13f208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x13f20c: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x13f20cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f210: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13f210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f214: 0xace50210  sw          $a1, 0x210($a3)
    ctx->pc = 0x13f214u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 528), GPR_U32(ctx, 5));
    // 0x13f218: 0x8fa2166c  lw          $v0, 0x166C($sp)
    ctx->pc = 0x13f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13f21c: 0x9444fffa  lhu         $a0, -0x6($v0)
    ctx->pc = 0x13f21cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967290)));
    // 0x13f220: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x13f220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x13f224: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f228: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x13f228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f22c: 0xacc50214  sw          $a1, 0x214($a2)
    ctx->pc = 0x13f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 5));
    // 0x13f230: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x13f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13f234: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x13f234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f238: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f23c: 0xaca20218  sw          $v0, 0x218($a1)
    ctx->pc = 0x13f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 536), GPR_U32(ctx, 2));
    // 0x13f240: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x13f240u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f244: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13f244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f248: 0xace0021c  sw          $zero, 0x21C($a3)
    ctx->pc = 0x13f248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 540), GPR_U32(ctx, 0));
    // 0x13f24c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f250: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f254: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f254u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f258: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f25c: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x13f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x13f260: 0x24450210  addiu       $a1, $v0, 0x210
    ctx->pc = 0x13f260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x13f264: 0xc0675e4  jal         func_19D790
    ctx->pc = 0x13F264u;
    SET_GPR_U32(ctx, 31, 0x13F26Cu);
    ctx->pc = 0x19D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D790u, 0x13F264u, 0x13F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F26Cu;
label_13f26c:
    // 0x13f26c: 0x92a4fff8  lbu         $a0, -0x8($s5)
    ctx->pc = 0x13f26cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x13f270: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x13f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13f274: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f278: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f27c: 0xaca301e0  sw          $v1, 0x1E0($a1)
    ctx->pc = 0x13f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 480), GPR_U32(ctx, 3));
    // 0x13f280: 0x92a6fff9  lbu         $a2, -0x7($s5)
    ctx->pc = 0x13f280u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967289)));
    // 0x13f284: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x13f284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x13f288: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f28c: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x13f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f290: 0xac6201e4  sw          $v0, 0x1E4($v1)
    ctx->pc = 0x13f290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 484), GPR_U32(ctx, 2));
    // 0x13f294: 0x92a2fffa  lbu         $v0, -0x6($s5)
    ctx->pc = 0x13f294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967290)));
    // 0x13f298: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x13f298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13f29c: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x13f29cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2a0: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x13f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f2a4: 0xac4501e8  sw          $a1, 0x1E8($v0)
    ctx->pc = 0x13f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 5));
    // 0x13f2a8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x13f2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13f2ac: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x13f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2b0: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f2b4: 0xac6501ec  sw          $a1, 0x1EC($v1)
    ctx->pc = 0x13f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 492), GPR_U32(ctx, 5));
    // 0x13f2b8: 0xc680ffe8  lwc1        $f0, -0x18($s4)
    ctx->pc = 0x13f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f2bc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2c0: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f2c4: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x13f2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x13f2c8: 0xc680ffec  lwc1        $f0, -0x14($s4)
    ctx->pc = 0x13f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f2cc: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2d0: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f2d4: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x13f2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x13f2d8: 0xc680fff0  lwc1        $f0, -0x10($s4)
    ctx->pc = 0x13f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f2dc: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x13f2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2e0: 0x11d1021  addu        $v0, $t0, $sp
    ctx->pc = 0x13f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x13f2e4: 0xe4400158  swc1        $f0, 0x158($v0)
    ctx->pc = 0x13f2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
    // 0x13f2e8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x13f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x13f2ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13f2ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f2f0: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2f4: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f2f8: 0xe440015c  swc1        $f0, 0x15C($v0)
    ctx->pc = 0x13f2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 348), bits); }
    // 0x13f2fc: 0xc6e0ffe8  lwc1        $f0, -0x18($s7)
    ctx->pc = 0x13f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f300: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x13f300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f304: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f308: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x13f308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x13f30c: 0xc6e0ffec  lwc1        $f0, -0x14($s7)
    ctx->pc = 0x13f30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f310: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f314: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f318: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x13f318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x13f31c: 0xc6e0fff0  lwc1        $f0, -0x10($s7)
    ctx->pc = 0x13f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f320: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x13f320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f324: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f328: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x13f328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x13f32c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13f330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f334: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f338: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f33c: 0xe440018c  swc1        $f0, 0x18C($v0)
    ctx->pc = 0x13f33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 396), bits); }
    // 0x13f340: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f344: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f348: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f34c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f350: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f354: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f358: 0x133880  sll         $a3, $s3, 2
    ctx->pc = 0x13f358u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f35c: 0xf33021  addu        $a2, $a3, $s3
    ctx->pc = 0x13f35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x13f360: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x13f360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13f364: 0x9d4021  addu        $t0, $a0, $sp
    ctx->pc = 0x13f364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f368: 0x8fa41678  lw          $a0, 0x1678($sp)
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5752)));
    // 0x13f36c: 0x24a50150  addiu       $a1, $a1, 0x150
    ctx->pc = 0x13f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    // 0x13f370: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x13f370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x13f374: 0x244701e0  addiu       $a3, $v0, 0x1E0
    ctx->pc = 0x13f374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x13f378: 0x25081590  addiu       $t0, $t0, 0x1590
    ctx->pc = 0x13f378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5520));
    // 0x13f37c: 0xc05da54  jal         func_176950
    ctx->pc = 0x13F37Cu;
    SET_GPR_U32(ctx, 31, 0x13F384u);
    ctx->pc = 0x176950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176950u, 0x13F37Cu, 0x13F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F384u;
label_13f384:
    // 0x13f384: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x13f384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f388: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x13f388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x13f38c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x13f38cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13f390: 0xdd4021  addu        $t0, $a2, $sp
    ctx->pc = 0x13f390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f394: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x13f394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f398: 0x9d4821  addu        $t1, $a0, $sp
    ctx->pc = 0x13f398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f39c: 0x250515b0  addiu       $a1, $t0, 0x15B0
    ctx->pc = 0x13f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 5552));
    // 0x13f3a0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13f3a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13f3a4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x13f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13f3a8: 0x25260150  addiu       $a2, $t1, 0x150
    ctx->pc = 0x13f3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x13f3ac: 0xc04f958  jal         func_13E560
    ctx->pc = 0x13F3ACu;
    SET_GPR_U32(ctx, 31, 0x13F3B4u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x13F3ACu, 0x13F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3B4u;
label_13f3b4:
    // 0x13f3b4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13f3b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f3b8: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x13f3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f3bc: 0x11d1021  addu        $v0, $t0, $sp
    ctx->pc = 0x13f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x13f3c0: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x13f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x13f3c4: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x13f3c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f3c8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f3cc: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x13f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13f3d0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x13f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13f3d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f3d8: 0x24441570  addiu       $a0, $v0, 0x1570
    ctx->pc = 0x13f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5488));
    // 0x13f3dc: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13f3e0: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f3e4: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x13f3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f3e8: 0x24c20180  addiu       $v0, $a2, 0x180
    ctx->pc = 0x13f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x13f3ec: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x13f3ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f3f0: 0x134080  sll         $t0, $s3, 2
    ctx->pc = 0x13f3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f3f4: 0x1131021  addu        $v0, $t0, $s3
    ctx->pc = 0x13f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x13f3f8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x13f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13f3fc: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x13f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f400: 0x24421580  addiu       $v0, $v0, 0x1580
    ctx->pc = 0x13f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
    // 0x13f404: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x13f404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x13f408: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f40c: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f410: 0x24be01b0  addiu       $fp, $a1, 0x1B0
    ctx->pc = 0x13f410u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13f414: 0x7bc40000  lq          $a0, 0x0($fp)
    ctx->pc = 0x13f414u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13f418: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13f418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f41c: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x13f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13f420: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x13f420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13f424: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f428: 0x24a315a0  addiu       $v1, $a1, 0x15A0
    ctx->pc = 0x13f428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
    // 0x13f42c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x13f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x13f430: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f434: 0xafa31674  sw          $v1, 0x1674($sp)
    ctx->pc = 0x13f434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5748), GPR_U32(ctx, 3));
    // 0x13f438: 0x8fa31694  lw          $v1, 0x1694($sp)
    ctx->pc = 0x13f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13f43c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x13f43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13f440: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x13f440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x13f444: 0x733fc  dsll32      $a2, $a3, 15
    ctx->pc = 0x13f444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 15));
    // 0x13f448: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x13f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13f44c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x13f44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13f450: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x13f450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x13f454: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13f454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13f458: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13f45c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x13f45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13f460: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f464: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x13f464u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x13f468: 0x24020412  addiu       $v0, $zero, 0x412
    ctx->pc = 0x13f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x13f46c: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f470: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x13f470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x13f474: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f478: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x13f478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x13f47c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f480: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x13f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13f484: 0xafa516a8  sw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 5));
    // 0x13f488: 0xafa01680  sw          $zero, 0x1680($sp)
    ctx->pc = 0x13f488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 0));
    // 0x13f48c: 0x8fa61684  lw          $a2, 0x1684($sp)
    ctx->pc = 0x13f48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13f490: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f494: 0x10c70123  beq         $a2, $a3, . + 4 + (0x123 << 2)
    ctx->pc = 0x13F494u;
    {
        const bool branch_taken_0x13f494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x13f494) {
            ctx->pc = 0x13F924u;
            return;
        }
    }
    ctx->pc = 0x13F49Cu;
    // 0x13f49c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F49Cu;
    {
        const bool branch_taken_0x13f49c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f49c) {
            ctx->pc = 0x13F4ACu;
            return;
        }
    }
    ctx->pc = 0x13F4A4u;
    // 0x13f4a4: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x13F4A4u;
    {
        const bool branch_taken_0x13f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f4a4) {
            ctx->pc = 0x13FF28u;
            return;
        }
    }
    ctx->pc = 0x13F4ACu;
}
