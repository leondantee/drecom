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

// Function: R106_init
// Address: 0x27b660 - 0x27b828
void R106_init_0x27b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_init_0x27b660");
#endif

    switch (ctx->pc) {
        case 0x27b678u: goto label_27b678;
        case 0x27b688u: goto label_27b688;
        case 0x27b698u: goto label_27b698;
        case 0x27b6a0u: goto label_27b6a0;
        case 0x27b750u: goto label_27b750;
        case 0x27b7f0u: goto label_27b7f0;
        default: break;
    }

    ctx->pc = 0x27b660u;

    // 0x27b660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b664: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27b664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x27b668: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b66c: 0x24440cc0  addiu       $a0, $v0, 0xCC0
    ctx->pc = 0x27b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
    // 0x27b670: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x27B670u;
    SET_GPR_U32(ctx, 31, 0x27B678u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x27B670u, 0x27B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B678u;
label_27b678:
    // 0x27b678: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b67c: 0x24440dc0  addiu       $a0, $v0, 0xDC0
    ctx->pc = 0x27b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x27b680: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27B680u;
    SET_GPR_U32(ctx, 31, 0x27B688u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27B680u, 0x27B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B688u;
label_27b688:
    // 0x27b688: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27b688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27b68c: 0x8c24f9ec  lw          $a0, -0x614($at)
    ctx->pc = 0x27b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x27b690: 0xc077edc  jal         func_1DFB70
    ctx->pc = 0x27B690u;
    SET_GPR_U32(ctx, 31, 0x27B698u);
    ctx->pc = 0x1DFB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFB70u, 0x27B690u, 0x27B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B698u;
label_27b698:
    // 0x27b698: 0xc09f5b4  jal         func_27D6D0
    ctx->pc = 0x27B698u;
    SET_GPR_U32(ctx, 31, 0x27B6A0u);
    ctx->pc = 0x27D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D0u, 0x27B698u, 0x27B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6A0u;
label_27b6a0:
    // 0x27b6a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b6a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b6a8: 0xa022de11  sb          $v0, -0x21EF($at)
    ctx->pc = 0x27b6a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDE11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDE11u, _value); } while (0);
    // 0x27b6ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b6b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b6b4: 0xa422de18  sh          $v0, -0x21E8($at)
    ctx->pc = 0x27b6b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDE18u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CDE18u, _value); } while (0);
    // 0x27b6b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x27b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b6bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b6c0: 0xa422de1a  sh          $v0, -0x21E6($at)
    ctx->pc = 0x27b6c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDE1Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CDE1Au, _value); } while (0);
    // 0x27b6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b6c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b6cc: 0xa422de1c  sh          $v0, -0x21E4($at)
    ctx->pc = 0x27b6ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDE1Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CDE1Cu, _value); } while (0);
    // 0x27b6d0: 0x3c024524  lui         $v0, 0x4524
    ctx->pc = 0x27b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17700 << 16));
    // 0x27b6d4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x27b6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x27b6d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b6dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b6e0: 0xe420dd90  swc1        $f0, -0x2270($at)
    ctx->pc = 0x27b6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CDD90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDD90u, _value); } while (0); }
    // 0x27b6e4: 0x3c02c528  lui         $v0, 0xC528
    ctx->pc = 0x27b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50472 << 16));
    // 0x27b6e8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x27b6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x27b6ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b6f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b6f4: 0xe420dd98  swc1        $f0, -0x2268($at)
    ctx->pc = 0x27b6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CDD98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDD98u, _value); } while (0); }
    // 0x27b6f8: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x27b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x27b6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b700: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b704: 0xe420dda0  swc1        $f0, -0x2260($at)
    ctx->pc = 0x27b704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CDDA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDDA0u, _value); } while (0); }
    // 0x27b708: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27b70c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b710: 0xa022deb1  sb          $v0, -0x214F($at)
    ctx->pc = 0x27b710u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDEB1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDEB1u, _value); } while (0);
    // 0x27b714: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b718: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b71c: 0xa422deb8  sh          $v0, -0x2148($at)
    ctx->pc = 0x27b71cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDEB8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CDEB8u, _value); } while (0);
    // 0x27b720: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x27b720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x27b724: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b728: 0xa422deba  sh          $v0, -0x2146($at)
    ctx->pc = 0x27b728u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDEBAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CDEBAu, _value); } while (0);
    // 0x27b72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b734: 0xa422debc  sh          $v0, -0x2144($at)
    ctx->pc = 0x27b734u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDEBCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CDEBCu, _value); } while (0);
    // 0x27b738: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x27b738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x27b73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b744: 0xe420de40  swc1        $f0, -0x21C0($at)
    ctx->pc = 0x27b744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CDE40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDE40u, _value); } while (0); }
    // 0x27b748: 0xc09eeb8  jal         func_27BAE0
    ctx->pc = 0x27B748u;
    SET_GPR_U32(ctx, 31, 0x27B750u);
    ctx->pc = 0x27BAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BAE0u, 0x27B748u, 0x27B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B750u;
