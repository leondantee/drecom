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

// Function: entry_0035e19c
// Address: 0x35e19c - 0x35e2e0
void entry_0035e19c_0x35e19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e19c_0x35e19c");
#endif

    switch (ctx->pc) {
        case 0x35e1c4u: goto label_35e1c4;
        case 0x35e1ccu: goto label_35e1cc;
        case 0x35e1f4u: goto label_35e1f4;
        case 0x35e224u: goto label_35e224;
        case 0x35e254u: goto label_35e254;
        case 0x35e29cu: goto label_35e29c;
        case 0x35e2b8u: goto label_35e2b8;
        case 0x35e2d4u: goto label_35e2d4;
        default: break;
    }

    ctx->pc = 0x35e19cu;

    // 0x35e19c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x35e19cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e1a0: 0x12200071  beqz        $s1, . + 4 + (0x71 << 2)
    ctx->pc = 0x35E1A0u;
    {
        const bool branch_taken_0x35e1a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e1a0) {
            ctx->pc = 0x35E368u;
            return;
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
            return;
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
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
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
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 3));
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
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 3));
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
    ctx->pc = 0x35e2e0u;
}
