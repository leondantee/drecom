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

// Function: entry_001c7044
// Address: 0x1c7044 - 0x1c70d8
void entry_001c7044_0x1c7044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7044_0x1c7044");
#endif

    switch (ctx->pc) {
        case 0x1c70a4u: goto label_1c70a4;
        case 0x1c70d0u: goto label_1c70d0;
        default: break;
    }

    ctx->pc = 0x1c7044u;

    // 0x1c7044: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7048: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c7048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c704c: 0x3c108040  lui         $s0, 0x8040
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32832 << 16));
    // 0x1c7050: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x1c7050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x1c7054: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1c7054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1c7058: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c705c: 0x84441278  lh          $a0, 0x1278($v0)
    ctx->pc = 0x1c705cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1c7060: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C7060u;
    {
        const bool branch_taken_0x1c7060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7060) {
            ctx->pc = 0x1C70D8u;
            return;
        }
    }
    ctx->pc = 0x1C7068u;
    // 0x1c7068: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c706c: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x1c706cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1c7070: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1c7070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c7074: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1c7074u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c7078: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c707c: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1c707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c7080: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C7080u;
    {
        const bool branch_taken_0x1c7080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7080) {
            ctx->pc = 0x1C70D8u;
            return;
        }
    }
    ctx->pc = 0x1C7088u;
    // 0x1c7088: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c708c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7090: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c7090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1c7094: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1c7094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1c7098: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c7098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c709c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1C709Cu;
    SET_GPR_U32(ctx, 31, 0x1C70A4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C709Cu, 0x1C70A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70A4u;
label_1c70a4:
    // 0x1c70a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c70a8: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c70a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1c70ac: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1c70acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x1c70b0: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x1c70b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c70b4: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1c70b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c70b8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c70b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c70bc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c70bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c70c0: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1c70c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c70c4: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1c70c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c70c8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1C70C8u;
    SET_GPR_U32(ctx, 31, 0x1C70D0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C70C8u, 0x1C70D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70D0u;
label_1c70d0:
    // 0x1c70d0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c70d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c70d4: 0xe4e000d4  swc1        $f0, 0xD4($a3)
    ctx->pc = 0x1c70d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
    ctx->pc = 0x1c70d8u;
}
