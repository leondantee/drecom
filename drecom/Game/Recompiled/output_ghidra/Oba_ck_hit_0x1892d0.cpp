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

// Function: Oba_ck_hit
// Address: 0x1892d0 - 0x1893d8
void Oba_ck_hit_0x1892d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oba_ck_hit_0x1892d0");
#endif

    switch (ctx->pc) {
        case 0x1892ecu: goto label_1892ec;
        case 0x189348u: goto label_189348;
        case 0x189380u: goto label_189380;
        case 0x1893c4u: goto label_1893c4;
        default: break;
    }

    ctx->pc = 0x1892d0u;

    // 0x1892d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1892d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1892d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1892d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1892d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1892d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1892dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1892dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1892e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1892e4: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x1892E4u;
    SET_GPR_U32(ctx, 31, 0x1892ECu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x1892E4u, 0x1892ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892ECu;
label_1892ec:
    // 0x1892ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1892ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1892f0: 0xfc6000f8  sd          $zero, 0xF8($v1)
    ctx->pc = 0x1892f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 0));
    // 0x1892f4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1892f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1892f8: 0x8ca400f0  lw          $a0, 0xF0($a1)
    ctx->pc = 0x1892f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x1892fc: 0x3c03ff10  lui         $v1, 0xFF10
    ctx->pc = 0x1892fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65296 << 16));
    // 0x189300: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x189300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x189304: 0xaca300f0  sw          $v1, 0xF0($a1)
    ctx->pc = 0x189304u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 3));
    // 0x189308: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x189308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18930c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x18930cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x189310: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x189310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x189314: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x189314u;
    {
        const bool branch_taken_0x189314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189314) {
            ctx->pc = 0x1893C4u;
            goto label_1893c4;
        }
    }
    ctx->pc = 0x18931Cu;
    // 0x18931c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x18931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189320: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x189320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x189324: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x189324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x189328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x189328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18932c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x18932Cu;
    {
        const bool branch_taken_0x18932c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18932c) {
            ctx->pc = 0x1893C4u;
            goto label_1893c4;
        }
    }
    ctx->pc = 0x189334u;
    // 0x189334: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x189338: 0x8c302500  lw          $s0, 0x2500($at)
    ctx->pc = 0x189338u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x4B2500u));
    // 0x18933c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x18933cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x189340: 0x244224f0  addiu       $v0, $v0, 0x24F0
    ctx->pc = 0x189340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9456));
    // 0x189344: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x189344u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B24F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B24F0u, _value); } while (0);
label_189348:
    // 0x189348: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x189348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18934c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18934Cu;
    {
        const bool branch_taken_0x18934c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x18934c) {
            ctx->pc = 0x189398u;
            goto label_189398;
        }
    }
    ctx->pc = 0x189354u;
    // 0x189354: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x189354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x189358: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x189358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18935c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189360: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x189360u;
    {
        const bool branch_taken_0x189360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189360) {
            ctx->pc = 0x189398u;
            goto label_189398;
        }
    }
    ctx->pc = 0x189368u;
    // 0x189368: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x189368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18936c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x18936cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x189370: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x189374: 0x244624f0  addiu       $a2, $v0, 0x24F0
    ctx->pc = 0x189374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9456));
    // 0x189378: 0xc062550  jal         func_189540
    ctx->pc = 0x189378u;
    SET_GPR_U32(ctx, 31, 0x189380u);
    ctx->pc = 0x189540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189540u, 0x189378u, 0x189380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189380u;
label_189380:
    // 0x189380: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x189380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x189384: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x189384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x189388: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x189388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18938c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189390: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x189390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x189394: 0x0  nop
    ctx->pc = 0x189394u;
    // NOP
label_189398:
    // 0x189398: 0x8e100120  lw          $s0, 0x120($s0)
    ctx->pc = 0x189398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x18939c: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18939Cu;
    {
        const bool branch_taken_0x18939c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18939c) {
            ctx->pc = 0x189348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189348;
        }
    }
    ctx->pc = 0x1893A4u;
    // 0x1893a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1893a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1893a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1893ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1893acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1893b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1893b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1893b4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1893b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1893b8: 0x244624f0  addiu       $a2, $v0, 0x24F0
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9456));
    // 0x1893bc: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1893BCu;
    SET_GPR_U32(ctx, 31, 0x1893C4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1893C4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1893C4u) { return; }
    ctx->pc = 0x1893C4u;
label_1893c4:
    // 0x1893c4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1893c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1893c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1893c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1893cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1893ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1893d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1893D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1893D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1893D8u;
}
