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

// Function: caseD_1
// Address: 0x1c6af4 - 0x1c6b74
void caseD_1_0x1c6af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1c6af4");
#endif

    switch (ctx->pc) {
        case 0x1c6b40u: goto label_1c6b40;
        case 0x1c6b6cu: goto label_1c6b6c;
        default: break;
    }

    ctx->pc = 0x1c6af4u;

    // 0x1c6af4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6af8: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x1c6af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1c6afc: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C6AFCu;
    {
        const bool branch_taken_0x1c6afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6afc) {
            ctx->pc = 0x1C6B74u;
            return;
        }
    }
    ctx->pc = 0x1C6B04u;
    // 0x1c6b04: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b08: 0x84c51278  lh          $a1, 0x1278($a2)
    ctx->pc = 0x1c6b08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x1c6b0c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1c6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c6b10: 0xa4c31278  sh          $v1, 0x1278($a2)
    ctx->pc = 0x1c6b10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6b14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b18: 0x8c7013e8  lw          $s0, 0x13E8($v1)
    ctx->pc = 0x1c6b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c6b1c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6B1Cu;
    {
        const bool branch_taken_0x1c6b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b1c) {
            ctx->pc = 0x1C6B74u;
            return;
        }
    }
    ctx->pc = 0x1C6B24u;
    // 0x1c6b24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b28: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b2c: 0x8ca313e8  lw          $v1, 0x13E8($a1)
    ctx->pc = 0x1c6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1c6b30: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1c6b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1c6b34: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c6b38: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1C6B38u;
    SET_GPR_U32(ctx, 31, 0x1C6B40u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C6B38u, 0x1C6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B40u;
label_1c6b40:
    // 0x1c6b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b44: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c6b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1c6b48: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1c6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x1c6b4c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1c6b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c6b50: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x1c6b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c6b54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b58: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b5c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1c6b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c6b60: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x1c6b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c6b64: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1C6B64u;
    SET_GPR_U32(ctx, 31, 0x1C6B6Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C6B64u, 0x1C6B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B6Cu;
label_1c6b6c:
    // 0x1c6b6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b70: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c6b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x1c6b74u;
}
