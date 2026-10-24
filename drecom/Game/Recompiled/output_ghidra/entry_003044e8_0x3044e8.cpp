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

// Function: entry_003044e8
// Address: 0x3044e8 - 0x3045b4
void entry_003044e8_0x3044e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003044e8_0x3044e8");
#endif

    switch (ctx->pc) {
        case 0x304514u: goto label_304514;
        case 0x304528u: goto label_304528;
        case 0x304540u: goto label_304540;
        case 0x30454cu: goto label_30454c;
        case 0x30455cu: goto label_30455c;
        case 0x304568u: goto label_304568;
        default: break;
    }

    ctx->pc = 0x3044e8u;

    // 0x3044e8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3044e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3044ec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3044ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3044f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3044f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3044f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3044f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3044f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3044f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3044fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3044fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304500: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x304500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x304504: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x304504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304508: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x304508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x30450c: 0xc05c848  jal         func_172120
    ctx->pc = 0x30450Cu;
    SET_GPR_U32(ctx, 31, 0x304514u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30450Cu, 0x304514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304514u;
label_304514:
    // 0x304514: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304518: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x304518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30451c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30451cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x304520: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x304520u;
    SET_GPR_U32(ctx, 31, 0x304528u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x304520u, 0x304528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304528u;
label_304528:
    // 0x304528: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30452c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x304530: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304534: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304534u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304538: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x304538u;
    SET_GPR_U32(ctx, 31, 0x304540u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304538u, 0x304540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304540u;
label_304540:
    // 0x304540: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304544: 0xc05cd10  jal         func_173440
    ctx->pc = 0x304544u;
    SET_GPR_U32(ctx, 31, 0x30454Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x304544u, 0x30454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30454Cu;
label_30454c:
    // 0x30454c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304550: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304554: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304554u;
    SET_GPR_U32(ctx, 31, 0x30455Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304554u, 0x30455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30455Cu;
label_30455c:
    // 0x30455c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30455cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304560: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x304560u;
    SET_GPR_U32(ctx, 31, 0x304568u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x304560u, 0x304568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304568u;
label_304568:
    // 0x304568: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30456c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30456cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x304570: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x304570u;
    {
        const bool branch_taken_0x304570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304570) {
            ctx->pc = 0x3045B4u;
            return;
        }
    }
    ctx->pc = 0x304578u;
    // 0x304578: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x304578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x30457c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304580: 0xac641340  sw          $a0, 0x1340($v1)
    ctx->pc = 0x304580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 4));
    // 0x304584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304588: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30458c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30458cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x304590: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304594: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304598: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x304598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30459c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3045a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3045a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3045a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3045a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3045a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3045a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3045ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3045acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3045b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3045b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3045b4u;
}
