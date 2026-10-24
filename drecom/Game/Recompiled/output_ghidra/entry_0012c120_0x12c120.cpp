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

// Function: entry_0012c120
// Address: 0x12c120 - 0x12c27c
void entry_0012c120_0x12c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c120_0x12c120");
#endif

    switch (ctx->pc) {
        case 0x12c130u: goto label_12c130;
        case 0x12c154u: goto label_12c154;
        case 0x12c174u: goto label_12c174;
        case 0x12c18cu: goto label_12c18c;
        case 0x12c1a0u: goto label_12c1a0;
        case 0x12c1b4u: goto label_12c1b4;
        case 0x12c1d0u: goto label_12c1d0;
        case 0x12c208u: goto label_12c208;
        case 0x12c230u: goto label_12c230;
        default: break;
    }

    ctx->pc = 0x12c120u;

    // 0x12c120: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c124: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c124u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c128: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12C128u;
    SET_GPR_U32(ctx, 31, 0x12C130u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C128u, 0x12C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C130u;
label_12c130:
    // 0x12c130: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c134: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c138: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x12c138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
    // 0x12c13c: 0x3464b8c2  ori         $a0, $v1, 0xB8C2
    ctx->pc = 0x12c13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x12c140: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x12c140u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12c144: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x12c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12c148: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12c148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12c14c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12C14Cu;
    SET_GPR_U32(ctx, 31, 0x12C154u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12C14Cu, 0x12C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C154u;
label_12c154:
    // 0x12c154: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c158: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x12c158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
    // 0x12c15c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x12c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x12c160: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x12c160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x12c164: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12c164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12c168: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c16c: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x12C16Cu;
    SET_GPR_U32(ctx, 31, 0x12C174u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12C16Cu, 0x12C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C174u;
label_12c174:
    // 0x12c174: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12c174u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c178: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c17c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c180: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12c180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12c184: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12C184u;
    SET_GPR_U32(ctx, 31, 0x12C18Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12C184u, 0x12C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C18Cu;
label_12c18c:
    // 0x12c18c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c190: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12c194: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12c198: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12C198u;
    SET_GPR_U32(ctx, 31, 0x12C1A0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12C1A0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12C1A0u) { return; }
    ctx->pc = 0x12C1A0u;
label_12c1a0:
    // 0x12c1a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c1a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c1a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c1a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c1ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12C1ACu;
    SET_GPR_U32(ctx, 31, 0x12C1B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C1ACu, 0x12C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1B4u;
label_12c1b4:
    // 0x12c1b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c1b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12c1bc: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x12c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x12c1c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12c1c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c1c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12c1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12c1c8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12C1C8u;
    SET_GPR_U32(ctx, 31, 0x12C1D0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12C1C8u, 0x12C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1D0u;
label_12c1d0:
    // 0x12c1d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c1d4: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c1d8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12c1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c1dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c1dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c1e0: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12c1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x12c1e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c1e8: 0xc48112a8  lwc1        $f1, 0x12A8($a0)
    ctx->pc = 0x12c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c1ec: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12c1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c1f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c1f4: 0xe48012a8  swc1        $f0, 0x12A8($a0)
    ctx->pc = 0x12c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4776), bits); }
    // 0x12c1f8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c1fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12c1fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x12c200: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12C200u;
    SET_GPR_U32(ctx, 31, 0x12C208u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C200u, 0x12C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C208u;
label_12c208:
    // 0x12c208: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c20c: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x12c20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x12c210: 0x1060014c  beqz        $v1, . + 4 + (0x14C << 2)
    ctx->pc = 0x12C210u;
    {
        const bool branch_taken_0x12c210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c210) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C218u;
    // 0x12c218: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12c218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12c21c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c220: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12c220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12c224: 0x84268db8  lh          $a2, -0x7248($at)
    ctx->pc = 0x12c224u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x388DB8u));
    // 0x12c228: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x12C228u;
    SET_GPR_U32(ctx, 31, 0x12C230u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12C228u, 0x12C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C230u;
label_12c230:
    // 0x12c230: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x12c230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x12c234: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12c238: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c238u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12c23c: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12C23Cu;
    {
        const bool branch_taken_0x12c23c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12c23c) {
            ctx->pc = 0x12C27Cu;
            return;
        }
    }
    ctx->pc = 0x12C244u;
    // 0x12c244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12c244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c248: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c24c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12c24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12c250: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x12c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12c254: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c258: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12c258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12c25c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c260: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12c260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c264: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c268: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c268u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c26c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c270: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12c270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12c274: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x12C274u;
    {
        const bool branch_taken_0x12c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c274) {
            ctx->pc = 0x12C87Cu;
            return;
        }
    }
    ctx->pc = 0x12C27Cu;
}
