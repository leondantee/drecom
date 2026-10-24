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

// Function: entry_00199b3c
// Address: 0x199b3c - 0x199bd0
void entry_00199b3c_0x199b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b3c_0x199b3c");
#endif

    switch (ctx->pc) {
        case 0x199b68u: goto label_199b68;
        case 0x199b7cu: goto label_199b7c;
        case 0x199b90u: goto label_199b90;
        default: break;
    }

    ctx->pc = 0x199b3cu;

    // 0x199b3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b40: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x199b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b48: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x199b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x199b4c: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x199b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x199b50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x199b54: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x199b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x199b58: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x199b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199b5c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x199b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x199b60: 0xc05c848  jal         func_172120
    ctx->pc = 0x199B60u;
    SET_GPR_U32(ctx, 31, 0x199B68u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x199B60u, 0x199B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B68u;
label_199b68:
    // 0x199b68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b6c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199b70: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199b70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199b74: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x199B74u;
    SET_GPR_U32(ctx, 31, 0x199B7Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x199B74u, 0x199B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B7Cu;
label_199b7c:
    // 0x199b7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b80: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x199b84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b88: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x199B88u;
    SET_GPR_U32(ctx, 31, 0x199B90u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x199B88u, 0x199B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B90u;
label_199b90:
    // 0x199b90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b94: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x199b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x199b98: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x199B98u;
    {
        const bool branch_taken_0x199b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b98) {
            ctx->pc = 0x199BD0u;
            return;
        }
    }
    ctx->pc = 0x199BA0u;
    // 0x199ba0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x199ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199ba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199ba8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x199ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x199bac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x199bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199bb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199bb4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x199bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x199bb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199bbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x199bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x199bc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199bc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x199bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x199bc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199bcc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x199bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x199bd0u;
}
