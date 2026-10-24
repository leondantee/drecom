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

// Function: entry_0034a504
// Address: 0x34a504 - 0x34a594
void entry_0034a504_0x34a504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a504_0x34a504");
#endif

    switch (ctx->pc) {
        case 0x34a530u: goto label_34a530;
        case 0x34a56cu: goto label_34a56c;
        default: break;
    }

    ctx->pc = 0x34a504u;

    // 0x34a504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a50c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34a50cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a514: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a518: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34a518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34a51c: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x34a51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x34a520: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34a520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a524: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34a524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34a528: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34A528u;
    SET_GPR_U32(ctx, 31, 0x34A530u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34A528u, 0x34A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A530u;
label_34a530:
    // 0x34a530: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a534: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34a538: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34a538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34a53c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34a540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a544: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34a544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34a548: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34a548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34a54c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x34a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x34a550: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34a554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34a554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a55c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a560: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34a560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34a564: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A564u;
    SET_GPR_U32(ctx, 31, 0x34A56Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A564u, 0x34A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A56Cu;
label_34a56c:
    // 0x34a56c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34a570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34a574: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34A574u;
    {
        const bool branch_taken_0x34a574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a574) {
            ctx->pc = 0x34A594u;
            return;
        }
    }
    ctx->pc = 0x34A57Cu;
    // 0x34a57c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x34a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x34a580: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34a580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34a584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34a584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a588: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a58c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a590: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34a590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x34a594u;
}
