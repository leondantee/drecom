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

// Function: Pl_r1_dp_earthquake
// Address: 0x1cffb0 - 0x1d0110
void Pl_r1_dp_earthquake_0x1cffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_dp_earthquake_0x1cffb0");
#endif

    switch (ctx->pc) {
        case 0x1d003cu: goto label_1d003c;
        case 0x1d0058u: goto label_1d0058;
        case 0x1d0078u: goto label_1d0078;
        case 0x1d0084u: goto label_1d0084;
        case 0x1d0098u: goto label_1d0098;
        case 0x1d00a4u: goto label_1d00a4;
        default: break;
    }

    ctx->pc = 0x1cffb0u;

    // 0x1cffb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cffb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1cffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1cffb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cffbc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1cffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1cffc0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1cffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1cffc4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1cffc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1cffc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cffc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cffcc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cffccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cffd0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1cffd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1cffd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFFD4u;
    {
        const bool branch_taken_0x1cffd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cffd4) {
            ctx->pc = 0x1CFFE8u;
            goto label_1cffe8;
        }
    }
    ctx->pc = 0x1CFFDCu;
    // 0x1cffdc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cffe0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1cffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cffe4: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1cffe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1cffe8:
    // 0x1cffe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1cffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cffec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1cffecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cfff0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1cfff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cfff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfff8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CFFF8u;
    {
        const bool branch_taken_0x1cfff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfff8) {
            ctx->pc = 0x1D0068u;
            goto label_1d0068;
        }
    }
    ctx->pc = 0x1D0000u;
    // 0x1d0000: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0000u;
    {
        const bool branch_taken_0x1d0000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0000) {
            ctx->pc = 0x1D0010u;
            goto label_1d0010;
        }
    }
    ctx->pc = 0x1D0008u;
    // 0x1d0008: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1D0008u;
    {
        const bool branch_taken_0x1d0008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0008) {
            ctx->pc = 0x1D00FCu;
            goto label_1d00fc;
        }
    }
    ctx->pc = 0x1D0010u;
label_1d0010:
    // 0x1d0010: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d0010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d0014: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d0014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0018: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1d0018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d001c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0020: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d0020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0024: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1d0024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1d0028: 0x24061e8b  addiu       $a2, $zero, 0x1E8B
    ctx->pc = 0x1d0028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7819));
    // 0x1d002c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d002cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0030: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d0030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d0034: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1D0034u;
    SET_GPR_U32(ctx, 31, 0x1D003Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1D0034u, 0x1D003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D003Cu;
label_1d003c:
    // 0x1d003c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d0040: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0040u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0044: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d0044u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0048: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d0048u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d004c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d004cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0050: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1D0050u;
    SET_GPR_U32(ctx, 31, 0x1D0058u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1D0050u, 0x1D0058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0058u;
label_1d0058:
    // 0x1d0058: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d005c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1d005cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d0060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0064: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1d0064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1d0068:
    // 0x1d0068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d0068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d006c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d006cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0070: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1D0070u;
    SET_GPR_U32(ctx, 31, 0x1D0078u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D0070u, 0x1D0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0078u;
label_1d0078:
    // 0x1d0078: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d0078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d007c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1D007Cu;
    SET_GPR_U32(ctx, 31, 0x1D0084u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D007Cu, 0x1D0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0084u;
label_1d0084:
    // 0x1d0084: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0088: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d0088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d008c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d008cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0090: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1D0090u;
    SET_GPR_U32(ctx, 31, 0x1D0098u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1D0090u, 0x1D0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0098u;
label_1d0098:
    // 0x1d0098: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d009c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1D009Cu;
    SET_GPR_U32(ctx, 31, 0x1D00A4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D009Cu, 0x1D00A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00A4u;
label_1d00a4:
    // 0x1d00a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1d00a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1d00ac: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D00ACu;
    {
        const bool branch_taken_0x1d00ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d00ac) {
            ctx->pc = 0x1D00FCu;
            goto label_1d00fc;
        }
    }
    ctx->pc = 0x1D00B4u;
    // 0x1d00b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00b8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1d00b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d00c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d00c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d00c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1d00ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d00d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d00dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00e0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1d00e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d00e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d00e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1d00ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d00f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d00f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d00f8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1d00f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1d00fc:
    // 0x1d00fc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d00fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0104: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d0104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d0108: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0110u;
}