label_27b750:
    // 0x27b750: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27b750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b754: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b758: 0xa023d5f1  sb          $v1, -0x2A0F($at)
    ctx->pc = 0x27b758u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x27b75c: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x27b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x27b760: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b764: 0xa023d5f3  sb          $v1, -0x2A0D($at)
    ctx->pc = 0x27b764u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD5F3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F3u, _value); } while (0);
    // 0x27b768: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27b768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b76c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b770: 0xa423d5f8  sh          $v1, -0x2A08($at)
    ctx->pc = 0x27b770u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD5F8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5F8u, _value); } while (0);
    // 0x27b774: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b778: 0xa420d5fa  sh          $zero, -0x2A06($at)
    ctx->pc = 0x27b778u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD5FAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5FAu, _value); } while (0);
    // 0x27b77c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b780: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b784: 0xa423d5fc  sh          $v1, -0x2A04($at)
    ctx->pc = 0x27b784u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD5FCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5FCu, _value); } while (0);
    // 0x27b788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b78c: 0xa420d5fe  sh          $zero, -0x2A02($at)
    ctx->pc = 0x27b78cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD5FEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5FEu, _value); } while (0);
    // 0x27b790: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27b790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b794: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b798: 0xa023d4b1  sb          $v1, -0x2B4F($at)
    ctx->pc = 0x27b798u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x27b79c: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x27b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x27b7a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b7a4: 0xa023d4b3  sb          $v1, -0x2B4D($at)
    ctx->pc = 0x27b7a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B3u, _value); } while (0);
    // 0x27b7a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b7ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b7b0: 0xa423d4b8  sh          $v1, -0x2B48($at)
    ctx->pc = 0x27b7b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4B8u, _value); } while (0);
    // 0x27b7b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b7b8: 0xa420d4ba  sh          $zero, -0x2B46($at)
    ctx->pc = 0x27b7b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD4BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BAu, _value); } while (0);
    // 0x27b7bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b7c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b7c4: 0xa423d4bc  sh          $v1, -0x2B44($at)
    ctx->pc = 0x27b7c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BCu, _value); } while (0);
    // 0x27b7c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b7cc: 0xa420d4be  sh          $zero, -0x2B42($at)
    ctx->pc = 0x27b7ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD4BEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BEu, _value); } while (0);
    // 0x27b7d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b7d4: 0x8c241ae4  lw          $a0, 0x1AE4($at)
    ctx->pc = 0x27b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27b7d8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x27b7dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b7e0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x27B7E0u;
    {
        const bool branch_taken_0x27b7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b7e0) {
            ctx->pc = 0x27B818u;
            goto label_27b818;
        }
    }
    ctx->pc = 0x27B7E8u;
    // 0x27b7e8: 0xc09f898  jal         func_27E260
    ctx->pc = 0x27B7E8u;
    SET_GPR_U32(ctx, 31, 0x27B7F0u);
    ctx->pc = 0x27E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E260u, 0x27B7E8u, 0x27B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7F0u;
label_27b7f0:
    // 0x27b7f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27b7f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b7f8: 0xa023df51  sb          $v1, -0x20AF($at)
    ctx->pc = 0x27b7f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDF51u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDF51u, _value); } while (0);
    // 0x27b7fc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27b800: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b804: 0xac23df58  sw          $v1, -0x20A8($at)
    ctx->pc = 0x27b804u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDF58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDF58u, _value); } while (0);
    // 0x27b808: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27b808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27b80c: 0x2463e390  addiu       $v1, $v1, -0x1C70
    ctx->pc = 0x27b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960016));
    // 0x27b810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b814: 0xac23df5c  sw          $v1, -0x20A4($at)
    ctx->pc = 0x27b814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDF5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDF5Cu, _value); } while (0);
label_27b818:
    // 0x27b818: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27b818u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b81c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27b81cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27b820: 0x3e00008  jr          $ra
    ctx->pc = 0x27B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B828u;
}
