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

// Function: entry_00247094
// Address: 0x247094 - 0x247230
void entry_00247094_0x247094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247094_0x247094");
#endif

    switch (ctx->pc) {
        case 0x2470c0u: goto label_2470c0;
        case 0x2470dcu: goto label_2470dc;
        case 0x2470f4u: goto label_2470f4;
        case 0x247100u: goto label_247100;
        case 0x247188u: goto label_247188;
        case 0x24720cu: goto label_24720c;
        case 0x247214u: goto label_247214;
        default: break;
    }

    ctx->pc = 0x247094u;

    // 0x247094: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x247094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x247098: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x247098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24709c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x24709cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2470a0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2470a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470a4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2470a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470a8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2470a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2470ac: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2470acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2470b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2470b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2470b4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2470b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2470b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2470B8u;
    SET_GPR_U32(ctx, 31, 0x2470C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2470B8u, 0x2470C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470C0u;
label_2470c0:
    // 0x2470c0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2470c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2470c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2470c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2470c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2470cc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2470ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2470d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2470d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2470d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2470D4u;
    SET_GPR_U32(ctx, 31, 0x2470DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2470D4u, 0x2470DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470DCu;
label_2470dc:
    // 0x2470dc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2470dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2470e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2470e4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2470e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2470e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2470ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2470ECu;
    SET_GPR_U32(ctx, 31, 0x2470F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2470ECu, 0x2470F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470F4u;
label_2470f4:
    // 0x2470f4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2470f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2470f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2470F8u;
    SET_GPR_U32(ctx, 31, 0x247100u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2470F8u, 0x247100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247100u;
label_247100:
    // 0x247100: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247104: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x247104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x247108: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x247108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24710c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x24710cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x247110: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x247110u;
    {
        const bool branch_taken_0x247110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247110) {
            ctx->pc = 0x2472E0u;
            return;
        }
    }
    ctx->pc = 0x247118u;
    // 0x247118: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24711c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x24711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x247120: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x247120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x247124: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x247124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x247128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24712c: 0x0  nop
    ctx->pc = 0x24712cu;
    // NOP
    // 0x247130: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x247130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x247134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247138: 0x0  nop
    ctx->pc = 0x247138u;
    // NOP
    // 0x24713c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x24713cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x247140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247144: 0x0  nop
    ctx->pc = 0x247144u;
    // NOP
    // 0x247148: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x247148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x24714c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x247150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247154: 0x0  nop
    ctx->pc = 0x247154u;
    // NOP
    // 0x247158: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x247158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x24715c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x24715cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x247160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247164: 0x0  nop
    ctx->pc = 0x247164u;
    // NOP
    // 0x247168: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x247168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24716c: 0xa7a00074  sh          $zero, 0x74($sp)
    ctx->pc = 0x24716cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x247170: 0xa3a00076  sb          $zero, 0x76($sp)
    ctx->pc = 0x247170u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x247174: 0xa3a00077  sb          $zero, 0x77($sp)
    ctx->pc = 0x247174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x247178: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x247178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24717c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x24717cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x247180: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x247180u;
    SET_GPR_U32(ctx, 31, 0x247188u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x247180u, 0x247188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247188u;
label_247188:
    // 0x247188: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x247188u;
    {
        const bool branch_taken_0x247188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247188) {
            ctx->pc = 0x2472E0u;
            return;
        }
    }
    ctx->pc = 0x247190u;
    // 0x247190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247194: 0x0  nop
    ctx->pc = 0x247194u;
    // NOP
    // 0x247198: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x247198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24719c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2471a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2471a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2471a4: 0x0  nop
    ctx->pc = 0x2471a4u;
    // NOP
    // 0x2471a8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2471a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2471ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2471acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2471b0: 0x0  nop
    ctx->pc = 0x2471b0u;
    // NOP
    // 0x2471b4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2471b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2471b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2471b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2471bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2471bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2471c0: 0x0  nop
    ctx->pc = 0x2471c0u;
    // NOP
    // 0x2471c4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2471c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2471c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2471c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2471cc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2471ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2471d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2471d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2471d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2471d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2471d8: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2471d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2471dc: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2471dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2471e0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2471e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2471e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2471e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2471e8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2471e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2471ec: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2471ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2471f0: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x2471f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x2471f4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2471f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2471f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2471f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2471fc: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x2471fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x247200: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x247200u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x247204: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x247204u;
    SET_GPR_U32(ctx, 31, 0x24720Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x247204u, 0x24720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24720Cu;
label_24720c:
    // 0x24720c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24720Cu;
    SET_GPR_U32(ctx, 31, 0x247214u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24720Cu, 0x247214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247214u;
label_247214:
    // 0x247214: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247214u;
    {
        const bool branch_taken_0x247214 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x247214) {
            ctx->pc = 0x247230u;
            return;
        }
    }
    ctx->pc = 0x24721Cu;
    // 0x24721c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24721cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247220: 0x0  nop
    ctx->pc = 0x247220u;
    // NOP
    // 0x247224: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x247224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x247228: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x247228u;
    {
        const bool branch_taken_0x247228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247228) {
            ctx->pc = 0x24724Cu;
            return;
        }
    }
    ctx->pc = 0x247230u;
}
