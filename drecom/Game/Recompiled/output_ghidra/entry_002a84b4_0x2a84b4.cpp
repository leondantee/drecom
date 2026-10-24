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

// Function: entry_002a84b4
// Address: 0x2a84b4 - 0x2a85d8
void entry_002a84b4_0x2a84b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a84b4_0x2a84b4");
#endif

    switch (ctx->pc) {
        case 0x2a84c4u: goto label_2a84c4;
        case 0x2a84e4u: goto label_2a84e4;
        case 0x2a84f4u: goto label_2a84f4;
        case 0x2a8508u: goto label_2a8508;
        case 0x2a8514u: goto label_2a8514;
        case 0x2a8594u: goto label_2a8594;
        default: break;
    }

    ctx->pc = 0x2a84b4u;

    // 0x2a84b4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a84bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A84BCu;
    SET_GPR_U32(ctx, 31, 0x2A84C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A84BCu, 0x2A84C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84C4u;
label_2a84c4:
    // 0x2a84c4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a84c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84c8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a84c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84cc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84d0: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x2a84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2a84d4: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a84d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a84d8: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a84d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a84dc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A84DCu;
    SET_GPR_U32(ctx, 31, 0x2A84E4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A84DCu, 0x2A84E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84E4u;
label_2a84e4:
    // 0x2a84e4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a84e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a84e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a84ec: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A84ECu;
    SET_GPR_U32(ctx, 31, 0x2A84F4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A84ECu, 0x2A84F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84F4u;
label_2a84f4:
    // 0x2a84f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a84f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a84f8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a84f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a84fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a84fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a8500: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A8500u;
    SET_GPR_U32(ctx, 31, 0x2A8508u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A8500u, 0x2A8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8508u;
label_2a8508:
    // 0x2a8508: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a850c: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A850Cu;
    SET_GPR_U32(ctx, 31, 0x2A8514u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A850Cu, 0x2A8514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8514u;
label_2a8514:
    // 0x2a8514: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a8514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8518: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x2a8518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x2a851c: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2a851cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2a8520: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a8520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8524: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a8524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8528: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a852c: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a852cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a8530: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a8530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8534: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x2a8534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x2a8538: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2a8538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2a853c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a853cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8540: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x2a8540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8548: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a8548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a854c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a854cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8550: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x2a8550u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x2a8554: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A8554u;
    {
        const bool branch_taken_0x2a8554 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8554) {
            ctx->pc = 0x2A85D8u;
            return;
        }
    }
    ctx->pc = 0x2A855Cu;
    // 0x2a855c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8560: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8564: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2a8564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a8568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a856c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a856cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8570: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2a8570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a8574: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8578: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a8578u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a857c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a857cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8580: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a8580u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8584: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8588: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a8588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a858c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A858Cu;
    SET_GPR_U32(ctx, 31, 0x2A8594u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A858Cu, 0x2A8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8594u;
label_2a8594:
    // 0x2a8594: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a8594u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8598: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2a8598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a859c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a859cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a85a0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A85A0u;
    {
        const bool branch_taken_0x2a85a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a85a0) {
            ctx->pc = 0x2A85D8u;
            return;
        }
    }
    ctx->pc = 0x2A85A8u;
    // 0x2a85a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a85ac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a85acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a85b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a85b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a85b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a85b8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a85b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a85bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a85c0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85c4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a85c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a85c8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a85c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85cc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2a85ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a85d0: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a85d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a85d4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a85d8u;
}
