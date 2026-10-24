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

// Function: entry_001510b0
// Address: 0x1510b0 - 0x1512a4
void entry_001510b0_0x1510b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001510b0_0x1510b0");
#endif

    switch (ctx->pc) {
        case 0x151150u: goto label_151150;
        case 0x151168u: goto label_151168;
        case 0x151190u: goto label_151190;
        case 0x15122cu: goto label_15122c;
        case 0x151248u: goto label_151248;
        case 0x151270u: goto label_151270;
        default: break;
    }

    ctx->pc = 0x1510b0u;

    // 0x1510b0: 0x2a440004  slti        $a0, $s2, 0x4
    ctx->pc = 0x1510b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1510b4: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1510B4u;
    {
        const bool branch_taken_0x1510b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1510b4) {
            ctx->pc = 0x151078u;
            return;
        }
    }
    ctx->pc = 0x1510BCu;
    // 0x1510bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1510bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510c0: 0x0  nop
    ctx->pc = 0x1510c0u;
    // NOP
    // 0x1510c4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1510c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1510c8: 0x3c05c2c8  lui         $a1, 0xC2C8
    ctx->pc = 0x1510c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49864 << 16));
    // 0x1510cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1510ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510d0: 0x0  nop
    ctx->pc = 0x1510d0u;
    // NOP
    // 0x1510d4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1510d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1510d8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1510d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1510dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1510dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510e0: 0x0  nop
    ctx->pc = 0x1510e0u;
    // NOP
    // 0x1510e4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1510e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1510e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1510e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1510ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1510ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510f0: 0x0  nop
    ctx->pc = 0x1510f0u;
    // NOP
    // 0x1510f4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1510f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1510f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1510f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510fc: 0x0  nop
    ctx->pc = 0x1510fcu;
    // NOP
    // 0x151100: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x151100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x151104: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x151104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x151108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15110c: 0x0  nop
    ctx->pc = 0x15110cu;
    // NOP
    // 0x151110: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x151110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x151114: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x151114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x151118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15111c: 0x0  nop
    ctx->pc = 0x15111cu;
    // NOP
    // 0x151120: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x151120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x151124: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x151124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x151128: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x151128u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15112c: 0x0  nop
    ctx->pc = 0x15112cu;
    // NOP
    // 0x151130: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x151130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x151134: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x151134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151138: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x151138u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x15113c: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x15113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x151140: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x151140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151144: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x151144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151148: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151148u;
    SET_GPR_U32(ctx, 31, 0x151150u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x151150u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x151150u) { return; }
    ctx->pc = 0x151150u;
label_151150:
    // 0x151150: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x151150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151154: 0x8e700130  lw          $s0, 0x130($s3)
    ctx->pc = 0x151154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x151158: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151158u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15115c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15115cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151160: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151160u;
    SET_GPR_U32(ctx, 31, 0x151168u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x151168u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x151168u) { return; }
    ctx->pc = 0x151168u;
label_151168:
    // 0x151168: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x151168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15116c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x15116cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151170: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x151170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151174: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151174u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151178: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x151178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15117c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x15117cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151180: 0x90c61576  lbu         $a2, 0x1576($a2)
    ctx->pc = 0x151180u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5494)));
    // 0x151184: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x151184u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x151188: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x151188u;
    SET_GPR_U32(ctx, 31, 0x151190u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x151188u, 0x151190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151190u;
label_151190:
    // 0x151190: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x151190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x151194: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x151194u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x151198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15119c: 0x0  nop
    ctx->pc = 0x15119cu;
    // NOP
    // 0x1511a0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1511a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1511a4: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x1511a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x1511a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1511a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511ac: 0x0  nop
    ctx->pc = 0x1511acu;
    // NOP
    // 0x1511b0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1511b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1511b4: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1511b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1511b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1511b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511bc: 0x0  nop
    ctx->pc = 0x1511bcu;
    // NOP
    // 0x1511c0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1511c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1511c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1511c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1511c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1511c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511cc: 0x0  nop
    ctx->pc = 0x1511ccu;
    // NOP
    // 0x1511d0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1511d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1511d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1511d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511d8: 0x0  nop
    ctx->pc = 0x1511d8u;
    // NOP
    // 0x1511dc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1511dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1511e0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1511e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1511e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1511e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511e8: 0x0  nop
    ctx->pc = 0x1511e8u;
    // NOP
    // 0x1511ec: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1511ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1511f0: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1511f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1511f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1511f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511f8: 0x0  nop
    ctx->pc = 0x1511f8u;
    // NOP
    // 0x1511fc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1511fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x151200: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x151200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x151204: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x151204u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151208: 0x0  nop
    ctx->pc = 0x151208u;
    // NOP
    // 0x15120c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15120cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x151210: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x151210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151214: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x151214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x151218: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x151218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15121c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x15121cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151220: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x151220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151224: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151224u;
    SET_GPR_U32(ctx, 31, 0x15122Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15122Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15122Cu) { return; }
    ctx->pc = 0x15122Cu;
label_15122c:
    // 0x15122c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151230: 0x8e700130  lw          $s0, 0x130($s3)
    ctx->pc = 0x151230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x151234: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x151238: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x151238u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15123c: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x15123cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x151240: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151240u;
    SET_GPR_U32(ctx, 31, 0x151248u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x151248u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x151248u) { return; }
    ctx->pc = 0x151248u;
label_151248:
    // 0x151248: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151248u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15124c: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x15124cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151250: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x151250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151254: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x151254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151258: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x151258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x15125c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x15125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151260: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x151260u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x151264: 0x91071577  lbu         $a3, 0x1577($t0)
    ctx->pc = 0x151264u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5495)));
    // 0x151268: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x151268u;
    SET_GPR_U32(ctx, 31, 0x151270u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x151268u, 0x151270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151270u;
label_151270:
    // 0x151270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151274: 0x2232025  or          $a0, $s1, $v1
    ctx->pc = 0x151274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x151278: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x151278u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x15127c: 0x32230006  andi        $v1, $s1, 0x6
    ctx->pc = 0x15127cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x151280: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x151280u;
    {
        const bool branch_taken_0x151280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151280) {
            ctx->pc = 0x151514u;
            return;
        }
    }
    ctx->pc = 0x151288u;
    // 0x151288: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x151288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15128c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x15128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x151290: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x151290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x151294: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x151294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x151298: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x151298u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x15129c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x15129Cu;
    {
        const bool branch_taken_0x15129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15129c) {
            ctx->pc = 0x151514u;
            return;
        }
    }
    ctx->pc = 0x1512A4u;
}
