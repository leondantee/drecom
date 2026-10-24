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

// Function: entry_00244094
// Address: 0x244094 - 0x244144
void entry_00244094_0x244094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244094_0x244094");
#endif

    switch (ctx->pc) {
        case 0x2440c0u: goto label_2440c0;
        case 0x2440dcu: goto label_2440dc;
        case 0x2440f4u: goto label_2440f4;
        case 0x244100u: goto label_244100;
        case 0x244130u: goto label_244130;
        default: break;
    }

    ctx->pc = 0x244094u;

    // 0x244094: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244098: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x244098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24409c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440a0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2440a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2440a4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2440a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2440a8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2440a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2440ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2440acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2440b0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2440b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2440b4: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x2440b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2440b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2440B8u;
    SET_GPR_U32(ctx, 31, 0x2440C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2440B8u, 0x2440C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440C0u;
label_2440c0:
    // 0x2440c0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2440c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2440c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2440c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2440c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2440cc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2440ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2440d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2440d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2440d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2440D4u;
    SET_GPR_U32(ctx, 31, 0x2440DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2440D4u, 0x2440DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440DCu;
label_2440dc:
    // 0x2440dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2440dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2440e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2440e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2440e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2440e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2440ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2440ECu;
    SET_GPR_U32(ctx, 31, 0x2440F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2440ECu, 0x2440F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440F4u;
label_2440f4:
    // 0x2440f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2440f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2440F8u;
    SET_GPR_U32(ctx, 31, 0x244100u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2440F8u, 0x244100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244100u;
label_244100:
    // 0x244100: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244104: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x244104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x244108: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x244108u;
    {
        const bool branch_taken_0x244108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244108) {
            ctx->pc = 0x2441B0u;
            return;
        }
    }
    ctx->pc = 0x244110u;
    // 0x244110: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244114: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244118: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x24411c: 0x3406f005  ori         $a2, $zero, 0xF005
    ctx->pc = 0x24411cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61445);
    // 0x244120: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244124: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244128: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244128u;
    SET_GPR_U32(ctx, 31, 0x244130u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244128u, 0x244130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244130u;
label_244130:
    // 0x244130: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x244130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244134: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244138: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x244138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x24413c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24413Cu;
    {
        const bool branch_taken_0x24413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24413c) {
            ctx->pc = 0x2441B0u;
            return;
        }
    }
    ctx->pc = 0x244144u;
}
