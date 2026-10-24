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

// Function: entry_0030774c
// Address: 0x30774c - 0x3078a8
void entry_0030774c_0x30774c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030774c_0x30774c");
#endif

    switch (ctx->pc) {
        case 0x3077a4u: goto label_3077a4;
        case 0x3077c0u: goto label_3077c0;
        case 0x3077dcu: goto label_3077dc;
        case 0x3077f8u: goto label_3077f8;
        case 0x307850u: goto label_307850;
        default: break;
    }

    ctx->pc = 0x30774cu;

    // 0x30774c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307750: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x307750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307754: 0x30830800  andi        $v1, $a0, 0x800
    ctx->pc = 0x307754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x307758: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x307758u;
    {
        const bool branch_taken_0x307758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307758) {
            ctx->pc = 0x3078A8u;
            return;
        }
    }
    ctx->pc = 0x307760u;
    // 0x307760: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307764: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x307764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307768: 0x34420801  ori         $v0, $v0, 0x801
    ctx->pc = 0x307768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2049);
    // 0x30776c: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30776cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x307770: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307774: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x307774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307778: 0x34820020  ori         $v0, $a0, 0x20
    ctx->pc = 0x307778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x30777c: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30777cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x307780: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x307780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307784: 0x8ce21338  lw          $v0, 0x1338($a3)
    ctx->pc = 0x307784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4920)));
    // 0x307788: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x307788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x30778c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x30778cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x307790: 0xace31338  sw          $v1, 0x1338($a3)
    ctx->pc = 0x307790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4920), GPR_U32(ctx, 3));
    // 0x307794: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307798: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x307798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x30779c: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x30779Cu;
    SET_GPR_U32(ctx, 31, 0x3077A4u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30779Cu, 0x3077A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077A4u;
label_3077a4:
    // 0x3077a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3077a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3077a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3077a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3077ac: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x3077acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x3077b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3077b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3077b4: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x3077b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x3077b8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3077B8u;
    SET_GPR_U32(ctx, 31, 0x3077C0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3077B8u, 0x3077C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077C0u;
label_3077c0:
    // 0x3077c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3077c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3077c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3077c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3077c8: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x3077c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x3077cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3077ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3077d0: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x3077d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x3077d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3077D4u;
    SET_GPR_U32(ctx, 31, 0x3077DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3077D4u, 0x3077DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077DCu;
label_3077dc:
    // 0x3077dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3077dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3077e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3077e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3077e4: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x3077e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x3077e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3077e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3077ec: 0x246400c0  addiu       $a0, $v1, 0xC0
    ctx->pc = 0x3077ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x3077f0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3077F0u;
    SET_GPR_U32(ctx, 31, 0x3077F8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3077F0u, 0x3077F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077F8u;
label_3077f8:
    // 0x3077f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3077f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3077fc: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x3077fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x307800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x307800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307804: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307808: 0x2483133c  addiu       $v1, $a0, 0x133C
    ctx->pc = 0x307808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4924));
    // 0x30780c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307810: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x307810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x307814: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x307814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x307818: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x307818u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30781c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x30781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307820: 0x2445133c  addiu       $a1, $v0, 0x133C
    ctx->pc = 0x307820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x307824: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x307824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307828: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x307828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x30782c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x30782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307830: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x307830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307834: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x307834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x307838: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x307838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x30783c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30783cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307840: 0x0  nop
    ctx->pc = 0x307840u;
    // NOP
    // 0x307844: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x307844u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x307848: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x307848u;
    SET_GPR_U32(ctx, 31, 0x307850u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x307848u, 0x307850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307850u;
label_307850:
    // 0x307850: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307854: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x307854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x307858: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x307858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30785c: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x30785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x307860: 0x3c03c110  lui         $v1, 0xC110
    ctx->pc = 0x307860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49424 << 16));
    // 0x307864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x307864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307868: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30786c: 0x2483133c  addiu       $v1, $a0, 0x133C
    ctx->pc = 0x30786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4924));
    // 0x307870: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x307870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307874: 0xe46000c4  swc1        $f0, 0xC4($v1)
    ctx->pc = 0x307874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x307878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x307878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30787c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307880: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307884: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x307884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x307888: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30788c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30788cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x307890: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307894: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x307894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307898: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30789c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30789cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3078a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3078a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3078a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3078a8u;
}
