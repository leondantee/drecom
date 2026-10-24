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

// Function: entry_002223e4
// Address: 0x2223e4 - 0x2224a8
void entry_002223e4_0x2223e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002223e4_0x2223e4");
#endif

    switch (ctx->pc) {
        case 0x222444u: goto label_222444;
        case 0x222450u: goto label_222450;
        case 0x22249cu: goto label_22249c;
        default: break;
    }

    ctx->pc = 0x2223e4u;

    // 0x2223e4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2223e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2223e8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2223e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2223ec: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x2223ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2223f0: 0x30c70200  andi        $a3, $a2, 0x200
    ctx->pc = 0x2223f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x2223f4: 0x10e0002c  beqz        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x2223F4u;
    {
        const bool branch_taken_0x2223f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223f4) {
            ctx->pc = 0x2224A8u;
            return;
        }
    }
    ctx->pc = 0x2223FCu;
    // 0x2223fc: 0x3c0843c8  lui         $t0, 0x43C8
    ctx->pc = 0x2223fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17352 << 16));
    // 0x222400: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x222400u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222404: 0x0  nop
    ctx->pc = 0x222404u;
    // NOP
    // 0x222408: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x222408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x22240c: 0x8fa900e8  lw          $t1, 0xE8($sp)
    ctx->pc = 0x22240cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222410: 0x8d220130  lw          $v0, 0x130($t1)
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
    // 0x222414: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x222418: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x222418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22241c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22241cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x222420: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x222420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x222424: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x222424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x222428: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x222428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22242c: 0x703824  and         $a3, $v1, $s0
    ctx->pc = 0x22242cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x222430: 0x24040e10  addiu       $a0, $zero, 0xE10
    ctx->pc = 0x222430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x222434: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x222434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222438: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x22243c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x22243Cu;
    SET_GPR_U32(ctx, 31, 0x222444u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22243Cu, 0x222444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222444u;
label_222444:
    // 0x222444: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222444u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222448: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x222448u;
    SET_GPR_U32(ctx, 31, 0x222450u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222448u, 0x222450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222450u;
label_222450:
    // 0x222450: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x222450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x222454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222458: 0x0  nop
    ctx->pc = 0x222458u;
    // NOP
    // 0x22245c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x22245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x222460: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222464: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x222464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x222468: 0x24540880  addiu       $s4, $v0, 0x880
    ctx->pc = 0x222468u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22246c: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x22246cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x222470: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x222470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x222474: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x222474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x222478: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x222478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x22247c: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x22247cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x222480: 0x643824  and         $a3, $v1, $a0
    ctx->pc = 0x222480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x222484: 0x24020e10  addiu       $v0, $zero, 0xE10
    ctx->pc = 0x222484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x222488: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22248c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22248cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222490: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x222494: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x222494u;
    SET_GPR_U32(ctx, 31, 0x22249Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x222494u, 0x22249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22249Cu;
label_22249c:
    // 0x22249c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22249cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2224a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2224A0u;
    SET_GPR_U32(ctx, 31, 0x2224A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2224A0u, 0x2224A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224A8u;
}
