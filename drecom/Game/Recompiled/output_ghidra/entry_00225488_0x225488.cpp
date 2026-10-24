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

// Function: entry_00225488
// Address: 0x225488 - 0x225538
void entry_00225488_0x225488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225488_0x225488");
#endif

    switch (ctx->pc) {
        case 0x2254b4u: goto label_2254b4;
        case 0x2254d0u: goto label_2254d0;
        case 0x2254e8u: goto label_2254e8;
        case 0x2254f4u: goto label_2254f4;
        case 0x225524u: goto label_225524;
        default: break;
    }

    ctx->pc = 0x225488u;

    // 0x225488: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22548c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x22548cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225490: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225494: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225498: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22549c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2254a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2254a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2254a4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2254a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2254a8: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x2254a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2254ac: 0xc05c848  jal         func_172120
    ctx->pc = 0x2254ACu;
    SET_GPR_U32(ctx, 31, 0x2254B4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2254ACu, 0x2254B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254B4u;
label_2254b4:
    // 0x2254b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2254b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2254b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2254b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254bc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2254bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2254c0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2254c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2254c4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2254c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2254c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2254C8u;
    SET_GPR_U32(ctx, 31, 0x2254D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2254C8u, 0x2254D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254D0u;
label_2254d0:
    // 0x2254d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2254d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2254d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2254d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2254d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2254dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2254e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2254E0u;
    SET_GPR_U32(ctx, 31, 0x2254E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2254E0u, 0x2254E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254E8u;
label_2254e8:
    // 0x2254e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2254e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254ec: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2254ECu;
    SET_GPR_U32(ctx, 31, 0x2254F4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2254ECu, 0x2254F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254F4u;
label_2254f4:
    // 0x2254f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2254f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2254f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2254fc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2254FCu;
    {
        const bool branch_taken_0x2254fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2254fc) {
            ctx->pc = 0x2255A4u;
            return;
        }
    }
    ctx->pc = 0x225504u;
    // 0x225504: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225508: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22550c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22550cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225510: 0x24067805  addiu       $a2, $zero, 0x7805
    ctx->pc = 0x225510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30725));
    // 0x225514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225518: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22551c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22551Cu;
    SET_GPR_U32(ctx, 31, 0x225524u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22551Cu, 0x225524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225524u;
label_225524:
    // 0x225524: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x225524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225528: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22552c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22552cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x225530: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x225530u;
    {
        const bool branch_taken_0x225530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225530) {
            ctx->pc = 0x2255A4u;
            return;
        }
    }
    ctx->pc = 0x225538u;
}
