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

// Function: entry_00226948
// Address: 0x226948 - 0x2269f8
void entry_00226948_0x226948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226948_0x226948");
#endif

    switch (ctx->pc) {
        case 0x226974u: goto label_226974;
        case 0x226990u: goto label_226990;
        case 0x2269a8u: goto label_2269a8;
        case 0x2269b4u: goto label_2269b4;
        case 0x2269e4u: goto label_2269e4;
        default: break;
    }

    ctx->pc = 0x226948u;

    // 0x226948: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22694c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x22694cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226950: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226954: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x226954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226958: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x226958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22695c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226960: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x226960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x226964: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x226964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x226968: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x226968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22696c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22696Cu;
    SET_GPR_U32(ctx, 31, 0x226974u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22696Cu, 0x226974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226974u;
label_226974:
    // 0x226974: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x226974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x226978: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22697c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226980: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x226980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226984: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x226984u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226988: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x226988u;
    SET_GPR_U32(ctx, 31, 0x226990u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x226988u, 0x226990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226990u;
label_226990:
    // 0x226990: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226994: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x226994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x226998: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22699c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2269a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2269A0u;
    SET_GPR_U32(ctx, 31, 0x2269A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2269A0u, 0x2269A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269A8u;
label_2269a8:
    // 0x2269a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2269a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2269ACu;
    SET_GPR_U32(ctx, 31, 0x2269B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2269ACu, 0x2269B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269B4u;
label_2269b4:
    // 0x2269b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2269b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2269b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2269bc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2269BCu;
    {
        const bool branch_taken_0x2269bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269bc) {
            ctx->pc = 0x226A64u;
            return;
        }
    }
    ctx->pc = 0x2269C4u;
    // 0x2269c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2269c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2269ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2269d0: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x2269d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x2269d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2269d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2269d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2269d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2269dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2269DCu;
    SET_GPR_U32(ctx, 31, 0x2269E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2269DCu, 0x2269E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269E4u;
label_2269e4:
    // 0x2269e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2269e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2269e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2269e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269ec: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2269ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2269f0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2269F0u;
    {
        const bool branch_taken_0x2269f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269f0) {
            ctx->pc = 0x226A64u;
            return;
        }
    }
    ctx->pc = 0x2269F8u;
}
