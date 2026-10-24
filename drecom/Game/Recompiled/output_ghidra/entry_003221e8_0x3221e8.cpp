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

// Function: entry_003221e8
// Address: 0x3221e8 - 0x3222cc
void entry_003221e8_0x3221e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003221e8_0x3221e8");
#endif

    switch (ctx->pc) {
        case 0x32220cu: goto label_32220c;
        case 0x3222a0u: goto label_3222a0;
        default: break;
    }

    ctx->pc = 0x3221e8u;

    // 0x3221e8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x3221e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3221ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3221ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3221f0: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x3221f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x3221f4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3221f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3221f8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3221f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3221fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3221fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322200: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322200u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322204: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x322204u;
    SET_GPR_U32(ctx, 31, 0x32220Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x322204u, 0x32220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32220Cu;
label_32220c:
    // 0x32220c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32220cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322210: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x322210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x322214: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322218: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32221c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x32221cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x322220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322224: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322228: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x322228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x32222c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32222cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322230: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322230u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322234: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x322234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x322238: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32223c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322240: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322244: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x322244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x322248: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32224c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x32224cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322250: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x322250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x322254: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322258: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32225c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x32225cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x322260: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322264: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322264u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322268: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x322268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x32226c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32226cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322270: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322270u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322274: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x322274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x322278: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32227c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x32227cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322280: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x322280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x322284: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322288: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32228c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x32228cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x322290: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322294: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x322294u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x322298: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x322298u;
    SET_GPR_U32(ctx, 31, 0x3222A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x322298u, 0x3222A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222A0u;
label_3222a0:
    // 0x3222a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3222a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3222a4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3222a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3222a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3222a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3222ac: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3222acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3222b0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3222b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3222b4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3222b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3222b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3222B8u;
    {
        const bool branch_taken_0x3222b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3222b8) {
            ctx->pc = 0x3222CCu;
            return;
        }
    }
    ctx->pc = 0x3222C0u;
    // 0x3222c0: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x3222c0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3222c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3222C4u;
    {
        const bool branch_taken_0x3222c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3222c4) {
            ctx->pc = 0x3222F0u;
            return;
        }
    }
    ctx->pc = 0x3222CCu;
}
