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

// Function: eff2d_04_move
// Address: 0x21de20 - 0x21e0e4
void eff2d_04_move_0x21de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_04_move_0x21de20");
#endif

    switch (ctx->pc) {
        case 0x21dee4u: goto label_21dee4;
        case 0x21defcu: goto label_21defc;
        case 0x21df3cu: goto label_21df3c;
        case 0x21df58u: goto label_21df58;
        case 0x21dfe8u: goto label_21dfe8;
        default: break;
    }

    ctx->pc = 0x21de20u;

    // 0x21de20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21de24: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x21de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x21de28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21de2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21de30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21de30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21de34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21de34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21de38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21de38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21de3c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x21de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x21de40: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21de44: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x21de44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21de48: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x21de48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21de4c: 0x1083009c  beq         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x21DE4Cu;
    {
        const bool branch_taken_0x21de4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21de4c) {
            ctx->pc = 0x21E0C0u;
            goto label_21e0c0;
        }
    }
    ctx->pc = 0x21DE54u;
    // 0x21de54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DE54u;
    {
        const bool branch_taken_0x21de54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21de54) {
            ctx->pc = 0x21DE64u;
            goto label_21de64;
        }
    }
    ctx->pc = 0x21DE5Cu;
    // 0x21de5c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x21DE5Cu;
    {
        const bool branch_taken_0x21de5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21de5c) {
            ctx->pc = 0x21E0C0u;
            goto label_21e0c0;
        }
    }
    ctx->pc = 0x21DE64u;
label_21de64:
    // 0x21de64: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21de68: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x21de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21de6c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x21de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x21de70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21de70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21de74: 0x0  nop
    ctx->pc = 0x21de74u;
    // NOP
    // 0x21de78: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x21de78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21de7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21de7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21de80: 0x0  nop
    ctx->pc = 0x21de80u;
    // NOP
    // 0x21de84: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x21de84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x21de88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21de88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21de8c: 0x0  nop
    ctx->pc = 0x21de8cu;
    // NOP
    // 0x21de90: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x21de90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x21de94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21de98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21de98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21de9c: 0x0  nop
    ctx->pc = 0x21de9cu;
    // NOP
    // 0x21dea0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x21dea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x21dea4: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x21dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x21dea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21dea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21deac: 0x0  nop
    ctx->pc = 0x21deacu;
    // NOP
    // 0x21deb0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x21deb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21deb4: 0xa7a00094  sh          $zero, 0x94($sp)
    ctx->pc = 0x21deb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x21deb8: 0xa3a00096  sb          $zero, 0x96($sp)
    ctx->pc = 0x21deb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 150), (uint8_t)GPR_U32(ctx, 0));
    // 0x21debc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21dec0: 0xa3a20097  sb          $v0, 0x97($sp)
    ctx->pc = 0x21dec0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x21dec4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21dec8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21decc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21ded0: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x21ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x21ded4: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21ded4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21ded8: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x21ded8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x21dedc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x21DEDCu;
    SET_GPR_U32(ctx, 31, 0x21DEE4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x21DEDCu, 0x21DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEE4u;
label_21dee4:
    // 0x21dee4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x21dee4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21dee8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x21deec: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x21deecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x21def0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x21def0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21def4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x21DEF4u;
    SET_GPR_U32(ctx, 31, 0x21DEFCu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x21DEF4u, 0x21DEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEFCu;
label_21defc:
    // 0x21defc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DEFCu;
    {
        const bool branch_taken_0x21defc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21defc) {
            ctx->pc = 0x21DF0Cu;
            goto label_21df0c;
        }
    }
    ctx->pc = 0x21DF04u;
    // 0x21df04: 0x1280006e  beqz        $s4, . + 4 + (0x6E << 2)
    ctx->pc = 0x21DF04u;
    {
        const bool branch_taken_0x21df04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x21df04) {
            ctx->pc = 0x21E0C0u;
            goto label_21e0c0;
        }
    }
    ctx->pc = 0x21DF0Cu;
