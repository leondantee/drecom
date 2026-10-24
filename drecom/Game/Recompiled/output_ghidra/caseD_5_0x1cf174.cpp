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

// Function: caseD_5
// Address: 0x1cf174 - 0x1cf208
void caseD_5_0x1cf174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1cf174");
#endif

    switch (ctx->pc) {
        case 0x1cf1d4u: goto label_1cf1d4;
        case 0x1cf200u: goto label_1cf200;
        default: break;
    }

    ctx->pc = 0x1cf174u;

    // 0x1cf174: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf178: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cf17c: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1cf17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1cf180: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cf180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cf184: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cf184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1cf188: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf18c: 0x84661278  lh          $a2, 0x1278($v1)
    ctx->pc = 0x1cf18cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1cf190: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CF190u;
    {
        const bool branch_taken_0x1cf190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf190) {
            ctx->pc = 0x1CF208u;
            return;
        }
    }
    ctx->pc = 0x1CF198u;
    // 0x1cf198: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf19c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1cf1a0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1cf1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cf1a4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1cf1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf1a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf1ac: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cf1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1cf1b0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CF1B0u;
    {
        const bool branch_taken_0x1cf1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1b0) {
            ctx->pc = 0x1CF208u;
            return;
        }
    }
    ctx->pc = 0x1CF1B8u;
    // 0x1cf1b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf1bc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf1c0: 0x8cc313e8  lw          $v1, 0x13E8($a2)
    ctx->pc = 0x1cf1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5096)));
    // 0x1cf1c4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1cf1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1cf1c8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1cf1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cf1cc: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CF1CCu;
    SET_GPR_U32(ctx, 31, 0x1CF1D4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CF1CCu, 0x1CF1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D4u;
label_1cf1d4:
    // 0x1cf1d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf1d8: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cf1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cf1dc: 0x3c053e49  lui         $a1, 0x3E49
    ctx->pc = 0x1cf1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15945 << 16));
    // 0x1cf1e0: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x1cf1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1cf1e4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cf1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf1e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf1ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf1f0: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1cf1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf1f4: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cf1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cf1f8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CF1F8u;
    SET_GPR_U32(ctx, 31, 0x1CF200u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CF1F8u, 0x1CF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF200u;
label_1cf200:
    // 0x1cf200: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf204: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cf204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    ctx->pc = 0x1cf208u;
}
