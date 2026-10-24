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

// Function: caseD_0
// Address: 0x20eaec - 0x20edc4
void caseD_0_0x20eaec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x20eaec");
#endif

    switch (ctx->pc) {
        case 0x20eb30u: goto label_20eb30;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ecb4u: goto label_20ecb4;
        default: break;
    }

    ctx->pc = 0x20eaecu;

    // 0x20eaec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20eaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20eaf0: 0x8c291a48  lw          $t1, 0x1A48($at)
    ctx->pc = 0x20eaf0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x20eaf4: 0x3c0a0400  lui         $t2, 0x400
    ctx->pc = 0x20eaf4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1024 << 16));
    // 0x20eaf8: 0x12a2825  or          $a1, $t1, $t2
    ctx->pc = 0x20eaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x20eafc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20eb00: 0xac251a48  sw          $a1, 0x1A48($at)
    ctx->pc = 0x20eb00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x20eb04: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eb04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eb08: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eb0c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20eb0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20eb10: 0x8cc30368  lw          $v1, 0x368($a2)
    ctx->pc = 0x20eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
    // 0x20eb14: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x20eb14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x20eb18: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x20eb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20eb1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20eb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb20: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x20eb20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20eb24: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x20eb24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20eb28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20EB28u;
    SET_GPR_U32(ctx, 31, 0x20EB30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20EB28u, 0x20EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB30u;
label_20eb30:
    // 0x20eb30: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x20eb30u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20eb34: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20eb34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eb38: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x20eb38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x20eb3c: 0x35470040  ori         $a3, $t2, 0x40
    ctx->pc = 0x20eb3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64);
    // 0x20eb40: 0xad270008  sw          $a3, 0x8($t1)
    ctx->pc = 0x20eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 7));
    // 0x20eb44: 0x3c063f19  lui         $a2, 0x3F19
    ctx->pc = 0x20eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16153 << 16));
    // 0x20eb48: 0x34c3999a  ori         $v1, $a2, 0x999A
    ctx->pc = 0x20eb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x20eb4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20eb4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eb50: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eb54: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x20eb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x20eb58: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20eb58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eb5c: 0xe52001a4  swc1        $f0, 0x1A4($t1)
    ctx->pc = 0x20eb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 420), bits); }
    // 0x20eb60: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20eb60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eb64: 0xe54001a0  swc1        $f0, 0x1A0($t2)
    ctx->pc = 0x20eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 416), bits); }
    // 0x20eb68: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x20eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x20eb6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20eb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20eb70: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eb74: 0xe4810188  swc1        $f1, 0x188($a0)
    ctx->pc = 0x20eb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x20eb78: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x20eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
    // 0x20eb7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20eb7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eb80: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eb84: 0xe4c00184  swc1        $f0, 0x184($a2)
    ctx->pc = 0x20eb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 388), bits); }
    // 0x20eb88: 0x3c0ac5ab  lui         $t2, 0xC5AB
    ctx->pc = 0x20eb88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)50603 << 16));
    // 0x20eb8c: 0x3549e000  ori         $t1, $t2, 0xE000
    ctx->pc = 0x20eb8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)57344);
    // 0x20eb90: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x20eb90u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eb94: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eb98: 0xe4c00120  swc1        $f0, 0x120($a2)
    ctx->pc = 0x20eb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 288), bits); }
    // 0x20eb9c: 0x3c094683  lui         $t1, 0x4683
    ctx->pc = 0x20eb9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)18051 << 16));
    // 0x20eba0: 0x35234000  ori         $v1, $t1, 0x4000
    ctx->pc = 0x20eba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
    // 0x20eba4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20eba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20eba8: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20eba8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ebac: 0xe5410124  swc1        $f1, 0x124($t2)
    ctx->pc = 0x20ebacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 292), bits); }
    // 0x20ebb0: 0x3c05c616  lui         $a1, 0xC616
    ctx->pc = 0x20ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50710 << 16));
    // 0x20ebb4: 0x34a2a000  ori         $v0, $a1, 0xA000
    ctx->pc = 0x20ebb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x20ebb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ebb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ebbc: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ebc0: 0xe4c00128  swc1        $f0, 0x128($a2)
    ctx->pc = 0x20ebc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 296), bits); }
    // 0x20ebc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ebc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ebc8: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20ebc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ebcc: 0xe4e000d4  swc1        $f0, 0xD4($a3)
    ctx->pc = 0x20ebccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
    // 0x20ebd0: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ebd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ebd4: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20ebd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ebd8: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x20ebd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20ebdc: 0x8d0a0368  lw          $t2, 0x368($t0)
    ctx->pc = 0x20ebdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
    // 0x20ebe0: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x20ebe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20ebe4: 0x2402780f  addiu       $v0, $zero, 0x780F
    ctx->pc = 0x20ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30735));
    // 0x20ebe8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x20ebe8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20ebec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20ebecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ebf0: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x20ebf0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20ebf4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x20ebf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ebf8: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x20ebf8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20ebfc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20EBFCu;
    SET_GPR_U32(ctx, 31, 0x20EC04u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20EBFCu, 0x20EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC04u;
label_20ec04:
    // 0x20ec04: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x20ec04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20ec08: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ec08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ec0c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x20ec0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x20ec10: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20EC10u;
    SET_GPR_U32(ctx, 31, 0x20EC18u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EC10u, 0x20EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC18u;
label_20ec18:
    // 0x20ec18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20ec18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20ec1c: 0x3c09c52f  lui         $t1, 0xC52F
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50479 << 16));
    // 0x20ec20: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x20ec20u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ec24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20ec28: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x20ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x20ec2c: 0xe4600190  swc1        $f0, 0x190($v1)
    ctx->pc = 0x20ec2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 400), bits); }
    // 0x20ec30: 0x3c0a43e1  lui         $t2, 0x43E1
    ctx->pc = 0x20ec30u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17377 << 16));
    // 0x20ec34: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x20ec34u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ec38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20ec3c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x20ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x20ec40: 0xe4610194  swc1        $f1, 0x194($v1)
    ctx->pc = 0x20ec40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 404), bits); }
    // 0x20ec44: 0x3c06463a  lui         $a2, 0x463A
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17978 << 16));
    // 0x20ec48: 0x34c41800  ori         $a0, $a2, 0x1800
    ctx->pc = 0x20ec48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6144);
    // 0x20ec4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20ec4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ec50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20ec54: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x20ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x20ec58: 0xe4800198  swc1        $f0, 0x198($a0)
    ctx->pc = 0x20ec58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 408), bits); }
    // 0x20ec5c: 0x3c03c610  lui         $v1, 0xC610
    ctx->pc = 0x20ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50704 << 16));
    // 0x20ec60: 0x34657400  ori         $a1, $v1, 0x7400
    ctx->pc = 0x20ec60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29696);
    // 0x20ec64: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20ec64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ec68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20ec6c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x20ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x20ec70: 0xe46c01a0  swc1        $f12, 0x1A0($v1)
    ctx->pc = 0x20ec70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x20ec74: 0x3c034687  lui         $v1, 0x4687
    ctx->pc = 0x20ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18055 << 16));
    // 0x20ec78: 0x34649600  ori         $a0, $v1, 0x9600
    ctx->pc = 0x20ec78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38400);
    // 0x20ec7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20ec7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ec80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20ec84: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x20ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x20ec88: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x20ec88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x20ec8c: 0x3c06c644  lui         $a2, 0xC644
    ctx->pc = 0x20ec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50756 << 16));
    // 0x20ec90: 0x34c56800  ori         $a1, $a2, 0x6800
    ctx->pc = 0x20ec90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26624);
    // 0x20ec94: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20ec94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ec98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ec98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20ec9c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x20ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x20eca0: 0xe46101a8  swc1        $f1, 0x1A8($v1)
    ctx->pc = 0x20eca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x20eca4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20eca8: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x20eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x20ecac: 0xc056518  jal         func_159460
    ctx->pc = 0x20ECACu;
    SET_GPR_U32(ctx, 31, 0x20ECB4u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x20ECACu, 0x20ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECB4u;
label_20ecb4:
    // 0x20ecb4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20ecb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20ecb8: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20ecb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ecbc: 0x8cc31310  lw          $v1, 0x1310($a2)
    ctx->pc = 0x20ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4880)));
    // 0x20ecc0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x20ecc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ecc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20ecc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20ecc8: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x20ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x20eccc: 0x24850190  addiu       $a1, $a0, 0x190
    ctx->pc = 0x20ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x20ecd0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20ecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ecd4: 0x8cc41310  lw          $a0, 0x1310($a2)
    ctx->pc = 0x20ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4880)));
    // 0x20ecd8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x20ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x20ecdc: 0x24031c98  addiu       $v1, $zero, 0x1C98
    ctx->pc = 0x20ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7320));
    // 0x20ece0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20ece0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20ece4: 0xac23a2f0  sw          $v1, -0x5D10($at)
    ctx->pc = 0x20ece4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38A2F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A2F0u, _value); } while (0);
    // 0x20ece8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ecec: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20ececu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ecf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20ecf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20ecf4: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x20ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x20ecf8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x20ecf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x20ecfc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x20ecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ed00: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x20ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20ed04: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x20ed04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x20ed08: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x20ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x20ed0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20ed0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20ed10: 0x8c287508  lw          $t0, 0x7508($at)
    ctx->pc = 0x20ed10u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x387508u));
    // 0x20ed14: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x20ed14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x20ed18: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x20ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ed1c: 0xc54821  addu        $t1, $a2, $a1
    ctx->pc = 0x20ed1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20ed20: 0x312aff00  andi        $t2, $t1, 0xFF00
    ctx->pc = 0x20ed20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x20ed24: 0xa5a02  srl         $t3, $t2, 8
    ctx->pc = 0x20ed24u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x20ed28: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x20ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x20ed2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20ed2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20ed30: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20ed30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20ed34: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x20ed34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20ed38: 0x3245001f  andi        $a1, $s2, 0x1F
    ctx->pc = 0x20ed38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x20ed3c: 0x24a40028  addiu       $a0, $a1, 0x28
    ctx->pc = 0x20ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x20ed40: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x20ed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x20ed44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20ed44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20ed48: 0x8fb20528  lw          $s2, 0x528($sp)
    ctx->pc = 0x20ed48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ed4c: 0xa643127e  sh          $v1, 0x127E($s2)
    ctx->pc = 0x20ed4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x20ed50: 0x8fb60528  lw          $s6, 0x528($sp)
    ctx->pc = 0x20ed50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ed54: 0x92c60002  lbu         $a2, 0x2($s6)
    ctx->pc = 0x20ed54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x20ed58: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x20ed58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20ed5c: 0xa2c70002  sb          $a3, 0x2($s6)
    ctx->pc = 0x20ed5cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x20ed60: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ed60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ed64: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x20ed64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x20ed68: 0x240afffd  addiu       $t2, $zero, -0x3
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x20ed6c: 0x12a1824  and         $v1, $t1, $t2
    ctx->pc = 0x20ed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x20ed70: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x20ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x20ed74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ed78: 0xac209510  sw          $zero, -0x6AF0($at)
    ctx->pc = 0x20ed78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619510u, _value); } while (0);
    // 0x20ed7c: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x20ed7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x20ed80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ed84: 0xac349518  sw          $s4, -0x6AE8($at)
    ctx->pc = 0x20ed84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x619518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619518u, _value); } while (0);
    // 0x20ed88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ed8c: 0xac209520  sw          $zero, -0x6AE0($at)
    ctx->pc = 0x20ed8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619520u, _value); } while (0);
    // 0x20ed90: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x20ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x20ed94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ed98: 0xac249528  sw          $a0, -0x6AD8($at)
    ctx->pc = 0x20ed98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x619528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619528u, _value); } while (0);
    // 0x20ed9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ed9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20eda0: 0xac209530  sw          $zero, -0x6AD0($at)
    ctx->pc = 0x20eda0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619530u, _value); } while (0);
    // 0x20eda4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20eda8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20eda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20edac: 0xac239538  sw          $v1, -0x6AC8($at)
    ctx->pc = 0x20edacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    // 0x20edb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20edb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20edb4: 0xac209540  sw          $zero, -0x6AC0($at)
    ctx->pc = 0x20edb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619540u, _value); } while (0);
    // 0x20edb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20edb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20edbc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20edbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20edc0: 0xe4209548  swc1        $f0, -0x6AB8($at)
    ctx->pc = 0x20edc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619548u, _value); } while (0); }
    ctx->pc = 0x20edc4u;
}
