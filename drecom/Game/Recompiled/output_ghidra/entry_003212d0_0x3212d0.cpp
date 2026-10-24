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

// Function: entry_003212d0
// Address: 0x3212d0 - 0x321368
void entry_003212d0_0x3212d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003212d0_0x3212d0");
#endif

    switch (ctx->pc) {
        case 0x321320u: goto label_321320;
        case 0x32133cu: goto label_32133c;
        case 0x321360u: goto label_321360;
        default: break;
    }

    ctx->pc = 0x3212d0u;

    // 0x3212d0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x3212d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3212d4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3212d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212d8: 0xa0a40345  sb          $a0, 0x345($a1)
    ctx->pc = 0x3212d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x3212dc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3212dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212e0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x3212e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3212e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3212e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3212e8: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x3212e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3212ec: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3212ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3212f0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3212f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212f4: 0xa0c50348  sb          $a1, 0x348($a2)
    ctx->pc = 0x3212f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x3212f8: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x3212f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3212fc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x3212fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x321300: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321304: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x321304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x321308: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32130c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321310: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x321310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x321314: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x321314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x321318: 0xc040c80  jal         func_103200
    ctx->pc = 0x321318u;
    SET_GPR_U32(ctx, 31, 0x321320u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x321320u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321320u) { return; }
    ctx->pc = 0x321320u;
label_321320:
    // 0x321320: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x321320u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321324: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321328: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x321328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32132c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x32132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x321330: 0xc44c027c  lwc1        $f12, 0x27C($v0)
    ctx->pc = 0x321330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x321334: 0xc040c8c  jal         func_103230
    ctx->pc = 0x321334u;
    SET_GPR_U32(ctx, 31, 0x32133Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x32133Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32133Cu) { return; }
    ctx->pc = 0x32133Cu;
label_32133c:
    // 0x32133c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32133cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321340: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x321340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321344: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x321344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x321348: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x321348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32134c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321350: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x321350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321354: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x321354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x321358: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x321358u;
    SET_GPR_U32(ctx, 31, 0x321360u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x321358u, 0x321360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321360u;
label_321360:
    // 0x321360: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x321360u;
    {
        const bool branch_taken_0x321360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321360) {
            ctx->pc = 0x321390u;
            return;
        }
    }
    ctx->pc = 0x321368u;
}
