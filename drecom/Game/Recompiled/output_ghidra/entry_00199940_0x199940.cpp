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

// Function: entry_00199940
// Address: 0x199940 - 0x1999bc
void entry_00199940_0x199940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199940_0x199940");
#endif

    switch (ctx->pc) {
        case 0x19996cu: goto label_19996c;
        case 0x199980u: goto label_199980;
        case 0x199994u: goto label_199994;
        default: break;
    }

    ctx->pc = 0x199940u;

    // 0x199940: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199944: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x199944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19994c: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x199950: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x199950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x199954: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x199958: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x199958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x19995c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x19995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199960: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x199964: 0xc05c848  jal         func_172120
    ctx->pc = 0x199964u;
    SET_GPR_U32(ctx, 31, 0x19996Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x199964u, 0x19996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19996Cu;
label_19996c:
    // 0x19996c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199970: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199974: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199974u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199978: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x199978u;
    SET_GPR_U32(ctx, 31, 0x199980u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x199978u, 0x199980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199980u;
label_199980:
    // 0x199980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199984: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x199988: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19998c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19998Cu;
    SET_GPR_U32(ctx, 31, 0x199994u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19998Cu, 0x199994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199994u;
label_199994:
    // 0x199994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199998: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x199998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19999c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x19999Cu;
    {
        const bool branch_taken_0x19999c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19999c) {
            ctx->pc = 0x199BD0u;
            return;
        }
    }
    ctx->pc = 0x1999A4u;
    // 0x1999a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1999a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1999a8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1999a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1999ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1999b0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1999b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1999b4: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1999B4u;
    {
        const bool branch_taken_0x1999b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1999b4) {
            ctx->pc = 0x199BD0u;
            return;
        }
    }
    ctx->pc = 0x1999BCu;
}
