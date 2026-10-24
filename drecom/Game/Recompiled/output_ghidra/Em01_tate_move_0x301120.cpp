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

// Function: Em01_tate_move
// Address: 0x301120 - 0x3012c8
void Em01_tate_move_0x301120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_tate_move_0x301120");
#endif

    switch (ctx->pc) {
        case 0x301160u: goto label_301160;
        case 0x301180u: goto label_301180;
        case 0x30119cu: goto label_30119c;
        case 0x3011b8u: goto label_3011b8;
        case 0x3011d4u: goto label_3011d4;
        case 0x3011e8u: goto label_3011e8;
        case 0x301220u: goto label_301220;
        case 0x301234u: goto label_301234;
        default: break;
    }

    ctx->pc = 0x301120u;

    // 0x301120: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x301120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x301124: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x301124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x301128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x301128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30112c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x301130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x301130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x301134: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x301134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x301138: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x301138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x30113c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x301140: 0x245036b0  addiu       $s0, $v0, 0x36B0
    ctx->pc = 0x301140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x301144: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x301144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x301148: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x301148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x30114c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301150: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x301150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x301154: 0xc44c00e4  lwc1        $f12, 0xE4($v0)
    ctx->pc = 0x301154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301158: 0xc067844  jal         func_19E110
    ctx->pc = 0x301158u;
    SET_GPR_U32(ctx, 31, 0x301160u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x301158u, 0x301160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301160u;
label_301160:
    // 0x301160: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x301160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x301164: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x301164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x301168: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x301168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30116c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x301170: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x301170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x301174: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x301174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x301178: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x301178u;
    SET_GPR_U32(ctx, 31, 0x301180u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x301178u, 0x301180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301180u;
label_301180:
    // 0x301180: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x301180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x301184: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x301184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x301188: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30118c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x30118cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301190: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x301190u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301194: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x301194u;
    SET_GPR_U32(ctx, 31, 0x30119Cu);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x301194u, 0x30119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30119Cu;
label_30119c:
    // 0x30119c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x30119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3011a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3011a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3011a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3011a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3011a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3011a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3011ac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3011acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3011b0: 0xc067808  jal         func_19E020
    ctx->pc = 0x3011B0u;
    SET_GPR_U32(ctx, 31, 0x3011B8u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x3011B0u, 0x3011B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3011B8u;
label_3011b8:
    // 0x3011b8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3011b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3011bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3011bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3011c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3011c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3011c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3011c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3011c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3011c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3011cc: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x3011CCu;
    SET_GPR_U32(ctx, 31, 0x3011D4u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x3011CCu, 0x3011D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3011D4u;
label_3011d4:
    // 0x3011d4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3011d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3011d8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x3011d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3011dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3011dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3011e0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3011E0u;
    SET_GPR_U32(ctx, 31, 0x3011E8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3011E0u, 0x3011E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3011E8u;
label_3011e8:
    // 0x3011e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3011e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3011ec: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x3011ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x3011f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3011f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3011f4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3011f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3011f8: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x3011f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x3011fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3011fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301200: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x301200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x301204: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x301204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x301208: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x301208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30120c: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x30120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x301210: 0x246500d0  addiu       $a1, $v1, 0xD0
    ctx->pc = 0x301210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x301214: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x301214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x301218: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x301218u;
    SET_GPR_U32(ctx, 31, 0x301220u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x301218u, 0x301220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301220u;
label_301220:
    // 0x301220: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x301220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x301224: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x301224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x301228: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x301228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x30122c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x30122Cu;
    SET_GPR_U32(ctx, 31, 0x301234u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x30122Cu, 0x301234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301234u;
label_301234:
    // 0x301234: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x301234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x301238: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x301238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30123c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x30123cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x301240: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301244: 0x0  nop
    ctx->pc = 0x301244u;
    // NOP
    // 0x301248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x301248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30124c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x30124cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x301250: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x301250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301254: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x301254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x301258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30125c: 0x0  nop
    ctx->pc = 0x30125cu;
    // NOP
    // 0x301260: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x301260u;
    {
        const bool branch_taken_0x301260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301260) {
            ctx->pc = 0x3012ACu;
            goto label_3012ac;
        }
    }
    ctx->pc = 0x301268u;
    // 0x301268: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x301268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x30126c: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30126cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x301270: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x301270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x301274: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x301274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x301278: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x301278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30127c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x30127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x301280: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x301280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x301284: 0x24710480  addiu       $s1, $v1, 0x480
    ctx->pc = 0x301284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x301288: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x301288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30128c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x30128cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x301290: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x301290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x301294: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x301294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x301298: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x301298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x30129c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x30129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3012a0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x3012a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x3012a4: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x3012a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x3012a8: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x3012a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
label_3012ac:
    // 0x3012ac: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3012acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3012b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3012b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3012b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3012b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3012b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3012b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3012bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x3012bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3012c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3012C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3012C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3012C8u;
}
