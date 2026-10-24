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

// Function: entry_00245184
// Address: 0x245184 - 0x245234
void entry_00245184_0x245184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245184_0x245184");
#endif

    switch (ctx->pc) {
        case 0x2451b0u: goto label_2451b0;
        case 0x2451ccu: goto label_2451cc;
        case 0x2451e4u: goto label_2451e4;
        case 0x2451f0u: goto label_2451f0;
        case 0x245220u: goto label_245220;
        default: break;
    }

    ctx->pc = 0x245184u;

    // 0x245184: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x245184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245188: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x245188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24518c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245190: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x245190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245194: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x245194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x245198: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x245198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24519c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24519cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2451a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2451a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2451a4: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2451a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2451a8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2451A8u;
    SET_GPR_U32(ctx, 31, 0x2451B0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2451A8u, 0x2451B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451B0u;
label_2451b0:
    // 0x2451b0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2451b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2451b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2451b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451b8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2451b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2451bc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2451bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2451c0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2451c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2451c4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2451C4u;
    SET_GPR_U32(ctx, 31, 0x2451CCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2451C4u, 0x2451CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451CCu;
label_2451cc:
    // 0x2451cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2451ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2451d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2451d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2451d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2451d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2451dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2451DCu;
    SET_GPR_U32(ctx, 31, 0x2451E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2451DCu, 0x2451E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451E4u;
label_2451e4:
    // 0x2451e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2451e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451e8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2451E8u;
    SET_GPR_U32(ctx, 31, 0x2451F0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2451E8u, 0x2451F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451F0u;
label_2451f0:
    // 0x2451f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2451f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451f4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2451f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2451f8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2451F8u;
    {
        const bool branch_taken_0x2451f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2451f8) {
            ctx->pc = 0x245284u;
            return;
        }
    }
    ctx->pc = 0x245200u;
    // 0x245200: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245204: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x245204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245208: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x245208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x24520c: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x24520cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x245210: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245214: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x245218: 0xc0965d0  jal         func_259740
    ctx->pc = 0x245218u;
    SET_GPR_U32(ctx, 31, 0x245220u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245218u, 0x245220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245220u;
label_245220:
    // 0x245220: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x245220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245224: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245228: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x245228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x24522c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24522Cu;
    {
        const bool branch_taken_0x24522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24522c) {
            ctx->pc = 0x245284u;
            return;
        }
    }
    ctx->pc = 0x245234u;
}
