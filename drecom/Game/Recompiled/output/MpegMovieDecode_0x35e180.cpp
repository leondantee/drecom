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

// Function: MpegMovieDecode
// Address: 0x35e180 - 0x35e450
void MpegMovieDecode_0x35e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MpegMovieDecode_0x35e180");
#endif

    switch (ctx->pc) {
        case 0x35e19cu: goto label_35e19c;
        case 0x35e1c4u: goto label_35e1c4;
        case 0x35e1ccu: goto label_35e1cc;
        case 0x35e1f4u: goto label_35e1f4;
        case 0x35e224u: goto label_35e224;
        case 0x35e254u: goto label_35e254;
        case 0x35e29cu: goto label_35e29c;
        case 0x35e2b8u: goto label_35e2b8;
        case 0x35e2d4u: goto label_35e2d4;
        case 0x35e2ecu: goto label_35e2ec;
        case 0x35e324u: goto label_35e324;
        case 0x35e33cu: goto label_35e33c;
        case 0x35e398u: goto label_35e398;
        case 0x35e3d8u: goto label_35e3d8;
        case 0x35e3f0u: goto label_35e3f0;
        case 0x35e408u: goto label_35e408;
        case 0x35e438u: goto label_35e438;
        default: break;
    }

    ctx->pc = 0x35e180u;

    // 0x35e180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35e184: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x35e184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x35e188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e18c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35e190: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35e190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35e194: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x35e194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x35e198: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x35e198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e19c:
    // 0x35e19c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x35e19cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e1a0: 0x12200071  beqz        $s1, . + 4 + (0x71 << 2)
    ctx->pc = 0x35E1A0u;
    {
        const bool branch_taken_0x35e1a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e1a0) {
            ctx->pc = 0x35E368u;
            goto label_35e368;
        }
    }
    ctx->pc = 0x35E1A8u;
    // 0x35e1a8: 0x860202b0  lh          $v0, 0x2B0($s0)
    ctx->pc = 0x35e1a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x35e1ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35e1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35e1b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35e1b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35e1b4: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x35E1B4u;
    {
        const bool branch_taken_0x35e1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e1b4) {
            ctx->pc = 0x35E2E0u;
            goto label_35e2e0;
        }
    }
    ctx->pc = 0x35E1BCu;
    // 0x35e1bc: 0xc0427c8  jal         func_109F20
    ctx->pc = 0x35E1BCu;
    SET_GPR_U32(ctx, 31, 0x35E1C4u);
    ctx->pc = 0x109F20u;
    {
        ctx->pc = 0x35E1C4u;
        ps2_stubs::sceMpegInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E1C4u) { return; }
    ctx->pc = 0x35E1C4u;
label_35e1c4:
    // 0x35e1c4: 0xc042ea4  jal         func_10BA90
    ctx->pc = 0x35E1C4u;
    SET_GPR_U32(ctx, 31, 0x35E1CCu);
    ctx->pc = 0x10BA90u;
    {
        ctx->pc = 0x35E1CCu;
        ps2_stubs::sceIpuInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E1CCu) { return; }
    ctx->pc = 0x35E1CCu;
label_35e1cc:
    // 0x35e1cc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x35e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x35e1d0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x35e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35e1d4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x35e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x35e1d8: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x35e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x35e1dc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x35e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x35e1e0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x35e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x35e1e4: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x35e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x35e1e8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x35e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35e1ec: 0xc0d7438  jal         func_35D0E0
    ctx->pc = 0x35E1ECu;
    SET_GPR_U32(ctx, 31, 0x35E1F4u);
    ctx->pc = 0x35D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D0E0u, 0x35E1ECu, 0x35E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1F4u;
label_35e1f4:
    // 0x35e1f4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x35e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x35e1f8: 0x24445ec0  addiu       $a0, $v0, 0x5EC0
    ctx->pc = 0x35e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x35e1fc: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x35e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x35e200: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x35e200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x35e204: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x35e204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x35e208: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35e208u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e20c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x35e20cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e210: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x35e210u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e214: 0x8e0a004c  lw          $t2, 0x4C($s0)
    ctx->pc = 0x35e214u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35e218: 0x8e0b0050  lw          $t3, 0x50($s0)
    ctx->pc = 0x35e218u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x35e21c: 0xc0d7914  jal         func_35E450
    ctx->pc = 0x35E21Cu;
    SET_GPR_U32(ctx, 31, 0x35E224u);
    ctx->pc = 0x35E450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E450u, 0x35E21Cu, 0x35E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E224u;
