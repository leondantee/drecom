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

// Function: Em05_R1_dm_handgun
// Address: 0x20e0d0 - 0x20e22c
void Em05_R1_dm_handgun_0x20e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_dm_handgun_0x20e0d0");
#endif

    switch (ctx->pc) {
        case 0x20e124u: goto label_20e124;
        case 0x20e178u: goto label_20e178;
        case 0x20e18cu: goto label_20e18c;
        case 0x20e1a4u: goto label_20e1a4;
        case 0x20e1b0u: goto label_20e1b0;
        case 0x20e1c0u: goto label_20e1c0;
        case 0x20e1ccu: goto label_20e1cc;
        default: break;
    }

    ctx->pc = 0x20e0d0u;

    // 0x20e0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e0d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x20e0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20e0d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x20e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x20e0dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e0e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20e0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e0e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20e0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20e0e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e0ec: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x20E0ECu;
    {
        const bool branch_taken_0x20e0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e0ec) {
            ctx->pc = 0x20E13Cu;
            goto label_20e13c;
        }
    }
    ctx->pc = 0x20E0F4u;
    // 0x20e0f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E0F4u;
    {
        const bool branch_taken_0x20e0f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e0f4) {
            ctx->pc = 0x20E104u;
            goto label_20e104;
        }
    }
    ctx->pc = 0x20E0FCu;
    // 0x20e0fc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x20E0FCu;
    {
        const bool branch_taken_0x20e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e0fc) {
            ctx->pc = 0x20E21Cu;
            goto label_20e21c;
        }
    }
    ctx->pc = 0x20E104u;
label_20e104:
    // 0x20e104: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e108: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e10c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20e10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20e110: 0x24063c10  addiu       $a2, $zero, 0x3C10
    ctx->pc = 0x20e110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15376));
    // 0x20e114: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e118: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20e118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e11c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20E11Cu;
    SET_GPR_U32(ctx, 31, 0x20E124u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20E11Cu, 0x20E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E124u;
label_20e124:
    // 0x20e124: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e128: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20e128u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e12c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e130: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20e130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e134: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e138: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20e138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20e13c:
    // 0x20e13c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e140: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20e140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20e144: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20e144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20e148: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20e148u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20e14c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e150: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E150u;
    {
        const bool branch_taken_0x20e150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e150) {
            ctx->pc = 0x20E194u;
            goto label_20e194;
        }
    }
    ctx->pc = 0x20E158u;
    // 0x20e158: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e15c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20e15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20e160: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e164: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20e168: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E168u;
    {
        const bool branch_taken_0x20e168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e168) {
            ctx->pc = 0x20E18Cu;
            goto label_20e18c;
        }
    }
    ctx->pc = 0x20E170u;
    // 0x20e170: 0xc067694  jal         func_19DA50
    ctx->pc = 0x20E170u;
    SET_GPR_U32(ctx, 31, 0x20E178u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x20E170u, 0x20E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E178u;
label_20e178:
    // 0x20e178: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e17c: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x20e17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x20e180: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e184: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x20E184u;
    SET_GPR_U32(ctx, 31, 0x20E18Cu);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x20E184u, 0x20E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E18Cu;
label_20e18c:
    // 0x20e18c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e190: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20e190u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20e194:
    // 0x20e194: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e198: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20e198u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e19c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20E19Cu;
    SET_GPR_U32(ctx, 31, 0x20E1A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20E19Cu, 0x20E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1A4u;
label_20e1a4:
    // 0x20e1a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20E1A8u;
    SET_GPR_U32(ctx, 31, 0x20E1B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20E1A8u, 0x20E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1B0u;
label_20e1b0:
    // 0x20e1b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e1b8: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20E1B8u;
    SET_GPR_U32(ctx, 31, 0x20E1C0u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20E1B8u, 0x20E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1C0u;
label_20e1c0:
    // 0x20e1c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1c4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20E1C4u;
    SET_GPR_U32(ctx, 31, 0x20E1CCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20E1C4u, 0x20E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1CCu;
label_20e1cc:
    // 0x20e1cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1d0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20e1d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20e1d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e1d8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20e1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20e1dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20e1e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20e1e4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20E1E4u;
    {
        const bool branch_taken_0x20e1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e1e4) {
            ctx->pc = 0x20E21Cu;
            goto label_20e21c;
        }
    }
    ctx->pc = 0x20E1ECu;
    // 0x20e1ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e1f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e1f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20e1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e1f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e1fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e200: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20e200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e204: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e208: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20e208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e20c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e210: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20e210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e214: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e218: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20e218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20e21c:
    // 0x20e21c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x20e21cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e220: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20e220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20e224: 0x3e00008  jr          $ra
    ctx->pc = 0x20E224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E22Cu;
}
