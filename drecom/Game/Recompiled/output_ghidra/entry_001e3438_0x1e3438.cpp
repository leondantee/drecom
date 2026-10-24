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

// Function: entry_001e3438
// Address: 0x1e3438 - 0x1e35f8
void entry_001e3438_0x1e3438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3438_0x1e3438");
#endif

    switch (ctx->pc) {
        case 0x1e357cu: goto label_1e357c;
        default: break;
    }

    ctx->pc = 0x1e3438u;

    // 0x1e3438: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e3438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e343c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1e343cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e3440: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1e3440u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3444: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e3444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3448: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e344c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e344cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3450: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3454: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e3454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3458: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e3458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e345c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e345cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3460: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e3464: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3468: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e346c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3470: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e3470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e3474: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e3474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3478: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e347c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e347cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3480: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3484: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e3484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3488: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1e3488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e348c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e348cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3490: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e3494: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3498: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e349c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34a0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e34a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e34a4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e34a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e34ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e34acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e34b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e34b4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e34b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34b8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e34b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e34bc: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e34c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e34c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e34c8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e34cc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e34ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34d0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e34d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e34d4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e34d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e34dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e34e0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e34e4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e34e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34e8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e34e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e34ec: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e34f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e34f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e34f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e34fc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e34fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3500: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e3500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e3504: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1e3504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1e3508: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e3508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e350c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3510: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3514: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e3514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3518: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e3518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e351c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3520: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e3524: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1E3524u;
    {
        const bool branch_taken_0x1e3524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3524) {
            ctx->pc = 0x1E35F8u;
            return;
        }
    }
    ctx->pc = 0x1E352Cu;
    // 0x1e352c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e352cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e3530: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e3530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e3534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3538: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e353c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e353cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e3540: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e3544: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e3544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e3548: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e3548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e354c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3550: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1e3550u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3554: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e3558: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e3558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e355c: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e355cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e3560: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3564: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1e3564u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3568: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e3568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e356c: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x1e356cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1e3570: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e3570u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3574: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E3574u;
    SET_GPR_U32(ctx, 31, 0x1E357Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E3574u, 0x1E357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E357Cu;
label_1e357c:
    // 0x1e357c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3580: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e3580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e3584: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e3584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e3588: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e3588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e358c: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x1e358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3590: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e3590u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e3594: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e3598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e359c: 0x0  nop
    ctx->pc = 0x1e359cu;
    // NOP
    // 0x1e35a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e35a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e35a4: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e35a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e35a8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e35a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e35ac: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x1e35acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e35b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e35b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e35b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e35b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e35b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e35bc: 0x0  nop
    ctx->pc = 0x1e35bcu;
    // NOP
    // 0x1e35c0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e35c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e35c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1e35c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e35c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e35cc: 0x0  nop
    ctx->pc = 0x1e35ccu;
    // NOP
    // 0x1e35d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e35d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e35d4: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e35d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e35d8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e35d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e35dc: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x1e35dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e35e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e35e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e35e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e35e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e35e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e35ec: 0x0  nop
    ctx->pc = 0x1e35ecu;
    // NOP
    // 0x1e35f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e35f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e35f4: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e35f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    ctx->pc = 0x1e35f8u;
}
