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

// Function: entry_001ca138
// Address: 0x1ca138 - 0x1ca1c0
void entry_001ca138_0x1ca138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca138_0x1ca138");
#endif

    switch (ctx->pc) {
        case 0x1ca184u: goto label_1ca184;
        case 0x1ca1b0u: goto label_1ca1b0;
        default: break;
    }

    ctx->pc = 0x1ca138u;

    // 0x1ca138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca13c: 0x84431278  lh          $v1, 0x1278($v0)
    ctx->pc = 0x1ca13cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1ca140: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CA140u;
    {
        const bool branch_taken_0x1ca140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca140) {
            ctx->pc = 0x1CA1C0u;
            return;
        }
    }
    ctx->pc = 0x1CA148u;
    // 0x1ca148: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca14c: 0x84441278  lh          $a0, 0x1278($v0)
    ctx->pc = 0x1ca14cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1ca150: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x1ca150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ca154: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x1ca154u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ca158: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca15c: 0x8c4413e8  lw          $a0, 0x13E8($v0)
    ctx->pc = 0x1ca15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1ca160: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CA160u;
    {
        const bool branch_taken_0x1ca160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca160) {
            ctx->pc = 0x1CA238u;
            return;
        }
    }
    ctx->pc = 0x1CA168u;
    // 0x1ca168: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca16c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca170: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1ca170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1ca174: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1ca174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ca178: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1ca178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1ca17c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CA17Cu;
    SET_GPR_U32(ctx, 31, 0x1CA184u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CA17Cu, 0x1CA184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA184u;
label_1ca184:
    // 0x1ca184: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca188: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1ca188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1ca18c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1ca18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1ca190: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ca190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ca194: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ca194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ca198: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca19c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1a0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1ca1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca1a4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1ca1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca1a8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CA1A8u;
    SET_GPR_U32(ctx, 31, 0x1CA1B0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CA1A8u, 0x1CA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1B0u;
label_1ca1b0:
    // 0x1ca1b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ca1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ca1b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CA1B8u;
    {
        const bool branch_taken_0x1ca1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1b8) {
            ctx->pc = 0x1CA238u;
            return;
        }
    }
    ctx->pc = 0x1CA1C0u;
}