label_35e224:
    // 0x35e224: 0x3c02008b  lui         $v0, 0x8B
    ctx->pc = 0x35e224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)139 << 16));
    // 0x35e228: 0x2444afc0  addiu       $a0, $v0, -0x5040
    ctx->pc = 0x35e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x35e22c: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x35e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x35e230: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x35e230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x35e234: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x35e234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x35e238: 0x24071400  addiu       $a3, $zero, 0x1400
    ctx->pc = 0x35e238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x35e23c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x35e23cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e240: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x35e240u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e244: 0x8e0a004c  lw          $t2, 0x4C($s0)
    ctx->pc = 0x35e244u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35e248: 0x8e0b0050  lw          $t3, 0x50($s0)
    ctx->pc = 0x35e248u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x35e24c: 0xc0d7914  jal         func_35E450
    ctx->pc = 0x35E24Cu;
    SET_GPR_U32(ctx, 31, 0x35E254u);
    ctx->pc = 0x35E450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E450u, 0x35E24Cu, 0x35E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E254u;
label_35e254:
    // 0x35e254: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e258: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x35e258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x35e25c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35e25cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x35e260: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x35e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35e264: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x35e264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x35e268: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x35e268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x35e26c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e270: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x35e270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x35e274: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35e274u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 3)); // MMIO: 0x1000b410
    // 0x35e278: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x35e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x35e27c: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x35e27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x35e280: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x35e280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x35e284: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e288: 0x3442b430  ori         $v0, $v0, 0xB430
    ctx->pc = 0x35e288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46128);
    // 0x35e28c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35e28cu;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 3)); // MMIO: 0x1000b430
    // 0x35e290: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x35e290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35e294: 0xc0d7320  jal         func_35CC80
    ctx->pc = 0x35E294u;
    SET_GPR_U32(ctx, 31, 0x35E29Cu);
    ctx->pc = 0x35CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC80u, 0x35E294u, 0x35E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E29Cu;
label_35e29c:
    // 0x35e29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e2a0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x35e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x35e2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e2a8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x35e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x35e2ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x35e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35e2b0: 0xc084a88  jal         func_212A20
    ctx->pc = 0x35E2B0u;
    SET_GPR_U32(ctx, 31, 0x35E2B8u);
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x35E2B8u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E2B8u) { return; }
    ctx->pc = 0x35E2B8u;
label_35e2b8:
    // 0x35e2b8: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x35e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
    // 0x35e2bc: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x35e2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35e2c0: 0x8e060228  lw          $a2, 0x228($s0)
    ctx->pc = 0x35e2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x35e2c4: 0x8e070210  lw          $a3, 0x210($s0)
    ctx->pc = 0x35e2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x35e2c8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x35e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x35e2cc: 0xc076540  jal         func_1D9500
    ctx->pc = 0x35E2CCu;
    SET_GPR_U32(ctx, 31, 0x35E2D4u);
    ctx->pc = 0x1D9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9500u, 0x35E2CCu, 0x35E2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2D4u;
label_35e2d4:
    // 0x35e2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e2d8: 0xa60202b0  sh          $v0, 0x2B0($s0)
    ctx->pc = 0x35e2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 688), (uint16_t)GPR_U32(ctx, 2));
    // 0x35e2dc: 0x0  nop
    ctx->pc = 0x35e2dcu;
    // NOP
label_35e2e0:
    // 0x35e2e0: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x35e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x35e2e4: 0xc0428d8  jal         func_10A360
    ctx->pc = 0x35E2E4u;
    SET_GPR_U32(ctx, 31, 0x35E2ECu);
    ctx->pc = 0x10A360u;
    {
        ctx->pc = 0x35E2ECu;
        ps2_stubs::sceMpegIsEnd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E2ECu) { return; }
    ctx->pc = 0x35E2ECu;
label_35e2ec:
    // 0x35e2ec: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x35E2ECu;
    {
        const bool branch_taken_0x35e2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e2ec) {
            ctx->pc = 0x35E3FCu;
            goto label_35e3fc;
        }
    }
    ctx->pc = 0x35E2F4u;
    // 0x35e2f4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x35e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35e2f8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x35e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x35e2fc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x35e2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35e300: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35e304: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x35e304u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35e308: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35e30c: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x35e30cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35e310: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x35e310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x35e314: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x35e314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x35e318: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x35e318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x35e31c: 0xc042892  jal         func_10A248
    ctx->pc = 0x35E31Cu;
    SET_GPR_U32(ctx, 31, 0x35E324u);
    ctx->pc = 0x10A248u;
    {
        ctx->pc = 0x35E324u;
        ps2_stubs::sceMpegGetPicture(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E324u) { return; }
    ctx->pc = 0x35E324u;
label_35e324:
    // 0x35e324: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E324u;
    {
        const bool branch_taken_0x35e324 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35e324) {
            ctx->pc = 0x35E344u;
            goto label_35e344;
        }
    }
    ctx->pc = 0x35E32Cu;
    // 0x35e32c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35e330: 0x24442ab0  addiu       $a0, $v0, 0x2AB0
    ctx->pc = 0x35e330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10928));
    // 0x35e334: 0xc046760  jal         func_119D80
    ctx->pc = 0x35E334u;
    SET_GPR_U32(ctx, 31, 0x35E33Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x35E33Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E33Cu) { return; }
    ctx->pc = 0x35E33Cu;
