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

// Function: entry_0027f780
// Address: 0x27f780 - 0x27f8c4
void entry_0027f780_0x27f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f780_0x27f780");
#endif

    switch (ctx->pc) {
        case 0x27f7bcu: goto label_27f7bc;
        case 0x27f7c8u: goto label_27f7c8;
        case 0x27f7fcu: goto label_27f7fc;
        case 0x27f808u: goto label_27f808;
        case 0x27f83cu: goto label_27f83c;
        case 0x27f848u: goto label_27f848;
        case 0x27f85cu: goto label_27f85c;
        case 0x27f890u: goto label_27f890;
        default: break;
    }

    ctx->pc = 0x27f780u;

    // 0x27f780: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x27f780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27f784: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27F784u;
    {
        const bool branch_taken_0x27f784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f784) {
            ctx->pc = 0x27F748u;
            return;
        }
    }
    ctx->pc = 0x27F78Cu;
    // 0x27f78c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x27f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f790: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f794: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27f794u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27f798: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27f798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27f79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f7a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f7a4: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27f7a8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f7ac: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f7b0: 0x2445f990  addiu       $a1, $v0, -0x670
    ctx->pc = 0x27f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x27f7b4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F7B4u;
    SET_GPR_U32(ctx, 31, 0x27F7BCu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F7B4u, 0x27F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7BCu;
label_27f7bc:
    // 0x27f7bc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x27f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f7c0: 0xc084964  jal         func_212590
    ctx->pc = 0x27F7C0u;
    SET_GPR_U32(ctx, 31, 0x27F7C8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F7C0u, 0x27F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7C8u;
label_27f7c8:
    // 0x27f7c8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x27f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f7cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f7d0: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27f7d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27f7d4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x27f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x27f7d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x27f7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x27f7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f7e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f7e4: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27f7e8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f7ec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f7f0: 0x2445f990  addiu       $a1, $v0, -0x670
    ctx->pc = 0x27f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x27f7f4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F7F4u;
    SET_GPR_U32(ctx, 31, 0x27F7FCu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F7F4u, 0x27F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7FCu;
label_27f7fc:
    // 0x27f7fc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x27f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f800: 0xc084964  jal         func_212590
    ctx->pc = 0x27F800u;
    SET_GPR_U32(ctx, 31, 0x27F808u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F800u, 0x27F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F808u;
label_27f808:
    // 0x27f808: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x27f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f80c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f810: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27f810u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27f814: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x27f814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x27f818: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27f81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f820: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f824: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27f828: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f82c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f830: 0x2445f990  addiu       $a1, $v0, -0x670
    ctx->pc = 0x27f830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x27f834: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F834u;
    SET_GPR_U32(ctx, 31, 0x27F83Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F834u, 0x27F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F83Cu;
label_27f83c:
    // 0x27f83c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x27f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27f840: 0xc084964  jal         func_212590
    ctx->pc = 0x27F840u;
    SET_GPR_U32(ctx, 31, 0x27F848u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F840u, 0x27F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F848u;
label_27f848:
    // 0x27f848: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f84c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f850: 0x2445f940  addiu       $a1, $v0, -0x6C0
    ctx->pc = 0x27f850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
    // 0x27f854: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F854u;
    SET_GPR_U32(ctx, 31, 0x27F85Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F854u, 0x27F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F85Cu;
label_27f85c:
    // 0x27f85c: 0x2402010e  addiu       $v0, $zero, 0x10E
    ctx->pc = 0x27f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x27f860: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f864: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27f864u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27f868: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x27f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x27f86c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27f870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f874: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f878: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27f87c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f880: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f884: 0x2445fa90  addiu       $a1, $v0, -0x570
    ctx->pc = 0x27f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x27f888: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F888u;
    SET_GPR_U32(ctx, 31, 0x27F890u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F888u, 0x27F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F890u;
label_27f890:
    // 0x27f890: 0x3c02bb9e  lui         $v0, 0xBB9E
    ctx->pc = 0x27f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48030 << 16));
    // 0x27f894: 0x3442dd1e  ori         $v0, $v0, 0xDD1E
    ctx->pc = 0x27f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56606);
    // 0x27f898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f89c: 0x0  nop
    ctx->pc = 0x27f89cu;
    // NOP
    // 0x27f8a0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27f8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27f8a4: 0x3c023b9e  lui         $v0, 0x3B9E
    ctx->pc = 0x27f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15262 << 16));
    // 0x27f8a8: 0x3442dd1e  ori         $v0, $v0, 0xDD1E
    ctx->pc = 0x27f8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56606);
    // 0x27f8ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f8b0: 0x0  nop
    ctx->pc = 0x27f8b0u;
    // NOP
    // 0x27f8b4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27f8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27f8b8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27f8b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f8bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27F8BCu;
    {
        const bool branch_taken_0x27f8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8bc) {
            ctx->pc = 0x27F900u;
            return;
        }
    }
    ctx->pc = 0x27F8C4u;
}
