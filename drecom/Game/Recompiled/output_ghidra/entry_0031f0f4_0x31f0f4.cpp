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

// Function: entry_0031f0f4
// Address: 0x31f0f4 - 0x31f21c
void entry_0031f0f4_0x31f0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f0f4_0x31f0f4");
#endif

    switch (ctx->pc) {
        case 0x31f10cu: goto label_31f10c;
        case 0x31f164u: goto label_31f164;
        case 0x31f1e8u: goto label_31f1e8;
        case 0x31f214u: goto label_31f214;
        default: break;
    }

    ctx->pc = 0x31f0f4u;

    // 0x31f0f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x31f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31f0f8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x31f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31f0fc: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x31f0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31f100: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x31f100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31f104: 0xc0c7cf0  jal         func_31F3C0
    ctx->pc = 0x31F104u;
    SET_GPR_U32(ctx, 31, 0x31F10Cu);
    ctx->pc = 0x31F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F3C0u, 0x31F104u, 0x31F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F10Cu;
label_31f10c:
    // 0x31f10c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f110: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f114: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x31f114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x31f118: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f11c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f120: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f124: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f128: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f12c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f130: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x31f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x31f134: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f138: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f13c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f13cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f140: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31f140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31f144: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x31f144u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x31f148: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31f14c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x31f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31f150: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31f150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31f154: 0xac22af60  sw          $v0, -0x50A0($at)
    ctx->pc = 0x31f154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF60u, _value); } while (0);
    // 0x31f158: 0x240400be  addiu       $a0, $zero, 0xBE
    ctx->pc = 0x31f158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x31f15c: 0xc084964  jal         func_212590
    ctx->pc = 0x31F15Cu;
    SET_GPR_U32(ctx, 31, 0x31F164u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x31F15Cu, 0x31F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F164u;
label_31f164:
    // 0x31f164: 0x93a20098  lbu         $v0, 0x98($sp)
    ctx->pc = 0x31f164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31f168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31f168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31f16c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x31f16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x31f170: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31f174: 0x622006  srlv        $a0, $v0, $v1
    ctx->pc = 0x31f174u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x31f178: 0x93a20098  lbu         $v0, 0x98($sp)
    ctx->pc = 0x31f178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31f17c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31f17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31f180: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x31f180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x31f184: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31f184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31f188: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31f18c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x31f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31f190: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31f190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f194: 0x8c621a24  lw          $v0, 0x1A24($v1)
    ctx->pc = 0x31f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6692)));
    // 0x31f198: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31f198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31f19c: 0xac621a24  sw          $v0, 0x1A24($v1)
    ctx->pc = 0x31f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6692), GPR_U32(ctx, 2));
    // 0x31f1a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f1a4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x31f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x31f1a8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x31f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x31f1ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f1b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f1b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f1b8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x31f1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x31f1bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x31f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31f1c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31f1c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f1c8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31f1cc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31f1d0: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x31f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x31f1d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f1d8: 0xa0400081  sb          $zero, 0x81($v0)
    ctx->pc = 0x31f1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f1dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x31f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31f1e0: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x31F1E0u;
    SET_GPR_U32(ctx, 31, 0x31F1E8u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x31F1E0u, 0x31F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1E8u;
label_31f1e8:
    // 0x31f1e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f1ec: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f1f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31f1f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f1f8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31f1fc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31f200: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x31f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x31f204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f208: 0xa0440080  sb          $a0, 0x80($v0)
    ctx->pc = 0x31f208u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x31f20c: 0xc0a128c  jal         func_284A30
    ctx->pc = 0x31F20Cu;
    SET_GPR_U32(ctx, 31, 0x31F214u);
    ctx->pc = 0x284A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A30u, 0x31F20Cu, 0x31F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F214u;
label_31f214:
    // 0x31f214: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31F214u;
    {
        const bool branch_taken_0x31f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f214) {
            ctx->pc = 0x31F2DCu;
            return;
        }
    }
    ctx->pc = 0x31F21Cu;
}
