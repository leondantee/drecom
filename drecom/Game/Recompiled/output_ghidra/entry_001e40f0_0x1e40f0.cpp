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

// Function: entry_001e40f0
// Address: 0x1e40f0 - 0x1e4288
void entry_001e40f0_0x1e40f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e40f0_0x1e40f0");
#endif

    switch (ctx->pc) {
        case 0x1e4234u: goto label_1e4234;
        default: break;
    }

    ctx->pc = 0x1e40f0u;

    // 0x1e40f0: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e40f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e40f4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e40f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e40f8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e40f8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e40fc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4100: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e4104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4108: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e410c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4110: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e4110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e4114: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e4114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4118: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e411c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e411cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4120: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e4124: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e4124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4128: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e4128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e412c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e412cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4130: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e4134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4138: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e413c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4140: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1e4140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e4144: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e4144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4148: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e414c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e414cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4150: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e4154: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e4154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4158: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e4158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e415c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e415cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4160: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e4164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4168: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e416c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4170: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e4170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e4174: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e4174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4178: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e417c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e417cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4180: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e4184: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e4184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4188: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e4188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e418c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e418cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4190: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e4194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4198: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e419c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e41a0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e41a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e41a4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e41a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e41ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e41acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e41b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e41b4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e41b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e41b8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e41b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e41bc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e41c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e41c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e41c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e41cc: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e41ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e41d0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e41d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e41d4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e41d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e41d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e41dc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1E41DCu;
    {
        const bool branch_taken_0x1e41dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e41dc) {
            ctx->pc = 0x1E4288u;
            return;
        }
    }
    ctx->pc = 0x1E41E4u;
    // 0x1e41e4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e41e8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e41ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e41f0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e41f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e41f4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e41f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e41f8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e41fc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e4200: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e4200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e4204: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e4208: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1e4208u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e420c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e4210: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e4210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e4214: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e4214u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e4218: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e421c: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1e421cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e4220: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e4220u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4224: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x1e4224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1e4228: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e4228u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e422c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E422Cu;
    SET_GPR_U32(ctx, 31, 0x1E4234u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E422Cu, 0x1E4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4234u;
label_1e4234:
    // 0x1e4234: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e4234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e4238: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e4238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e423c: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e4240: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4244: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x1e4244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4248: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e4248u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e424c: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1e424cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4250: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e4250u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e4254: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e4254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e4258: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e425c: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x1e425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4260: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e4260u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e4264: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1e4264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4268: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e4268u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e426c: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e426cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e4270: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e4270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4274: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x1e4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4278: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e4278u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e427c: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1e427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4280: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e4280u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e4284: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e4284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    ctx->pc = 0x1e4288u;
}
