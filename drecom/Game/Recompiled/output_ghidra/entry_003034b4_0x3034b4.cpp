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

// Function: entry_003034b4
// Address: 0x3034b4 - 0x3035ec
void entry_003034b4_0x3034b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003034b4_0x3034b4");
#endif

    switch (ctx->pc) {
        case 0x3034c4u: goto label_3034c4;
        case 0x3034d0u: goto label_3034d0;
        case 0x3034e0u: goto label_3034e0;
        case 0x3034ecu: goto label_3034ec;
        case 0x3035acu: goto label_3035ac;
        default: break;
    }

    ctx->pc = 0x3034b4u;

    // 0x3034b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3034b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3034b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3034bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3034BCu;
    SET_GPR_U32(ctx, 31, 0x3034C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3034BCu, 0x3034C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034C4u;
label_3034c4:
    // 0x3034c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3034c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3034C8u;
    SET_GPR_U32(ctx, 31, 0x3034D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3034C8u, 0x3034D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034D0u;
label_3034d0:
    // 0x3034d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3034d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3034d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3034d8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3034D8u;
    SET_GPR_U32(ctx, 31, 0x3034E0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3034D8u, 0x3034E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034E0u;
label_3034e0:
    // 0x3034e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3034e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034e4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3034E4u;
    SET_GPR_U32(ctx, 31, 0x3034ECu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3034E4u, 0x3034ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034ECu;
label_3034ec:
    // 0x3034ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3034ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3034f0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3034f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3034f4: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x3034F4u;
    {
        const bool branch_taken_0x3034f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3034f4) {
            ctx->pc = 0x303654u;
            return;
        }
    }
    ctx->pc = 0x3034FCu;
    // 0x3034fc: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x3034fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x303500: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303504: 0xac64136c  sw          $a0, 0x136C($v1)
    ctx->pc = 0x303504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4972), GPR_U32(ctx, 4));
    // 0x303508: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x303508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30350c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303510: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x303510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x303514: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x303514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303518: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30351c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30351cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x303520: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303524: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x303528: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30352c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30352cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x303530: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303534: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x303538: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30353c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x30353cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x303540: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x303540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x303544: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x303544u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x303548: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x303548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30354c: 0x14830041  bne         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x30354Cu;
    {
        const bool branch_taken_0x30354c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30354c) {
            ctx->pc = 0x303654u;
            return;
        }
    }
    ctx->pc = 0x303554u;
    // 0x303554: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x303554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303558: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x303558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30355c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x30355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x303560: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x303560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x303564: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x303564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x303568: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30356c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30356cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x303570: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x303570u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x303574: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x303574u;
    {
        const bool branch_taken_0x303574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x303574) {
            ctx->pc = 0x303654u;
            return;
        }
    }
    ctx->pc = 0x30357Cu;
    // 0x30357c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303580: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x303580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x303584: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303588: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x303588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x30358c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x303590: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x303590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x303594: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x303594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x303598: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x303598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30359c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3035a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3035a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3035a4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3035A4u;
    SET_GPR_U32(ctx, 31, 0x3035ACu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3035A4u, 0x3035ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3035ACu;
label_3035ac:
    // 0x3035ac: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3035ACu;
    {
        const bool branch_taken_0x3035ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3035ac) {
            ctx->pc = 0x303654u;
            return;
        }
    }
    ctx->pc = 0x3035B4u;
    // 0x3035b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3035b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3035b8: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x3035b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x3035bc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3035bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3035c0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3035c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3035c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3035c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3035c8: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3035C8u;
    {
        const bool branch_taken_0x3035c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3035c8) {
            ctx->pc = 0x303624u;
            return;
        }
    }
    ctx->pc = 0x3035D0u;
    // 0x3035d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3035d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3035d4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3035D4u;
    {
        const bool branch_taken_0x3035d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3035d4) {
            ctx->pc = 0x3035ECu;
            return;
        }
    }
    ctx->pc = 0x3035DCu;
    // 0x3035dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3035DCu;
    {
        const bool branch_taken_0x3035dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3035dc) {
            ctx->pc = 0x3035ECu;
            return;
        }
    }
    ctx->pc = 0x3035E4u;
    // 0x3035e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3035E4u;
    {
        const bool branch_taken_0x3035e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3035e4) {
            ctx->pc = 0x303654u;
            return;
        }
    }
    ctx->pc = 0x3035ECu;
}
