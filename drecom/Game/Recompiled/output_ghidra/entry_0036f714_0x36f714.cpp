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

// Function: entry_0036f714
// Address: 0x36f714 - 0x36fbac
void entry_0036f714_0x36f714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036f714_0x36f714");
#endif

    switch (ctx->pc) {
        case 0x36f720u: goto label_36f720;
        case 0x36f73cu: goto label_36f73c;
        case 0x36f924u: goto label_36f924;
        case 0x36f948u: goto label_36f948;
        case 0x36f968u: goto label_36f968;
        case 0x36fb48u: goto label_36fb48;
        case 0x36fb6cu: goto label_36fb6c;
        case 0x36fb90u: goto label_36fb90;
        default: break;
    }

    ctx->pc = 0x36f714u;

    // 0x36f714: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36f718: 0xc05da88  jal         func_176A20
    ctx->pc = 0x36F718u;
    SET_GPR_U32(ctx, 31, 0x36F720u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x36F718u, 0x36F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F720u;
label_36f720:
    // 0x36f720: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f724: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f72c: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x36f72cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x36f730: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36f734: 0xc05da88  jal         func_176A20
    ctx->pc = 0x36F734u;
    SET_GPR_U32(ctx, 31, 0x36F73Cu);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x36F734u, 0x36F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F73Cu;
label_36f73c:
    // 0x36f73c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f740: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f744: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f748: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x36f748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x36f74c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f754: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f758: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f75c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f764: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f768: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f76c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f770: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x36f770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f774: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x36f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x36f778: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x36f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x36f77c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36f77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36f780: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x36f780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x36f784: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x36f784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x36f788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f78c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f790: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f794: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f798: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f79c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f7a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f7a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f7a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f7ac: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f7b4: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x36f7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x36f7b8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x36f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x36f7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f7c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f7c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f7c8: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f7cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f7d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f7d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f7dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f7e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f7e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f7e8: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x36f7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x36f7ec: 0x3c024324  lui         $v0, 0x4324
    ctx->pc = 0x36f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17188 << 16));
    // 0x36f7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f7f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f7f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f7fc: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f800: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f804: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f80c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f810: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f814: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f81c: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x36f81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x36f820: 0x3c023f5c  lui         $v0, 0x3F5C
    ctx->pc = 0x36f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16220 << 16));
    // 0x36f824: 0x3442dcdd  ori         $v0, $v0, 0xDCDD
    ctx->pc = 0x36f824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56541);
    // 0x36f828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f82c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f830: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f834: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f838: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f83c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f844: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f848: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f84c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f854: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x36f854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x36f858: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x36f858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x36f85c: 0x3442f0f1  ori         $v0, $v0, 0xF0F1
    ctx->pc = 0x36f85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61681);
    // 0x36f860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f864: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f868: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f86c: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f870: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f874: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f87c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f880: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f884: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f88c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x36f88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x36f890: 0x3c023f24  lui         $v0, 0x3F24
    ctx->pc = 0x36f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16164 << 16));
    // 0x36f894: 0x3442a4a5  ori         $v0, $v0, 0xA4A5
    ctx->pc = 0x36f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42149);
    // 0x36f898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f89c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f8a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f8a4: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f8a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f8ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f8b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f8b4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f8b8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f8bc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f8c4: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x36f8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x36f8c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f8cc: 0x0  nop
    ctx->pc = 0x36f8ccu;
    // NOP
    // 0x36f8d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x36f8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36f8d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f8d8: 0x0  nop
    ctx->pc = 0x36f8d8u;
    // NOP
    // 0x36f8dc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x36f8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x36f8e0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x36f8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f8e8: 0x0  nop
    ctx->pc = 0x36f8e8u;
    // NOP
    // 0x36f8ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x36f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36f8f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f8f8: 0x0  nop
    ctx->pc = 0x36f8f8u;
    // NOP
    // 0x36f8fc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x36f8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x36f900: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f904: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f908: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f90c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f910: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36f910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36f914: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x36f914u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x36f918: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x36f918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36f91c: 0xc05db20  jal         func_176C80
    ctx->pc = 0x36F91Cu;
    SET_GPR_U32(ctx, 31, 0x36F924u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x36F91Cu, 0x36F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F924u;
label_36f924:
    // 0x36f924: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f928: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f92c: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f930: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f934: 0x3c0244a2  lui         $v0, 0x44A2
    ctx->pc = 0x36f934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17570 << 16));
    // 0x36f938: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36f938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36f93c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36f93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36f940: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x36F940u;
    SET_GPR_U32(ctx, 31, 0x36F948u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x36F940u, 0x36F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F948u;
label_36f948:
    // 0x36f948: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f94c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f950: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f954: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f958: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x36f958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x36f95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36f95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36f960: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x36F960u;
    SET_GPR_U32(ctx, 31, 0x36F968u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x36F960u, 0x36F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F968u;
label_36f968:
    // 0x36f968: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f96c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f970: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36f970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36f974: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f978: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f980: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f984: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f988: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f98c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x36f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f990: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x36f990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x36f994: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x36f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x36f998: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36f998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36f99c: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x36f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x36f9a0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36f9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f9a8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f9ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f9b0: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36f9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36f9b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f9b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f9c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f9c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f9c8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f9cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f9d0: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x36f9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x36f9d4: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x36f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x36f9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36f9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f9dc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f9e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f9e4: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36f9e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36f9e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f9ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f9f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f9f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f9fc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36fa00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x36fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa04: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x36fa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x36fa08: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x36fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x36fa0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36fa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fa10: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fa14: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x36fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36fa18: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36fa18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36fa1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36fa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fa20: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36fa24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36fa2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36fa30: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36fa34: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36fa34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa38: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x36fa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x36fa3c: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x36fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x36fa40: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x36fa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x36fa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36fa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fa48: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fa4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36fa50: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36fa50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36fa54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36fa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fa58: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36fa5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36fa64: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36fa68: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36fa6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa70: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x36fa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x36fa74: 0x3c023f5c  lui         $v0, 0x3F5C
    ctx->pc = 0x36fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16220 << 16));
    // 0x36fa78: 0x3443dcdd  ori         $v1, $v0, 0xDCDD
    ctx->pc = 0x36fa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56541);
    // 0x36fa7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36fa7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fa80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fa84: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x36fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36fa88: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36fa88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36fa8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36fa8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fa90: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36fa94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa98: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36fa9c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36faa0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36faa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36faa8: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x36faa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x36faac: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x36faacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
    // 0x36fab0: 0x34429091  ori         $v0, $v0, 0x9091
    ctx->pc = 0x36fab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
    // 0x36fab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36fab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fab8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fabc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36fac0: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36fac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36fac4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36fac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fac8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36facc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fad0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36fad4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36fad8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36fadc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fae0: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x36fae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x36fae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36fae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fae8: 0x0  nop
    ctx->pc = 0x36fae8u;
    // NOP
    // 0x36faec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x36faecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36faf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36faf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36faf4: 0x0  nop
    ctx->pc = 0x36faf4u;
    // NOP
    // 0x36faf8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x36faf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x36fafc: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x36fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x36fb00: 0x34528000  ori         $s2, $v0, 0x8000
    ctx->pc = 0x36fb00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36fb04: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x36fb04u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fb08: 0x0  nop
    ctx->pc = 0x36fb08u;
    // NOP
    // 0x36fb0c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x36fb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36fb10: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x36fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x36fb14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36fb14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fb18: 0x0  nop
    ctx->pc = 0x36fb18u;
    // NOP
    // 0x36fb1c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x36fb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x36fb20: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x36fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fb24: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x36fb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x36fb28: 0x90e8000d  lbu         $t0, 0xD($a3)
    ctx->pc = 0x36fb28u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x36fb2c: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x36fb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x36fb30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36fb30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36fb34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36fb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36fb38: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x36fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x36fb3c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x36fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36fb40: 0xc05db20  jal         func_176C80
    ctx->pc = 0x36FB40u;
    SET_GPR_U32(ctx, 31, 0x36FB48u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x36FB40u, 0x36FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB48u;
label_36fb48:
    // 0x36fb48: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x36fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
    // 0x36fb4c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x36fb4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36fb50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fb54: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36fb58: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x36fb58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x36fb5c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x36fb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fb60: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x36fb60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x36fb64: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x36FB64u;
    SET_GPR_U32(ctx, 31, 0x36FB6Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x36FB64u, 0x36FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB6Cu;
label_36fb6c:
    // 0x36fb6c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fb70: 0x24511330  addiu       $s1, $v0, 0x1330
    ctx->pc = 0x36fb70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36fb74: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x36fb74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x36fb78: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36fb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fb7c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x36fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x36fb80: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x36fb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36fb84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36fb84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36fb88: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x36FB88u;
    SET_GPR_U32(ctx, 31, 0x36FB90u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x36FB88u, 0x36FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB90u;
label_36fb90:
    // 0x36fb90: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x36fb90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36fb94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36fb94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fb98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36fb98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fb9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36fb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fba0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x36fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36fba4: 0x3e00008  jr          $ra
    ctx->pc = 0x36FBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FBACu;
}
