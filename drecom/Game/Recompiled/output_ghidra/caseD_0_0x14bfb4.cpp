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

// Function: caseD_0
// Address: 0x14bfb4 - 0x14c048
void caseD_0_0x14bfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14bfb4");
#endif

    switch (ctx->pc) {
        case 0x14bfd4u: goto label_14bfd4;
        case 0x14bff4u: goto label_14bff4;
        case 0x14c014u: goto label_14c014;
        case 0x14c024u: goto label_14c024;
        default: break;
    }

    ctx->pc = 0x14bfb4u;

    // 0x14bfb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bfb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bfbc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14bfc0: 0x24060aa5  addiu       $a2, $zero, 0xAA5
    ctx->pc = 0x14bfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2725));
    // 0x14bfc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14bfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bfc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14bfc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14bfcc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14BFCCu;
    SET_GPR_U32(ctx, 31, 0x14BFD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14BFCCu, 0x14BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFD4u;
label_14bfd4:
    // 0x14bfd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bfd8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14bfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bfdc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bfe4: 0x0  nop
    ctx->pc = 0x14bfe4u;
    // NOP
    // 0x14bfe8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x14bfe8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14bfec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14BFECu;
    SET_GPR_U32(ctx, 31, 0x14BFF4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14BFECu, 0x14BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFF4u;
label_14bff4:
    // 0x14bff4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bff8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14bff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14bffc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c000: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c004: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x14c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c008: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14c008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14c00c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14C00Cu;
    SET_GPR_U32(ctx, 31, 0x14C014u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14C00Cu, 0x14C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C014u;
label_14c014:
    // 0x14c014: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14c014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14c018: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x14c018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c01c: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x14C01Cu;
    SET_GPR_U32(ctx, 31, 0x14C024u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x14C01Cu, 0x14C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C024u;
label_14c024:
    // 0x14c024: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c028: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x14c028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x14c02c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c030: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14c034: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C034u;
    {
        const bool branch_taken_0x14c034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c034) {
            ctx->pc = 0x14C048u;
            return;
        }
    }
    ctx->pc = 0x14C03Cu;
    // 0x14c03c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14c040: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c044: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14c044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x14c048u;
}
