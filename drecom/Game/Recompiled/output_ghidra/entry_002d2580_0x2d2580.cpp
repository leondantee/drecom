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

// Function: entry_002d2580
// Address: 0x2d2580 - 0x2d2610
void entry_002d2580_0x2d2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2580_0x2d2580");
#endif

    switch (ctx->pc) {
        case 0x2d258cu: goto label_2d258c;
        case 0x2d2598u: goto label_2d2598;
        default: break;
    }

    ctx->pc = 0x2d2580u;

    // 0x2d2580: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2584: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x2D2584u;
    SET_GPR_U32(ctx, 31, 0x2D258Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x2D2584u, 0x2D258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D258Cu;
label_2d258c:
    // 0x2d258c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2590: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2D2590u;
    SET_GPR_U32(ctx, 31, 0x2D2598u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2D2590u, 0x2D2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2598u;
label_2d2598:
    // 0x2d2598: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d259c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d259cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d25a0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D25A0u;
    {
        const bool branch_taken_0x2d25a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25a0) {
            ctx->pc = 0x2D2628u;
            return;
        }
    }
    ctx->pc = 0x2D25A8u;
    // 0x2d25a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d25ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d25b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d25b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25b8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d25b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d25bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d25c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d25c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d25c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d25cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d25d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d25d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d25d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d25d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2d25dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d25e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d25e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d25e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D25E8u;
    {
        const bool branch_taken_0x2d25e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25e8) {
            ctx->pc = 0x2D2610u;
            return;
        }
    }
    ctx->pc = 0x2D25F0u;
    // 0x2d25f0: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2d25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2d25f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d25f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d25f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d25f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d25fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2600: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d2600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d2604: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d2604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d2608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2608u;
    {
        const bool branch_taken_0x2d2608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2608) {
            ctx->pc = 0x2D2628u;
            return;
        }
    }
    ctx->pc = 0x2D2610u;
}