label_21df0c:
    // 0x21df0c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df10: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x21df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x21df14: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21df18: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x21df18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    // 0x21df1c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x21df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df28: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x21df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x21df2c: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x21df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21df30: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x21df30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x21df34: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x21DF34u;
    SET_GPR_U32(ctx, 31, 0x21DF3Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x21DF34u, 0x21DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF3Cu;
label_21df3c:
    // 0x21df3c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df40: 0x24040309  addiu       $a0, $zero, 0x309
    ctx->pc = 0x21df40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
    // 0x21df44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21df44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21df48: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21df48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21df4c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21df4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21df50: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21DF50u;
    SET_GPR_U32(ctx, 31, 0x21DF58u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21DF50u, 0x21DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF58u;
label_21df58:
    // 0x21df58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df5c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21df5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21df60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df64: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df68: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21df68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df70: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df74: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21df74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df7c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df80: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21df80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df88: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df8c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21df8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df94: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df98: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21df98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfa0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfa4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21dfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfa8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfb0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21dfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfb8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfbc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21dfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfc4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfc8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21dfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfcc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfd0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfd4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21dfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfdc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfe0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21DFE0u;
    SET_GPR_U32(ctx, 31, 0x21DFE8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21DFE0u, 0x21DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFE8u;
label_21dfe8:
    // 0x21dfe8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfec: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21dfecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21dff0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dff4: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21dff8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21dffc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21dffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21e000: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E000u;
    {
        const bool branch_taken_0x21e000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e000) {
            ctx->pc = 0x21E014u;
            goto label_21e014;
        }
    }
    ctx->pc = 0x21E008u;
    // 0x21e008: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21e008u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e00c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21E00Cu;
    {
        const bool branch_taken_0x21e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e00c) {
            ctx->pc = 0x21E030u;
            goto label_21e030;
        }
    }
    ctx->pc = 0x21E014u;
label_21e014:
    // 0x21e014: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21e014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21e018: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21e018u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21e01c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21e01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21e020: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21e020u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21e024: 0x24720118  addiu       $s2, $v1, 0x118
    ctx->pc = 0x21e024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21e028: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x21e028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21e02c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x21e02cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21e030:
    // 0x21e030: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21e030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21e034: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x21e034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21e038: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x21e038u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21e03c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21e040: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21e040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21e044: 0x1203001e  beq         $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x21E044u;
    {
        const bool branch_taken_0x21e044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21e044) {
            ctx->pc = 0x21E0C0u;
            goto label_21e0c0;
        }
    }
    ctx->pc = 0x21E04Cu;
    // 0x21e04c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21e050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e054: 0x0  nop
    ctx->pc = 0x21e054u;
    // NOP
    // 0x21e058: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21e058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21e05c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21e060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e064: 0x0  nop
    ctx->pc = 0x21e064u;
    // NOP
    // 0x21e068: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21e068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21e06c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21e070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e074: 0x0  nop
    ctx->pc = 0x21e074u;
    // NOP
    // 0x21e078: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21e078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21e07c: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x21e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x21e080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e084: 0x0  nop
    ctx->pc = 0x21e084u;
    // NOP
    // 0x21e088: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21e088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21e08c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x21e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x21e090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e094: 0x0  nop
    ctx->pc = 0x21e094u;
    // NOP
    // 0x21e098: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21e098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21e09c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e0a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e0a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e0a4: 0x0  nop
    ctx->pc = 0x21e0a4u;
    // NOP
    // 0x21e0a8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21e0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21e0ac: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x21e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x21e0b0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x21e0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x21e0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e0b8: 0x0  nop
    ctx->pc = 0x21e0b8u;
    // NOP
    // 0x21e0bc: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21e0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
label_21e0c0:
    // 0x21e0c0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x21e0c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e0c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21e0c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e0c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e0c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e0cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e0d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e0d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x21e0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21e0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x21E0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E0E4u;
}
