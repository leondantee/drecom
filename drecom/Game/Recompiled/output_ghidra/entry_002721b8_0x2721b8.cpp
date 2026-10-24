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

// Function: entry_002721b8
// Address: 0x2721b8 - 0x2724a0
void entry_002721b8_0x2721b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002721b8_0x2721b8");
#endif

    switch (ctx->pc) {
        case 0x272240u: goto label_272240;
        case 0x272254u: goto label_272254;
        case 0x2723b4u: goto label_2723b4;
        case 0x2723c8u: goto label_2723c8;
        default: break;
    }

    ctx->pc = 0x2721b8u;

    // 0x2721b8: 0x8e1202d0  lw          $s2, 0x2D0($s0)
    ctx->pc = 0x2721b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2721bc: 0x8e13008c  lw          $s3, 0x8C($s0)
    ctx->pc = 0x2721bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2721c0: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x2721c0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2721c4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2721c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2721c8: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x2721c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2721cc: 0x7280b628  paddub      $s6, $s4, $zero
    ctx->pc = 0x2721ccu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2721d0: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x2721d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x2721d4: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x2721d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2721d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2721d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2721dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2721dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2721e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2721e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2721e4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2721e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2721e8: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x2721e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2721ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2721ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2721f0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2721f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2721f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2721f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2721f8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2721f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2721fc: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x2721fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x272200: 0x263100b4  addiu       $s1, $s1, 0xB4
    ctx->pc = 0x272200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    // 0x272204: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x272204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272208: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x272208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27220c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x27220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272210: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x272210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x272214: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x272214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272218: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x272218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27221c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27221cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272224: 0x0  nop
    ctx->pc = 0x272224u;
    // NOP
    // 0x272228: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x272228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x27222c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x272230: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x272230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x272234: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x272234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x272238: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x272238u;
    SET_GPR_U32(ctx, 31, 0x272240u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x272238u, 0x272240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272240u;
label_272240:
    // 0x272240: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x272240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x272244: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x272244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x272248: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x272248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27224c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x27224Cu;
    SET_GPR_U32(ctx, 31, 0x272254u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x272254u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x272254u) { return; }
    ctx->pc = 0x272254u;
label_272254:
    // 0x272254: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x272254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272258: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27225c: 0x8c2219fc  lw          $v0, 0x19FC($at)
    ctx->pc = 0x27225cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6219FCu));
    // 0x272260: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x272260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x272264: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x272264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272268: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27226c: 0x8c2219fc  lw          $v0, 0x19FC($at)
    ctx->pc = 0x27226cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6219FCu));
    // 0x272270: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x272270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x272274: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x272274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272278: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27227c: 0x8c2219fc  lw          $v0, 0x19FC($at)
    ctx->pc = 0x27227cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6219FCu));
    // 0x272280: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x272280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x272284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27228c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27228cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272290: 0x8c2219fc  lw          $v0, 0x19FC($at)
    ctx->pc = 0x272290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6219FCu));
    // 0x272294: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x272294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x272298: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x272298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27229c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27229cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722a0: 0x8c221a00  lw          $v0, 0x1A00($at)
    ctx->pc = 0x2722a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A00u));
    // 0x2722a4: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x2722a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2722a8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2722a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2722ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722b0: 0x8c221a00  lw          $v0, 0x1A00($at)
    ctx->pc = 0x2722b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A00u));
    // 0x2722b4: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x2722b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2722b8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2722b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2722bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722c0: 0x8c221a00  lw          $v0, 0x1A00($at)
    ctx->pc = 0x2722c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A00u));
    // 0x2722c4: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x2722c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x2722c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2722c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2722cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2722ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2722d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722d4: 0x8c221a00  lw          $v0, 0x1A00($at)
    ctx->pc = 0x2722d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A00u));
    // 0x2722d8: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x2722d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x2722dc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2722dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2722e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722e4: 0x8c221a04  lw          $v0, 0x1A04($at)
    ctx->pc = 0x2722e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A04u));
    // 0x2722e8: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x2722e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2722ec: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2722ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2722f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2722f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2722f4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2722f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2722f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2722f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2722fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272300: 0x8c221a04  lw          $v0, 0x1A04($at)
    ctx->pc = 0x272300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A04u));
    // 0x272304: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x272304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x272308: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x272308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27230c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272310: 0x8c221a04  lw          $v0, 0x1A04($at)
    ctx->pc = 0x272310u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A04u));
    // 0x272314: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x272314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x272318: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27231c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27231cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272320: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272324: 0x8c221a04  lw          $v0, 0x1A04($at)
    ctx->pc = 0x272324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A04u));
    // 0x272328: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x272328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x27232c: 0x8e1202d0  lw          $s2, 0x2D0($s0)
    ctx->pc = 0x27232cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x272330: 0x8e13008c  lw          $s3, 0x8C($s0)
    ctx->pc = 0x272330u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x272334: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x272334u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x272338: 0x8e6200a8  lw          $v0, 0xA8($s3)
    ctx->pc = 0x272338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x27233c: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x27233cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x272340: 0x7280b628  paddub      $s6, $s4, $zero
    ctx->pc = 0x272340u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x272344: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x272344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x272348: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x272348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x27234c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27234cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x272350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272354: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x272354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x272358: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x272358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27235c: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x27235cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x272360: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272364: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x272364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x272368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x272368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27236c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x27236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x272370: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x272370u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x272374: 0x263100b4  addiu       $s1, $s1, 0xB4
    ctx->pc = 0x272374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    // 0x272378: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x272378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27237c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x27237cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x272380: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x272380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272384: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x272384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x272388: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x272388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27238c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x27238cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x272390: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272398: 0x0  nop
    ctx->pc = 0x272398u;
    // NOP
    // 0x27239c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x27239cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2723a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2723a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2723a4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2723a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2723a8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2723a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2723ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2723ACu;
    SET_GPR_U32(ctx, 31, 0x2723B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2723ACu, 0x2723B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723B4u;
label_2723b4:
    // 0x2723b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2723b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2723b8: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x2723b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x2723bc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2723bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2723c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2723C0u;
    SET_GPR_U32(ctx, 31, 0x2723C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2723C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2723C8u) { return; }
    ctx->pc = 0x2723C8u;
label_2723c8:
    // 0x2723c8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2723c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2723cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2723ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2723d0: 0x8c231a08  lw          $v1, 0x1A08($at)
    ctx->pc = 0x2723d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A08u));
    // 0x2723d4: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x2723d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x2723d8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2723d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2723dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2723dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2723e0: 0x8c231a08  lw          $v1, 0x1A08($at)
    ctx->pc = 0x2723e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A08u));
    // 0x2723e4: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x2723e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x2723e8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2723e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2723ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2723ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2723f0: 0x8c231a08  lw          $v1, 0x1A08($at)
    ctx->pc = 0x2723f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A08u));
    // 0x2723f4: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x2723f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x2723f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2723f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2723fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2723fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272400: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272404: 0x8c231a08  lw          $v1, 0x1A08($at)
    ctx->pc = 0x272404u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A08u));
    // 0x272408: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x272408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    // 0x27240c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x27240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272410: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272414: 0x8c231a0c  lw          $v1, 0x1A0C($at)
    ctx->pc = 0x272414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A0Cu));
    // 0x272418: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x272418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x27241c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x27241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272420: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272424: 0x8c231a0c  lw          $v1, 0x1A0C($at)
    ctx->pc = 0x272424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A0Cu));
    // 0x272428: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x272428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x27242c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x27242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272430: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272434: 0x8c231a0c  lw          $v1, 0x1A0C($at)
    ctx->pc = 0x272434u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A0Cu));
    // 0x272438: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x272438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x27243c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27243cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x272440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x272440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272444: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272448: 0x8c231a0c  lw          $v1, 0x1A0C($at)
    ctx->pc = 0x272448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A0Cu));
    // 0x27244c: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x27244cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    // 0x272450: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x272450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272454: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272458: 0x8c231a10  lw          $v1, 0x1A10($at)
    ctx->pc = 0x272458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A10u));
    // 0x27245c: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x27245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x272460: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x272460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x272464: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x272464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272468: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x272468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27246c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27246cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x272470: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272474: 0x8c231a10  lw          $v1, 0x1A10($at)
    ctx->pc = 0x272474u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A10u));
    // 0x272478: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x272478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x27247c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x27247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272480: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272484: 0x8c231a10  lw          $v1, 0x1A10($at)
    ctx->pc = 0x272484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A10u));
    // 0x272488: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x272488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x27248c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x272490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x272490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272494: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272498: 0x8c231a10  lw          $v1, 0x1A10($at)
    ctx->pc = 0x272498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A10u));
    // 0x27249c: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x27249cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    ctx->pc = 0x2724a0u;
}
