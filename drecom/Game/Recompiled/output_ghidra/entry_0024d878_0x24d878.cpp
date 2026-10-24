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

// Function: entry_0024d878
// Address: 0x24d878 - 0x24db48
void entry_0024d878_0x24d878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024d878_0x24d878");
#endif

    switch (ctx->pc) {
        case 0x24d998u: goto label_24d998;
        case 0x24d9a4u: goto label_24d9a4;
        case 0x24da0cu: goto label_24da0c;
        case 0x24da18u: goto label_24da18;
        case 0x24da64u: goto label_24da64;
        case 0x24da70u: goto label_24da70;
        case 0x24dabcu: goto label_24dabc;
        case 0x24dac8u: goto label_24dac8;
        case 0x24db14u: goto label_24db14;
        case 0x24db20u: goto label_24db20;
        default: break;
    }

    ctx->pc = 0x24d878u;

    // 0x24d878: 0x2e060002  sltiu       $a2, $s0, 0x2
    ctx->pc = 0x24d878u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d87c: 0x14c0ff91  bnez        $a2, . + 4 + (-0x6F << 2)
    ctx->pc = 0x24D87Cu;
    {
        const bool branch_taken_0x24d87c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d87c) {
            ctx->pc = 0x24D6C4u;
            return;
        }
    }
    ctx->pc = 0x24D884u;
    // 0x24d884: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x24d888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d88c: 0x0  nop
    ctx->pc = 0x24d88cu;
    // NOP
    // 0x24d890: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24d890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24d894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d898: 0x0  nop
    ctx->pc = 0x24d898u;
    // NOP
    // 0x24d89c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24d89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24d8a0: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x24d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x24d8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d8a8: 0x0  nop
    ctx->pc = 0x24d8a8u;
    // NOP
    // 0x24d8ac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24d8b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d8b4: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x24d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24d8b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d8bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d8c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d8c4: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x24d8c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x24d8c8: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x24d8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x24d8cc: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x24d8ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24d8d0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x24d8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24d8d4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d8d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24d8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d8dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d8e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d8e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d8e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d8ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d8f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24d8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24d8f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d8f8: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x24d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24d8fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24d8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d900: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d904: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d908: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d90c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d910: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d914: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24d914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d918: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d91c: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x24d91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24d920: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x24d920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x24d924: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d928: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d92c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d930: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d934: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x24d934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d938: 0xc54825  or          $t1, $a2, $a1
    ctx->pc = 0x24d938u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x24d93c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d940: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x24d940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24d944: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x24d944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24d948: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d94c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d950: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d958: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x24d958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d95c: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x24d95cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x24d960: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d964: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x24d964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24d968: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x24d968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24d96c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d970: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d974: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d978: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d97c: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x24d97cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d980: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x24d980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x24d984: 0x24040601  addiu       $a0, $zero, 0x601
    ctx->pc = 0x24d984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1537));
    // 0x24d988: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24d988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d98c: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x24d98cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24d990: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24D990u;
    SET_GPR_U32(ctx, 31, 0x24D998u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24D990u, 0x24D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D998u;
label_24d998:
    // 0x24d998: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d99c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24D99Cu;
    SET_GPR_U32(ctx, 31, 0x24D9A4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24D99Cu, 0x24D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9A4u;
label_24d9a4:
    // 0x24d9a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24d9a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d9a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d9ac: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24d9b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24d9b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d9b4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x24d9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d9b8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x24d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x24d9bc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d9c0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24d9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d9c8: 0x0  nop
    ctx->pc = 0x24d9c8u;
    // NOP
    // 0x24d9cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d9ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d9d0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24d9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24d9d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d9d8: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d9dc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24d9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24d9e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d9e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d9e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d9ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d9f0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24d9f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d9f4: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x24d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x24d9f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24d9f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24d9fc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24da00: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24da00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24da04: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DA04u;
    SET_GPR_U32(ctx, 31, 0x24DA0Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DA04u, 0x24DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA0Cu;
label_24da0c:
    // 0x24da0c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24da0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24da10: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DA10u;
    SET_GPR_U32(ctx, 31, 0x24DA18u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DA10u, 0x24DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA18u;
label_24da18:
    // 0x24da18: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24da1c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24da20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24da20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24da24: 0x0  nop
    ctx->pc = 0x24da24u;
    // NOP
    // 0x24da28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24da28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24da2c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24da2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24da30: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x24da30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24da34: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x24da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x24da38: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24da38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24da3c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24da3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24da40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24da40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24da44: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24da44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24da48: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24da4c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24da4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24da50: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x24da50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x24da54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24da54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24da58: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24da58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24da5c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DA5Cu;
    SET_GPR_U32(ctx, 31, 0x24DA64u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DA5Cu, 0x24DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA64u;
label_24da64:
    // 0x24da64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24da64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24da68: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DA68u;
    SET_GPR_U32(ctx, 31, 0x24DA70u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DA68u, 0x24DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA70u;
label_24da70:
    // 0x24da70: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24da74: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24da74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24da78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24da78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24da7c: 0x0  nop
    ctx->pc = 0x24da7cu;
    // NOP
    // 0x24da80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24da80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24da84: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24da84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24da88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24da8c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24da90: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24da90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24da94: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24da94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24da98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24da98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24da9c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24da9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24daa0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24daa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24daa4: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24daa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24daa8: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x24daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x24daac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24daacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24dab0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24dab4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DAB4u;
    SET_GPR_U32(ctx, 31, 0x24DABCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DAB4u, 0x24DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DABCu;
label_24dabc:
    // 0x24dabc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24dabcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24dac0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DAC0u;
    SET_GPR_U32(ctx, 31, 0x24DAC8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DAC0u, 0x24DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DAC8u;
label_24dac8:
    // 0x24dac8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dacc: 0x3c0542f0  lui         $a1, 0x42F0
    ctx->pc = 0x24daccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17136 << 16));
    // 0x24dad0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24dad0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dad4: 0x0  nop
    ctx->pc = 0x24dad4u;
    // NOP
    // 0x24dad8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24dad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24dadc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24dadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24dae0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dae4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24dae8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24dae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24daec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24daecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24daf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24daf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24daf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24daf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24dafc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24dafcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24db00: 0x24040411  addiu       $a0, $zero, 0x411
    ctx->pc = 0x24db00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x24db04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24db04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24db08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24db08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24db0c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24DB0Cu;
    SET_GPR_U32(ctx, 31, 0x24DB14u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24DB0Cu, 0x24DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB14u;
label_24db14:
    // 0x24db14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24db14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24db18: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24DB18u;
    SET_GPR_U32(ctx, 31, 0x24DB20u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24DB18u, 0x24DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB20u;
label_24db20:
    // 0x24db20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24db24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24db24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24db28: 0x38660010  xori        $a2, $v1, 0x10
    ctx->pc = 0x24db28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x24db2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24db30: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x24db30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x24db34: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24db34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24db38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24db38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24db3c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24db3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24db40: 0x3e00008  jr          $ra
    ctx->pc = 0x24DB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DB48u;
}