label_35e33c:
    // 0x35e33c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x35E33Cu;
    {
        const bool branch_taken_0x35e33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e33c) {
            ctx->pc = 0x35E3FCu;
            goto label_35e3fc;
        }
    }
    ctx->pc = 0x35E344u;
label_35e344:
    // 0x35e344: 0x96020040  lhu         $v0, 0x40($s0)
    ctx->pc = 0x35e344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x35e348: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x35e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35e34c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35E34Cu;
    {
        const bool branch_taken_0x35e34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e34c) {
            ctx->pc = 0x35E368u;
            goto label_35e368;
        }
    }
    ctx->pc = 0x35E354u;
    // 0x35e354: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x35e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x35e358: 0x284103de  slti        $at, $v0, 0x3DE
    ctx->pc = 0x35e358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)990) ? 1 : 0);
    // 0x35e35c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x35E35Cu;
    {
        const bool branch_taken_0x35e35c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e35c) {
            ctx->pc = 0x35E3FCu;
            goto label_35e3fc;
        }
    }
    ctx->pc = 0x35E364u;
    // 0x35e364: 0x0  nop
    ctx->pc = 0x35e364u;
    // NOP
label_35e368:
    // 0x35e368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35e368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35e36c: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x35e36cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x35e370: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x35e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35e374: 0x304208f0  andi        $v0, $v0, 0x8F0
    ctx->pc = 0x35e374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2288);
    // 0x35e378: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E378u;
    {
        const bool branch_taken_0x35e378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e378) {
            ctx->pc = 0x35E3A0u;
            goto label_35e3a0;
        }
    }
    ctx->pc = 0x35E380u;
    // 0x35e380: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x35e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35e384: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e388: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35e388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e38c: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x35e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x35e390: 0xc076560  jal         func_1D9580
    ctx->pc = 0x35E390u;
    SET_GPR_U32(ctx, 31, 0x35E398u);
    ctx->pc = 0x1D9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9580u, 0x35E390u, 0x35E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E398u;
label_35e398:
    // 0x35e398: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x35E398u;
    {
        const bool branch_taken_0x35e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e398) {
            ctx->pc = 0x35E3FCu;
            goto label_35e3fc;
        }
    }
    ctx->pc = 0x35E3A0u;
label_35e3a0:
    // 0x35e3a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35e3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35e3a4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x35e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35e3a8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35e3ac: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x35e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35e3b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35e3b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e3b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35e3bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35e3c0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x35e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x35e3c4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x35e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x35e3c8: 0x24425ec0  addiu       $v0, $v0, 0x5EC0
    ctx->pc = 0x35e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x35e3cc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x35e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e3d0: 0xc0d72ec  jal         func_35CBB0
    ctx->pc = 0x35E3D0u;
    SET_GPR_U32(ctx, 31, 0x35E3D8u);
    ctx->pc = 0x35CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CBB0u, 0x35E3D0u, 0x35E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3D8u;
label_35e3d8:
    // 0x35e3d8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x35e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x35e3dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35e3e0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x35e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x35e3e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e3e8: 0xc06750c  jal         func_19D430
    ctx->pc = 0x35E3E8u;
    SET_GPR_U32(ctx, 31, 0x35E3F0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x35E3E8u, 0x35E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3F0u;
label_35e3f0:
    // 0x35e3f0: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x35e3f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x35e3f4: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x35E3F4u;
    {
        const bool branch_taken_0x35e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e3f4) {
            ctx->pc = 0x35E19Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e19c;
        }
    }
    ctx->pc = 0x35E3FCu;
label_35e3fc:
    // 0x35e3fc: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x35e400: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x35E400u;
    SET_GPR_U32(ctx, 31, 0x35E408u);
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x35E408u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E408u) { return; }
    ctx->pc = 0x35E408u;
label_35e408:
    // 0x35e408: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35e408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35e40c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x35e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x35e410: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x35e414: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35e414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35e418: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35e418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35e41c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35e41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35e420: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x35e420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x35e424: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x35e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35e428: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x35e428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x35e42c: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x35e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x35e430: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x35E430u;
    SET_GPR_U32(ctx, 31, 0x35E438u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x35E430u, 0x35E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E438u;
label_35e438:
    // 0x35e438: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35e438u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e43c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e444: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35e444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35e448: 0x3e00008  jr          $ra
    ctx->pc = 0x35E448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E450u;
}
