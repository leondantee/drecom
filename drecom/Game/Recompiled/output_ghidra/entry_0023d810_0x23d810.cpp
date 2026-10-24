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

// Function: entry_0023d810
// Address: 0x23d810 - 0x23d904
void entry_0023d810_0x23d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d810_0x23d810");
#endif

    switch (ctx->pc) {
        case 0x23d824u: goto label_23d824;
        case 0x23d830u: goto label_23d830;
        case 0x23d898u: goto label_23d898;
        case 0x23d8c0u: goto label_23d8c0;
        default: break;
    }

    ctx->pc = 0x23d810u;

    // 0x23d810: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d814: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x23d814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d818: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23d818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23d81c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23D81Cu;
    SET_GPR_U32(ctx, 31, 0x23D824u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23D81Cu, 0x23D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D824u;
label_23d824:
    // 0x23d824: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d828: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23D828u;
    SET_GPR_U32(ctx, 31, 0x23D830u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23D828u, 0x23D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D830u;
label_23d830:
    // 0x23d830: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x23d830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d834: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d838: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x23d838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x23d83c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x23d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x23d840: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d844: 0xc4a000d0  lwc1        $f0, 0xD0($a1)
    ctx->pc = 0x23d844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d848: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23d848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23d84c: 0xe4a000d0  swc1        $f0, 0xD0($a1)
    ctx->pc = 0x23d84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x23d850: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d854: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x23d854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x23d858: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23D858u;
    {
        const bool branch_taken_0x23d858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d858) {
            ctx->pc = 0x23D904u;
            return;
        }
    }
    ctx->pc = 0x23D860u;
    // 0x23d860: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d864: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d868: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x23d868u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23d86c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d870: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d874: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23d874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d878: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d87c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23d87cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d880: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d884: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x23d884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d888: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d88c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23d890: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D890u;
    SET_GPR_U32(ctx, 31, 0x23D898u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D890u, 0x23D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D898u;
label_23d898:
    // 0x23d898: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23d898u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d89c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x23d89cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x23d8a0: 0x30c7001f  andi        $a3, $a2, 0x1F
    ctx->pc = 0x23d8a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x23d8a4: 0x24e2008c  addiu       $v0, $a3, 0x8C
    ctx->pc = 0x23d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 140));
    // 0x23d8a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23d8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d8ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23d8acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23d8b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d8b4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23d8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23d8b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D8B8u;
    SET_GPR_U32(ctx, 31, 0x23D8C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D8B8u, 0x23D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8C0u;
label_23d8c0:
    // 0x23d8c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23d8c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23d8c8: 0x2444000a  addiu       $a0, $v0, 0xA
    ctx->pc = 0x23d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23d8cc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x23d8ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x23d8d0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x23d8d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x23d8d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d8d8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d8dc: 0xa485005c  sh          $a1, 0x5C($a0)
    ctx->pc = 0x23d8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x23d8e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d8e4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d8e8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x23d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23d8ec: 0x2403ff47  addiu       $v1, $zero, -0xB9
    ctx->pc = 0x23d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x23d8f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d8f4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x23d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x23d8f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d8fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d900: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x23d900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    ctx->pc = 0x23d904u;
}
